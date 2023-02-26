/*
정사각형의 한 변의 길이 n을 입력받은 후 다음과 같은 문자로 된 정사각형 형태로 출력하는 프로그램을 작성하시오.

< 처리조건 >
문자의 진행 순서는 왼쪽 위에서부터 아래쪽으로 ‘A'부터 차례대로 채워나가고 
다시 오른쪽 아래부터 위쪽으로 채워나가는 방법으로 아래 표와 같이 채워 넣는다.
'Z' 다음에는 다시 'A'부터 반복된다.

A H I P
B G J O
C F K N
D E L M
[n이 4일 경우] 
*/

#include <stdio.h>
#include <iostream>

int main(){
    int i,j;
    int n;

    scanf("%d",&n);
    char** arr = (char**)malloc(sizeof(char*)*n);
    for (i=0; i<n; i++){
        arr[i] = (char*)malloc(sizeof(char)*n);
    }

    char a = 'A';
    for (i=0; i<n; i++) {
            if (i%2 == 0) {
                for (j=0; j<n; j++) {
                    if ( a == 'Z'+1 ) {
                        a = 'A';
                        arr[j][i] = a;
                    }
                    else{
                        arr[j][i] = a++;
                    }
                }
            }
            else {
                for (j = n-1; j>=0; j--) {
                    if ( a == 'Z'+1 ) {
                        a = 'A';
                        arr[j][i] = a;
                    }
                    else{
                        arr[j][i] = a++;
                    }
                }
            }
        }
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%c ", (char)arr[i][j]);
            }
            printf("\n");
        }

    return 0;

}

/*
1 5 9 13
2 6 10 14
3 7 11 15
4 8 12 16
*/