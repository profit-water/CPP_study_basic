/*
1부터 어떤 양의 정수 n까지의 정수를 모두 곱한 것을 말하며 n!로 나타낸다.

0! = 1
1! = 1
2! = 2
n! = n * (n-1)!
：

와 같이 정의된다.
예로 4! = 4×3×2×1 = 24 이다.
n! 이 주어졌을 때 결과를 출력하는 프로그램을 작성하라.

* 결과가 int범위를 넘는 경우 
자료형 long long 
입력/출력 서식문자 %lld 
를 사용한다.
*/

#include <stdio.h>
#include <iostream>

long long factorial(int n){
    if (n==1){
        printf("%d! = %d\n",n,n);
        return 1;
    }
    else{
        printf("%d! = %d * %d!\n",n,n,(n-1));
        return n*factorial(n-1);
    }
}

int main(){
    int n,i;
    long long result = 1;

    scanf("%d",&n);

    if(n>=1 && n<=15){
        result = factorial(n);
        printf("%lld", result);
    }
}

/*
4! = 4 * 3!
3! = 3 * 2!
2! = 2 * 1!
1! = 1
24
*/