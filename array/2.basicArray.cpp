#include<iostream>

using namespace std;

int main() {
    int a[5] = {45,46,47,48,49};
    int len = sizeof(a)/sizeof(a[0]); // to calculate length of given array (total bytes of array / byte of first array value)
    cout << len << " ";
    cout << sizeof(a) << " " << sizeof(a[0]);

    for(int i = 0;i < len;i++){
        cout << a + i << "="; //returns address of the array then increases.
        cout << *(a + i) << " "; //we can access array this way also *(a + position of value)
    }

    return 0;
}