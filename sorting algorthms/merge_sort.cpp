#include<iostream>
using namespace std;


void display(int a[5]){
    for(int i = 0;i<5;i++)
    cout << a[i] << " ";
}

void merge(int a[],int l,int r,int m){
    int i = l;
    int j = m+1;
    int k = l;

    int temp[5];

    while (i <= m && j <= r){
        if(a[i] <= a[j]){
            temp[k] = a[i];
            i++;
            k++;
        } else {
            temp[k] = a[j];
            j++;
            k++;
        }
    }

    while(i <= m){
        temp[k] = a[i];
        i++;
        k++;
    }

     while(j <= r){
        temp[k] = a[j];
        j++;
        k++;
    }

    for(int p = l;p <= r;p++){
        a[p] = temp[p];
    }
}

void mergesort(int a[],int l,int r){
    if(l<r){
        int m = (l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,r,m);
    }
}

int main(){

    int a[5] = {2,6,3,8,1};
    //Before sorting
    cout << "Before sorting\n";
    display(a);


    mergesort(a,0,4);

    //After sorted
    cout << "After Sorted\n";
    display(a);

    return 0;
}