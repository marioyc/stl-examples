#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, float> m;
    map<string, float>::iterator it;

    // insert some elements into the map
    m["VAT"] = 0.15;
    m["Pi"] = 3.1415;
    m["an arbitrary number"] = 4983.223;
    m["Null"] = 0;

    //print all elements
    for (it = m.begin(); it != m.end(); ++it) {
        cout << "key: \"" << it->first << "\" "
             << "value: " << it->second << '\n';
    }
    
    cout << m["VAT"] << '\n';
    
    // erase all elements
    m.clear();
    
    cout << "  size():     " << m.size()     << '\n';
    
    return 0;
}
