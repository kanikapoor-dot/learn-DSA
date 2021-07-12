#include<iostream>
using namespace std;

void display(int a[]){
    for(int i = 0;i < 5;i++){
        cout << a[i] << " "; 
    }
}

int minIndex(int a[],int s,int e){
    int m = s;
    ++s;
    while(s <= e){
        if(a[s] < a[m]){
            m = s;
        }
        s++;
    }
    return m;
}

void selectionSort(int a[],int s,int e){

    for(int i = s;i <= e;i++){
        int mini = minIndex(a,i,e); 
        if(i != mini){
         swap(a[i],a[mini]);
        }
    }

    
}


int main(){

    int a[5] = {5,1,6,4,2};

    //Before Sort
    cout << "Before Sort\n";
    display(a);

    //selection sorting 

    selectionSort(a,0,4);

    //After Sort
    cout << "\nAfter Sort\n";
    display(a);

    return 0;
}