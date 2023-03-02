/*
한 개의 정수를 입력받아 입력받은 정수의 약수를 모두 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

int main(){
    int N, sq;
    int arr[10000], cnt=0;
    scanf("%d",&N);

    sq = (int)sqrt(N);
    for(int i=1; i<=sq; i++){
        if(N%i == 0){
            arr[cnt++] = i;
            if(N/i != i){
                arr[cnt++] = N/i;
            }
        }
    }

    std::sort(arr,arr+cnt);
    for(int i=0; i<cnt; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}


/*
<입력>
24
<출력>
1 2 3 4 6 8 12 24
*/