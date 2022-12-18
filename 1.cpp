#include <iostream>
#include <iomanip>

using namespace std;

bool data_valid_checker(int num){
    if( (2<=num) && (num<=9) ) return true;
    else return false;
}

int main(){
    int s;
    int e;
    bool valid_data;

    while(1){
        cin >> s >> e;
        if(data_valid_checker(s) && data_valid_checker(e)){
            if ( s>e ){
                for(int i=1; i<10; i++){
                    for( int j=s; j>=e; j--){
                        cout << j << " * " << i << " ="
                        << setw(3) << j*i;
                        if( j != e) cout << "   ";
                        else cout << endl;
                    }
                }
            }
            else{
                for(int i=1; i<10; i++){
                    for( int j=s; j<=e; j++){
                        cout << j << " * " << i << " ="
                        << setw(3) << j*i;
                        if( j != e) cout << "   ";
                        else cout << endl;
                    }
                }
            }
            return 0;
        }
        else {
            cout << "INPUT ERROR!" << endl;
        }
    }
}

/*
4 * 1 =  4   3 * 1 =  3
4 * 2 =  8   3 * 2 =  6
4 * 3 = 12   3 * 3 =  9
4 * 4 = 16   3 * 4 = 12
4 * 5 = 20   3 * 5 = 15
4 * 6 = 24   3 * 6 = 18
4 * 7 = 28   3 * 7 = 21
4 * 8 = 32   3 * 8 = 24
4 * 9 = 36   3 * 9 = 27
*/