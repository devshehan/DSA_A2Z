#include  <bits/stdc++.h>

using namespace std;
int main(){

    stack<int> st;

    st.push(23);
    st.push(79);
    st.push(80);

    cout << st.top() << endl;

    st.pop();
    st.push(499);
    st.push(500);

    cout << st.size() << endl;

    cout << "top is: " << st.top() << endl;


    return 0;
}