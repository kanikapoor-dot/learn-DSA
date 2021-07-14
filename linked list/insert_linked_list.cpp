#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct node {
    int data;
    struct node * next;
} node;

node * head = NULL;
int count = 0;

node *createNewNode(){
    return (node*)malloc(sizeof(node));
}

void insertAtBeg(int data){
    node *newnode = createNewNode();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    count++;
}

void insertMid(int data){
    node *newnode = createNewNode();
    newnode->data = data;
    int pos;
    cout << "which Position to insert";
    cin >> pos;
    node * temp = head;
    if(pos == 0){
        return;
    }
    pos--;
    while(pos--){
        temp = temp->next;
    }
    
    newnode->next = temp->next;
    temp->next = newnode;
    count++;
}

void insertAtEnd(int data){
    node *newnode = createNewNode();
    newnode->data = data;
    newnode->next = NULL;
    node * temp = head;
    if(temp == NULL) {
        head = newnode;
    } else {
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    count++;
}

void display(){
    node *temp = head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

int main(){
    while(1){
        int option,n;
        cout << "Select Which Insertion take place: \n1,Insert at begining, \t2,Insert Middle\t3,Insert at End\t4,Exit\nList Size :" << count <<"\n > ";
        cin >> option;
        if(option == 4){
            break;
        }
        cout << "Enter > ";
        cin >> n;
        if(option == 1){
            insertAtBeg(n);
        }
        if(option == 2){
            insertMid(n);
        }
        
        if(option == 3){
            insertAtEnd(n);
        }
        
        
    }
    display();
    return 0;
}