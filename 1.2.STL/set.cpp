#include <bits/stdc++.h>

using namespace std;

int main(){

    set<int> s;

    s.insert(3);
    s.insert(5);
    s.insert(45);
    s.insert(42);
    s.insert(12);
    s.insert(2);


    // sorted and unique
    set<int>::iterator x = s.find(45);
    cout << *x << endl;

    //multiset -> sorted

    return 0;
} 