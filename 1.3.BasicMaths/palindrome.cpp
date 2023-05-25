#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int reverseNum = 0;
    int k = n;
    while(n>0){
        int remain = n%10;
        reverseNum = (reverseNum*10) + remain;
        n /= 10;
    }

    if(k == reverseNum){
        cout << "true\n";
    }else{
        cout << "false\n";
    }
}