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
                for( int j=s; j>=e; j--){
                    for ( int i=1; i<10; i++){
                        cout << j << " * " << i << " =" << setw(3) << j*i;
                        if(i%3==0) cout << endl;
                        else cout << "   ";
                    }
                    if(j!=e) cout << endl;
                }
            }
            else{
                for( int j=s; j<=e; j++){
                    for ( int i=1; i<10; i++){
                        cout << j << " * " << i << " =" << setw(3) << j*i;
                        if(i%3==0) cout << endl;
                        else cout << "   ";
                    }
                    if(j!=e) cout << "\n" << endl;
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
4 * 1 =  4   4 * 2 =  8   4 * 3 = 12
4 * 4 = 16   4 * 5 = 20   4 * 6 = 24
4 * 7 = 28   4 * 8 = 32   4 * 9 = 36

3 * 1 =  3   3 * 2 =  6   3 * 3 =  9
3 * 4 = 12   3 * 5 = 15   3 * 6 = 18
3 * 7 = 21   3 * 8 = 24   3 * 9 = 27
*/