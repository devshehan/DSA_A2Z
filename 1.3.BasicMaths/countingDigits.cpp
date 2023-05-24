#include <bits/stdc++.h>

using namespace std;


int countingDigits(int a){

    int count = 0;
    int y = a;
    while(y>0){
        y /= 10;
        count ++;
    }

    return count;
}

int main(){
    int n;
    cin >> n;

    cout << countingDigits(n) << endl;
}