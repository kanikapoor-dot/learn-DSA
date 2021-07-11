#include<iostream>

using namespace std;

int main() {

cout << "Two Dimenstional Array X Pointer\n";
int b[2][3] = {{11,12,13},{21,22,23}};
cout << "It returns b[0] * 3 array : "<< b <<"\nIt returns b[1] * 3 array :  "<< b+1;
//way of assigning 2 dimensional array to a pointer variable is 

int (*p)[3] = b;

cout << "\npointer variable : " << p <<  "\nPointer var prints next address : " << p+1;
cout << "\nPrint value of pointers";
cout << "\nPointer value call by (*p)[3] : " << (*p)[0];

cout << "\nPointer variable : " << p <<  "\nPointer var prints next address : " << p+1;

return 0;
}