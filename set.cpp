#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> S;
    set<int>::iterator it;  // set iterator

    /* insert elements from 1 to 6 in arbitrary order
     * - value 1 gets inserted twice
     */
    S.insert(3);
    S.insert(1);
    S.insert(5);
    S.insert(4);
    S.insert(1);
    S.insert(6);
    S.insert(2);

    // print all elements
    for(it = S.begin();it != S.end();++it) 
        cout << *it << ' ';
    cout << '\n';
    
    // erase elements, note that 0 is not in the set
    S.erase(1);
    S.erase(0);

    // print all elements
    for(it = S.begin();it != S.end();++it) 
        cout << *it << ' ';
    cout << '\n';
    
    // erase all elements
    S.clear();
    
    cout << "  size():     " << S.size()     << '\n';
    
    return 0;
}
