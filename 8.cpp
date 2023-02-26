/*
삼각형의 높이 N을 입력받아서 아래와 같이 문자 'A'부터 차례대로 왼쪽 대각선으로 채워서 삼각형 모양을 출력하는 프로그램을 작성하시오.


< 처리조건 >
(1) 오른쪽 위부터 왼쪽 아래쪽으로 이동하면서 문자 'A'부터 차례대로 채워나간다.
(2) N번 행까지 채워지면 다시 오른쪽 둘째 행부터 왼쪽 아래로 채워나간다. 
(3) 삼각형이 모두 채워질 때까지 반복하면서 채워 나간다. (문자 'Z'다음에는 'A'부터 다시 시작한다.)
*/

#include <iostream>
#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    char arr[105][105] = {0};
    char a='A';

    for(int k=0; k<N; k++){
        for( int i=k, j=N-1; i<N; i++, j--){
            arr[i][j] = a++;
            if(a > 'Z') a = 'A';
        }
    }

    for (int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if( arr[i][j]==0 ) arr[i][j] = ' ';
        }
    }

/*
    for (int i=0; i<N; i++){
        for(int j=0; j<N-i-1; j++){
            arr[i][j] = ' ';
        }
    }
*/

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
        A
      B F
    C G J
  D H K M
E I L N O
*/