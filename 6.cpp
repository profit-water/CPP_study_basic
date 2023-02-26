/*
정사각형의 한 변의 길이 n을 입력받은 후 다음과 같은 문자로 된 정사각형 형태로 출력하는 프로그램을 작성하시오.

< 처리조건 >
문자의 진행 순서는 맨 오른쪽 아래에서 위쪽으로 'A'부터 차례대로 채워나가는 방법으로 아래 표와 같이 왼쪽 위까지 채워 넣는다. 
'Z' 다음에는 다시 'A'부터 반복된다.
*/

#include <stdio.h>
#include <iostream>

int main(){
    int i,j;
    int n;

    scanf("%d", &n);
    char** arr = (char**)malloc(sizeof(char*)*n);
    for (i=0; i<n; i++){
        arr[i] = (char*)malloc(sizeof(char)*n);
    }

    char a = 'A';
    for(i=n-1; i>=0; i--){
        for(j=n-1; j>=0; j--){
            if( a == 'Z'+1 ) a = 'A';
            arr[j][i] = a++;
        }
    }
    
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                printf("%c ", arr[i][j]);
            }
            printf("\n");
        }

    return 0;

}

/*
P L H D
O K G C
N J F B
M I E A
*/