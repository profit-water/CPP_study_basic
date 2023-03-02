#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int num = 0;
int stack[102];

int pop(){
    if(num == 0) return -1;
    else return stack[--num];
}

void push(int value){
    stack[num++] = value;
}

int main(){
    int N;
    char cmd;
    int var;

    cin >> N;

    while(N--){
        scanf(" %c", &cmd);
        if (cmd == 'i'){
            scanf("%d", &var);
            push(var);
        }
        else if (cmd == 'c'){
            cout << num << endl;
        }
        else if (cmd == 'o'){
            int val = pop();
            if(val == -1){
                cout << "empty" << endl;
            }
            else {
            cout << val << endl;
            }
        }

    }

    return 0;
}