#include <bits/stdc++.h>

using namespace std;

int main(){

    char x = '*';

    for(int i=5; i>0; --i){
        for(int j=0; j<i; ++j){
            cout << x;
        }
        cout << endl;
    }

    return 0;
}