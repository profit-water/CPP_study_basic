#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;
int pos, value;

void insert(){
    cin >> pos >> value;
    if(pos) {
        //v.push_back(value);
        v.insert(v.end(),value);
    }
    else v.insert(v.begin(),value);
}

void erase(){
    cin >> pos >> value;
    int cnt = 0;
    if(pos){
        for(int i=v.size()-1; i>=0; i--){
            if(v[i] >= value) {
                v.erase(v.begin()+i);
                cnt++;
                if(cnt>=3) break;
            }
        }

        /*
        for (auto it = v.end(); it!=v.begin();){
            --it;
            if(*it >= value){
                it = v.erase(it); // 중요!!!
                cnt++;
                if(cnt>=3) break;
            }
        }
        */
    }
    else {
        for (int i=0; i<v.size();){
            if(v[i] >=value){
                v.erase(v.begin()+i);
                cnt++;
                if(cnt>=3) break;
            }
            else i++;
        }

        /*
        for ( auto it = v.end(); it != v.begin();){
            --it;
            if(*it >= value){
                it = v.erase(it);
                cnt++;
                if( cnt >=3) break;
            }
        }
        */
    }
}

void print(){
    cin >> pos;
    if(pos){
        for(int i=v.size()-1; i>=0; i--) cout << v[i] << ' ';
        
        // vector <int>::reverse_iterator it;
        // for(auto it = v.rbegin(); it!=rend(); ++it) cout << *it <<' ';
    }

    else {
        for(auto x:v) cout <<x<<' ';
        //for(int i=0; i<v.size(); i++) cout << v[i] << ' ';

        // vector <int>::iterator it;
        //for (auto it =v.begin(); it!=v.end(); ++it) cout << *it << ' '; 
    }
    cout << endl;
}

bool comp(int l, int r) {
    int absl = abs(value - l);
    int absr = abs(value - r);
    if(absl != absr) return absl < absr;
    return l < r;
}

int main(){
    freopen("input_7.txt","r",stdin);
    int q, cmd;
    cin >> q;
    while (q--){
        cin >> cmd;
        if (cmd==1) insert();
        if (cmd==2) erase();
        if (cmd==3) {
            cin >> value;
            sort(v.begin(), v.end(), comp);
        }
        if (cmd==4) print();
    } 

    return 0;
}