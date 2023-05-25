#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin>>n;

    int value = 0;
    int l = n;
    
    while(n>0){
        int k = n%10;
        int kt = k*k*k;
        value += kt;

        n /= 10;
    }

    if(value == l){
        cout << "true";
    }else{
        cout << "false";
    }

    return 0;
}