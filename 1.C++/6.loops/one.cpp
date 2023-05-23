#include <bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin >> x;

    // for loop
    for(int i=0; i<x; i++){
        cout << "Hello World" << endl;
    }

    cout << endl;

    // while loop
    int i=0;
    while(i<3){
        cout << "You're the best" << endl;
        i++;
    }

    cout << endl;
    
    //do while loop
    int j = 4;
    do{
        cout << "Best version of me" << endl;
        j--;
    }while(j>0);


    return 0;
}