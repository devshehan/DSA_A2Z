#include <bits/stdc++.h>

using namespace std;

int main(){

    pair<int, int> p = {3,6};

    cout << p.first << "" << p.second << endl;

    pair<string, pair<string, string> > names = {"dev", {"avandors", "lowxly"}};

    cout << names.second.first << endl;

    pair<int, int> arr[] = {{2,3}, {5,6}};

    cout << arr[1].second << endl;

    return 0;
}