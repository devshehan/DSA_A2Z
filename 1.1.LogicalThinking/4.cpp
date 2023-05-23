#include <bits/stdc++.h>

using namespace std;

int main(){

    char x = '*';

    for(int i=1; i<6; ++i){
        int t = i;
        for(int j=0; j<i; ++j){
            cout << t;
        }
        cout << endl;
    }

    return 0;
}