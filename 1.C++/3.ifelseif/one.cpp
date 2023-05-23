#include <bits/stdc++.h>

using namespace std;

int main(){

    int mark;
    cin >> mark;

    if(mark <= 45){
        cout << "F";
    }else if(mark < 46 && mark <= 55){
        cout << "S";
    }else if(mark < 56 && mark <= 65){
        cout << "C";
    }else if(mark < 66 && mark <= 75){
        cout << "B";
    }else if(mark <= 100){
        cout << "A";
    }else{
        cout << "Invalid input" << endl;
    }

    return 0;
}