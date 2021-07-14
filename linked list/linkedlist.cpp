#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct node
{
    int data;
    struct node * next;
} s;


s* createlist(s* head){

    s *newNode , *temp;

    

    for(int i = 0;i <= 5;i++){
            // int num;
            // cout << "Enter a VAlue : ";
            // cin >> num;


            newNode = (s*)malloc(sizeof(s));

            if(newNode == NULL){
                return head;
            }

            newNode->data = i;
            newNode->next = NULL;
            
            if(head == NULL){
                head = newNode;
                temp = head;
            }

            temp->next = newNode;
            temp = newNode;
        }


    return head;
}

void printlist(s * head){

    while(head != NULL)
    {
        cout << (head->data) << " ";
        head = (head->next); 
    }
}

int main(){
    s * head = NULL;
    head = createlist(head);
    printlist(head);
    return 0;
}
