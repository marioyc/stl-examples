#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    vector<int>::iterator it;

    // insert elements from 1 to 6 in arbitrary order
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    v.push_back(3);

    // find and print minimum and maximum elements
    it = min_element (v.begin(), v.end());
    cout << "min: " << *it << endl;
    it = max_element (v.begin(), v.end());
    cout << "max: " << *it << endl;

    // sort all elements
    sort(v.begin(), v.end());

    // find the first element with value 3
    it = find(v.begin(), v.end(),  // range
                3);                        // value

    // reverse the vector
    reverse(v.begin(),v.end());

    // print all elements
    for(int i = 0;i < v.size();++i)
        cout << v[i] << ' ';
    cout << '\n';
    
    v.clear();
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    
    // erase contiguous repeated elements
    v.erase(unique(v.begin(),v.end()),v.end());

    // print all elements
    for(int i = 0;i < v.size();++i)
        cout << v[i] << ' ';
    cout << '\n';
    
    v.clear();
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    
    // erase all repeated
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    // print all elements
    for(int i = 0;i < v.size();++i)
        cout << v[i] << ' ';
    cout << '\n';
    
    return 0;
}
