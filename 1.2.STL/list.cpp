#include <bits/stdc++.h>

using namespace std;

int main(){

    //list is same as the vector
    // but it also has front end operations
    // list -> doubly linked list
    // vector -> singly linked list


    list<int> ls;

    ls.push_back(5);
    ls.push_front(6);
    ls.push_back(34);
    ls.push_back(30);
    ls.pop_back();
    ls.pop_front();

    for(list<int>::iterator k = ls.begin(); k != ls.end(); k++){
        cout << *k << " ";
    }

    cout << endl;

    // THERE IS ANOTHER DATA STRUCTURE WHICH IS CALLS 'DEQUE' SAME AS THE VECTOR AND LIST.

    return 0;
}