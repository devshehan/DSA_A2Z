#include <bits/stdc++.h>
using namespace std;

int main(){
    // 1D array
    int ar[5];
    ar[0] = 250;
    cout << ar[0] << endl;

    // 2D array
    int arr[4][8];
    arr[3][7] = 200;
    cout << arr[3][7] << endl;

    //String
    string name = "devshehaan";
    int len = name.size();

    //print 2 last elements
    cout << name[len-2] << " " <<  name[len-1] << endl;

    return 0;
}