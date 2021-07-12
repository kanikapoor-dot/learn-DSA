#include<iostream>
using namespace std;


void display(int a[5]){
    for(int i = 0;i<5;i++)
    cout << a[i] << " ";
}

int main(){
    int a[5] = {5,2,3,1,6};
    //Before Sorting
    cout << "Before Sorting\n"; 
    display(a);

    //Bubble Sort
    for(int i = 0;i < 5;i++){
        for(int j = i;j < 5;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }

    //After Sorting
    cout << "\nAfter Sorting\n";
    display(a);

    return 0;
}