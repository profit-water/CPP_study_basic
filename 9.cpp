/*
삼각형의 높이 N을 입력받아서 아래와 같이 문자 'A'부터 차례대로 맨 오른쪽 가운데 행부터 차례대로 아래와 같이 채워서 
삼각형 모양을 출력하는 프로그램을 작성하시오.

< 처리조건 >
(1) 오른쪽 가운데 행에 문자 'A'를 채우고 왼쪽 열로 이동하여 위에서 아래로 채워나간다.
(2) 가장 왼쪽 행까지 반복하여 모두 채워 나간다. (문자 'Z'다음에는 'A'부터 다시 시작한다.)
*/ 

#include <stdio.h>
#include <iostream>

int main(){
    char arr[100][50] = {0};
    char a = 'A';
    int n;

    scanf("%d",&n);

    if(n%2==0 || n<1 || n>100){
        printf("INPUT ERROR\n");
        return 0;
    }

    for (int i=n/2; i>=0; i--){
        for(int j=i; j<=(n/2)*2-i; j++){
            arr[j][i] = a++;
            if(a>'Z') a = 'A';
        }
    }

    for (int i=0; i<n/2+1; i++){
        for(int j=0; j<=i; j++){
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i=n/2+1; i<n; i++){
        for (int j=0; j<n-i; j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
E
F B
G C A
H D
I
*/ 