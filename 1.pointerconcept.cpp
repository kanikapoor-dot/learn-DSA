#include<iostream>

using namespace std;

int main() {

    int a = 5; //Normal variable 
    cout << "\n";
    cout << a << " - 'a' returns assigned value \n\n";
    cout << &a << " - '&a' return address of the variable placed in memory\n\n";
    // cout << *a;  yout cant get output like that

    int* p; // try init variable without assign any value
    p = &a;

    cout << p << " - 'p' returns address of 'a' variable \n\n";
    cout << *p << " - '*p' return value of 'a' variable \n\n";
    cout << &p << " - '&p' return address of 'p' variable\n\n";

    string b[5] = {"kani","ka["};

    for(string d : b){
        cout << d << " ";
    }

    return 0;
}