#include<iostream>
#include<vector>

using namespace std;

int main() {
    //vector declaration

    std::vector<int> i; // declares empty integer array of size 0.
    //declares array of size 100 all elements initiallised with 1.
    std::vector<int> I(100,1); 
    // we can access element
    int a = I[6];
    cout << "a value will be 1  : " << a;
    //to get size 
    cout << "\n\nSize of the Array : " << I.size();
    //ADDING ELEMENT
    cout << "\n\nAdds 5!";
    i.push_back(5);
    cout << "\n\nAdded value : " << i[(i.size())-1];
    // REMOVE ELEMENT FROM END OF ARRAY
    cout << "\n\nRemoved value";
    i.pop_back();
    return 0;
}