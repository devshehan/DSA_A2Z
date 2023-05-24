#include <bits/stdc++.h>

using namespace std;

int main(){

    queue<int> q;


    q.push(345);
    q.push(100);
    q.push(34);
    q.push(1);

    cout << q.front() << endl;
    cout << q.back()  << endl;


    q.front() += 20;

    cout << q.front() << endl;

    //pop
    // remove element from the front
    q.pop();

    cout << q.front() << endl;


    return 0;
}