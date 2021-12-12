#include<iostream>
#include<stdlib.h>
#include "header.h"

using namespace std;

int data1;
struct Node
{
    int data;
    Node *prev ;
    Node *next ;
};

Node *head, *tail;

void createLinkList()
{
    head = NULL;
    tail = NULL;
}

Node* createNode(int data)
{
    Node *newNode = new Node;     //TO PUT AN INTEGER DATA IN NEWNODE
    newNode->data = data;         //TO ACCESS DATA IN STRUCT POINTER
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(Node *newNode)
{
    if(head==NULL && tail==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void travarseForward()
{
    for(Node *current=head; current!=NULL; current=current->next)
    {
        cout<<current->data<<" ";
    }
}

Node* searchNode(int value)
{
    for(Node *current=head; current!=NULL; current=current->next)
    {
        if(current->data==value)
            return current;
    }
    return NULL;
}

void Linkedlist(int num, int arr[]){
    int user_inp;

    for(int i=0; i<num; i++){
        insertAtBeginning(createNode(arr[i]));
    }
    cout<<"\nTraverse Forward :\t";
    travarseForward();
    cout<<"\n";
    cout<<"Search any value?\n";
    cin>>user_inp;

    if(searchNode(user_inp)!=NULL){
        cout<<"Found\n";
    }
    else
        cout<<"Not Found\n";
}
