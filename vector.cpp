#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    // create empty vector for strings
    vector<string> sentence;

    // append some elements
    sentence.push_back("Hello,");
    sentence.push_back("how");
    sentence.push_back("are");
    sentence.push_back("you");
    sentence.push_back("?");
    
    cout << "  size():     " << sentence.size()     << '\n';

    // print elements
    for(int i = 0;i < sentence.size();++i)
        cout << sentence[i] << ' ';
    cout << '\n';

    // swap second and fourth element
    swap (sentence[1], sentence[3]);

    // assign "!" to the last element
    sentence.back() = "!";

    // print elements
    for(int i = 0;i < sentence.size();++i)
        cout << sentence[i] << ' ';
    cout << '\n';
    
    sentence.pop_back(); // erase element from the back

    // print elements
    for(int i = 0;i < sentence.size();++i)
        cout << sentence[i] << ' ';
    cout << '\n';
    
    // erase all elements
    sentence.clear();
    
    cout << "  size():     " << sentence.size()     << '\n';
    
    return 0;
}
