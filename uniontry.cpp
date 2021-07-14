#include<iostream>

using namespace std;

union uniontry
{
    int a;
    int b;
    char c;
    float f;
};


int main(){

    union uniontry t;
    
    t.c = 'w';
    t.f = 12.3;
    cout << t.f << " ";

    t.b = 5;
    cout << t.b << " ";

    t.a = 1;
    cout << t.a << " ";
    cout << t.f; //Garbage value
 
    return 0;
}