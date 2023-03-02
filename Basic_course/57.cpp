/*
회의실이 하나 있다. 여러 회의들이 시작 시간과 종료 시간이 예약되어 있으며, 시간대가 겹치는 회의는 동시에 개최가 불가능하다. 

따라서 같은 시간대에 속하는 회의들 중 하나만 개최하고 나머지 회의들은 버려야한다. 
단, 종료 시간과 시작 시간이 같은 경우에는 시간이 겹친다고 말하지 않는다. 

회의의 개수 N과 각 회의의 시작 시간, 종료 시간이 주어졌을 때 되도록 많은 회의를 개최하고자 한다.
회의를 최대한 많이 배정하는 프로그램을 작성하시오.​
*/

#include <stdio.h>

int main(){
    int N;
    int arr[500+10][3];
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //sort by arr[i][2]
    int temp[3];
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(arr[i][2] > arr[j][2]){
                for(int k=0; k<3; k++){
                    temp[k] = arr[i][k];
                    arr[i][k] = arr[j][k];
                    arr[j][k] = temp[k];
                }
            }
        }
    }

    int start_time = arr[0][2];
    int ans = 0;
    int list[500];
    list[0] = arr[0][0];

    for(int i=0; i<N; i++){
        if(start_time <= arr[i][1]){
            start_time = arr[i][2];
            ans++;
            //printf("start_time is %d\nanswer is %d\n", start_time, ans);
            list[ans] = arr[i][0];
        }
    }

    // for(int i=0; i<N; i++){
    //     for(int j=0; j<3; j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("%d\n",ans+1);
    for(int i=0; i<ans+1; i++){
        printf("%d ",list[i]);
    }

    return 0;
}

/*
첫 줄에는 회의의 수 N(5≤N≤500)가 주어진다.
다음 N줄에 걸쳐, 각 회의의 번호와 시작 시간과 종료 시간이 차례로 주어진다. (500 이하의 자연수)
한 회의에서 시작 시간과 종료 시간이 같은 경우는 주어지지 않는다.
<입력 예>
6
1 1 10
2 5 6
3 13 15
4 14 17
5 8 14
6 3 12

첫 줄에는 배정 가능한 최대의 회의 수를 출력하고 다음 줄부터는 배정한 회의의 번호를 시간대순으로 출력한다.
만약, 답이 여러 가지(최대 회의수가 될 수 있는 배정 방법이 여러 가지)라면 그 중 아무거나 하나 출력한다.
<출력 예>
3
2 5 4
*/