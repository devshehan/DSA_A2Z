#include <bits/stdc++.h>

using namespace std;

int gcdd(int a, int b){
    if(a==0){
        return b;
    }else{
        return gcdd(b%a, a);
    }
}

int main(){
    int a = 12;
    int b = 36;

    //inbuild function
    cout << gcd(a,b) << endl;

    // custom function
    cout << gcdd(a,b) << endl;
    
    if(gcdd(a,b)>1){
        cout << "relatively prime numbers" << endl;
    }
    return 0;
}