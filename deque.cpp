#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> coll;    // deque container for floating-point elements

    // insert at the back
    for(int i = 1;i <= 6;++i)
        coll.push_back(i);
    
    // insert at the front
    for(int i = 7;i <= 12;++i)
        coll.push_front(i);

    // print all elements
    for (int i = 0;i < coll.size();++i)
        cout << coll[i] << ' ';
    cout << '\n';
    
    coll.pop_back(); // erase one element from the back
    coll.pop_front(); // erase one element from the front

    // print all elements
    for (int i = 0;i < coll.size();++i)
        cout << coll[i] << ' ';
    cout << '\n';
    
    return 0;
}
