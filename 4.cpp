#include <iostream>
using namespace std;


int main(){
    int n,m;
    cin >> n >> m;
    int num=1;

    for (int i=1; i<=n; i++){
        int x = num;
        for (int j=1; j<=m; j++){
            if((i%2)==1){
                cout << num++;
                if(j==m) cout << endl;
                else cout << " ";
            }
            else{
                cout << 2*x+(m-1)-(num++);
                if(j==m) cout << endl;
                else cout << " ";
            }
        }
    }
}