#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> A) {
        for(int i = 0;i < A.size();i++){
            cout << A[i] << " ";
        }
}


int main(){
    vector<int> A = {15,5,25,19,2};

    int i =0;

    
    cout << "Unsorted Array : \n";
    display(A);

    cout << "\nDoing Insertion Sorting";

    int key,j;
    for(i = 1;i < A.size();i++){
        key = A[i];
        j = i-1;
        while (j >= 0 && A[j] > key)
        {
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1] = key;
    }

    cout << "\nAfter Sorting Array\n";
    display(A);

    return 0;
}