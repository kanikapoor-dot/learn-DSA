#include<iostream>
using namespace std;

void display(int a[]){
    for(int i = 0;i <= 4;i++){
        cout << a[i] << " ";
    }
}

int partition(int a[],int s,int e) {
    int pivot = a[e];
    int pIndex = s;
    for(int i = s;i < e;i++){
        if(a[i] < pivot){
            int temp = a[i];
            a[i] = a[pIndex];
            a[pIndex] = temp;
            pIndex++;
        }
    }
    int temp = a[e];
    a[e] = a[pIndex];
    a[pIndex] = temp;
    return pIndex;
}

void quicksort(int a[],int s,int e){
    if(s<e){
        int p = partition(a,s,e);
        quicksort(a,s,p-1);
        quicksort(a,p+1,e);
   
    }
}

int main() {
    int a[5] = {5,2,7,4,1};
    //before sorting 
    cout << "Before Sorting \n";
    display(a);

    //quicksort
    quicksort(a,0,4);

    //After sorting
    cout << "\nAfter Sorting\n";
    display(a);

    //quicksort


    return 0;
}