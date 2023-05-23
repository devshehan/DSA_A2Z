#include <bits/stdc++.h>

using namespace std;

void doSomething(int &a){
    a += 5;
    cout << a  << endl;
    a += 5; 
    cout << a << endl;
}

int main(){

    int x = 10;
    cout << x << endl;
    
    doSomething(x);

    cout << x << endl;

    return 0;
}