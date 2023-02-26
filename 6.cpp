/*
정사각형의 한 변의 길이 n을 입력 받은 후 다음과 같이 숫자로 된 정사각형 형태로 출력하는 프로그램을 작성하시오.
 
1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25
[n = 5 인 경우]
 
< 처리조건 >
숫자의 진행 순서는 처음에 왼쪽 위에서 아래쪽으로 n만큼 진행한 후 
바로 오른쪽 위에서 다시 아래쪽으로 진행하는 방법으로 정사각형이 될 때까지 반복한다.
*/

#include <stdio.h>
#include <iostream>

int main(){
    int i,j;
    int n;

    scanf("%d",&n);
    int** arr = (int**)malloc(sizeof(int*)*n);
    for (i=0; i<n; i++){
        arr[i] = (int*)malloc(sizeof(int)*n);
    }


    int num = 1;

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            arr[j][i] = num++;
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            std::cout << arr[i][j];
            if( j != (n-1) ) std::cout <<' ';
        }
        std::cout << std::endl;
    }

}

/*
1 5 9 13
2 6 10 14
3 7 11 15
4 8 12 16
*/