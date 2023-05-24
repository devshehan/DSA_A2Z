#include <bits/stdc++.h>

using namespace std;

void explainVector(){

    vector<int> v;

    v.push_back(5);
    v.emplace_back(23);

    vector<pair<int,int>> v2;

    v2.push_back({3,4});
    v2.emplace_back(3,4);

    // [100, 100, 100, 100, 100]
    vector<int> v3(5,100);

    //[0,0,0,0,0]
    vector<int> v4(5);

    //copy vector
    vector<int> v5(v4);

}

void practiseVector(){

    vector<int> v;

    v.push_back(5);
    v.push_back(10);
    v.push_back(34);


    vector<int>::iterator it = v.begin();

    *it++;
    cout << *(it) << endl;

    it = v.end();
    *it--;
    cout << "last value is : " << *it << endl;

    cout << "back is: " <<  v.back() << endl;


    //iterate through looop :)

    cout << "loop one" << endl;
    for(vector<int>::iterator k = v.begin(); k != v.end(); k++){
        cout << *k << " ";
    }

    cout << "\nlooop two" << endl;
    for(auto k = v.begin(); k !=v.end(); ++k){
        cout << *k << " ";
    }

    cout << "\nloop three" << endl;
    for(auto k : v){
        cout << k << " ";
    }
    //////////////////////////////////////////////////////////////

    // vector erase
    v.erase(v.begin()+1);
    cout << "\n\n";
    for(auto k : v){
        cout << k << " ";
    }

    // vector insert
    v.insert(v.begin()+1,2,4);
    cout << "\n\n";
    for(auto k : v){
        cout << k << " ";
    }
    cout << endl;

    //vector size
    cout << v.size() << endl;

    //remove last element from the backside
    v.pop_back();
    for(auto k : v){
        cout << k << " ";
    }
    cout << endl;

    //testing
    v.insert(v.end(),100);
    for(auto k: v){
        cout << k << " ";
    }

    cout << endl;

    //v.swap(v2);
    //v.clear();
}

int main(){

    // explainVector();
    practiseVector();

    return 0;
}