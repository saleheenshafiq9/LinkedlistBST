#include<iostream>
#include<stdio.h>
#include "header.h"

using namespace std;

struct Node
{
    Node *parent ;
    int data ;
    Node *left, *right ;
};

Node *root=NULL ;

void createTree()
{
    root = NULL ;
}

Node* createNodeTree(int data)
{
    Node *newNode = new Node ;
    newNode->data = data ;
    newNode->parent = NULL ;
    newNode->left = NULL ;
    newNode->right = NULL ;
    return newNode ;
}

void insertData (Node *newNode, Node *parentNode)
{
    if(parentNode==NULL)
    {
        root = newNode ;
        return;
    }
    if(newNode->data < parentNode->data)
    {
        if(parentNode->left==NULL)
        {
            parentNode->left = newNode ;
            newNode->parent = parentNode ;
            return ;
        }
        insertData(newNode,parentNode->left);
    }
    if(newNode->data > parentNode->data)
    {
        if(parentNode->right==NULL)
        {
            parentNode->right = newNode ;
            newNode->parent = parentNode ;
            return;
        }

        insertData(newNode,parentNode->right);
    }
    if(newNode->data==parentNode->data)
    {
        cout<<"Can't Insert";
    }

}

void InOrderTraversal(Node *newroot)
{

    if(newroot->left!=NULL)
    {
        InOrderTraversal(newroot->left);

    }
    cout<<newroot->data<<"\t";
    if(newroot->right!=NULL)
    {
        InOrderTraversal(newroot->right);
    }
}

Node *Min(Node *curr)
{
    while(curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}

Node *SearchTree(int data , Node *root)
{
    if(root==NULL || root->data==data)
    {
        return root;
    }
   else if(data > root->data)
   {
       return SearchTree(data, root->right);
   }
   else if(data < root->data)
   {
       SearchTree(data, root->left);
   }
}

void bst(int num, int arr[])
{
    int user_inp;
    createTree();

    for(int i=0; i<num; i++)
    {
        insertData(createNodeTree(arr[i]),root);
    }

    cout<<"\nIn-Order Traversal :\t";
    InOrderTraversal(root);

    cout<<"\n";
    cout<<"Search any value?\n";
    cin>>user_inp;
    if(SearchTree(user_inp,root)==NULL)
        cout<<"Not Found"<<endl;
    else
        cout<<"Found"<<endl;
}
