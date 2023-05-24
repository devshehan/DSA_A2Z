#include <bits/stdc++.h>

using namespace std;

int main(){

    // MAX HEAP PRIORITY Q
    priority_queue<int> pq;

    pq.push(34);
    pq.push(3);
    pq.push(4);
    pq.push(200);


    // remove 200 (top)
    pq.pop();


    // 34
    cout << pq.top() << endl;


    //  MIN HEAP PRIORITY Q
    priority_queue<int, vector<int>, greater<int>> pqm;

    pqm.push(200);
    pqm.push(300);
    pqm.push(600);
    pqm.push(900);

    //remove top 200
    pqm.pop();

    cout << pqm.top() << endl;

    return 0;
}