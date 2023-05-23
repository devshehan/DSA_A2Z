#include <bits/stdc++.h>

using namespace std;

// there are four type of functions can identified,
    // 1. void -> which does not return anything
    // 2. return
    // 3. parameterised
    // 4. non-parameterised


void printName(string userName){
    cout << "Your name is: " << userName << endl;
}

int sumOfTwoNumbers(int a, int b){
    return a + b;
}

int main(){

    string name;
    cin >> name;

    cout << "Enter 2 numbers: ";
    int x, y;
    cin >> x >> y;

    int res = sumOfTwoNumbers(x,y);
    cout << "Sum of two numbers: " << res << endl;

    // there are also inbuild math functions
    cout << "Inbuild math functions: \n";

    cout << "Max value of x,y : " << max(x,y) << endl;
    cout << "Min value of x,y : " << min(x,y) << endl;

    return 0;
}