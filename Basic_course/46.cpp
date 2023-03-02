/*
큐는 먼저 들어온 데이터가 먼저 출력된다. 
이러한 구조를 선입선출(FIFO - First In First Out)이라고 한다.
이러한 큐 자료구조는 보통 우리의 생활에서는 매우 일상적인 자료구조이다. 
큐 자료구조의 형태를 가장 흔히 볼 수 있는 게 “줄서기”가 될 것이다. 
은행 창구에서 줄을 서거나, 버스를 기다리기 위해서 줄을 설 경우 가장 먼저 줄을 선 사람이 가장 먼저 은행 업무를 처리하거나, 
버스를 타게 된다.(새치기 하는 경우는 생각하지 말자)
그림과 같은 큐 자료구조를 설계하고, 처리조건에 맞는 출력을 하시오.

< 처리조건 >
주어지는 명령은 다음의 3가지이다.
1. "i a"는 a라는 수를 큐에 넣는다. 이때, a는 10,000 이하의 자연수이다.
2. "o"는 큐에서 데이터를 빼고, 그 데이터를 출력한다. 만약 큐가 비어있으면, "empty"를 출력한다.
3. "c"는 큐에 있는 데이터의 수를 출력한다.
*/

#include <iostream>
#include <stdio.h>

struct queue{
    int head;
    int tail;
    int arr[105];
} q = {0,0};

void push(int num){
    q.arr[q.tail++] = num;
}

void pop(){
    if(q.tail - q.head <=0) {
        printf("empty\n");
    }
    else {
        printf("%d\n",q.arr[q.head++]);
    }
}

int main(){
    char cmd;
    int N, num;
    scanf("%d",&N);
    while(N--) {
        scanf(" %c", &cmd);
        switch(cmd){
            case 'i':
                scanf("%d",&num);
                push(num);
                break;
            case 'o':
                pop();
                break;
            case 'c':
                printf("%d\n", q.tail-q.head);
        }
    }
    return 0;
}
/* 
입력 예 
7
i 7
i 5
c
o
o
o
c

출력 예
2
7
5
empty
0
*/