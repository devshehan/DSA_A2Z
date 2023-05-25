#include <bits/stdc++.h>

using namespace std;

void reverseNumber(int a){

    int x = 0;

    while(a>0){
        int y = a%10;
        x = (x*10) + y;
        a = a/10;
    }

    cout << x << endl;
}

int main(){
    int n;
    cin >> n;

    reverseNumber(n);

    return 0;
}