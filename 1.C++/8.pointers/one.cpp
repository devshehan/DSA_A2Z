#include <bits/stdc++.h>

using namespace std;
int main(){

    int x = 5;

    cout << "value of   x: " << x << endl;
    cout << "address of x: " << &x << endl;

    // pointer variable y store address of x memory
    int *y = &x;
    cout << y << endl;

    // pointer variable z store pointer address of pointer variable
    int **z = &y;
 
    cout << **z << endl;
    return 0;
}