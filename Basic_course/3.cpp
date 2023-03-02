#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int num = 1;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout << num++;
            if(j!=m) cout << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15 
16 17 18 19 20
*/