#include <bits/stdc++.h>

using namespace std;

int main(){

    int day;
    cin >> day;

    switch(day){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        default:
            cout << "Invalid check";
            break;
    }

    cout << "\ndone!" << endl;

    return 0;
}