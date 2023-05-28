#include <bits/stdc++.h>

using namespace std;

int main(){

    // number of inputs-> 7 
    // 1 4 2 4 1 6 4
    // number of search-> 4
    // 1 23 4 11

    // output
    // 1 ->2
    // 23->0
    // 4 ->3
    // 11->0
    
    int n;
    cin >>n;

    int arr[n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }


    //precompute
    int hashr[24] = {0};
    for(int i=0; i<n; i++){
        hashr[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;

        cout << hashr[number] << endl;
    }

    return 0;
}