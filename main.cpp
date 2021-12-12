#include<iostream>
#include<stdio.h>
#include "header.h"

using namespace std;

int num;
int main()
{
    cout<<"How many inputs?\n";
    cin>>num;
    int given[num];

    for(int i=0; i<num; i++)
    {
        cin>>given[i];
    }

    int x;
    cout<<"\n\n1. Create Linked List\n2. Create BST\n3. Apply Bubble Sort\n4. Apply Selection Sort\n5. Apply Binary Search\n";
    cin>>x;

    if(x==1){
        Linkedlist(num,given);
    }

    else if(x==2){
        bst(num,given);
    }

    else if(x==3){
        bubble(num,given);
    }

    else if(x==4){
        selection(num,given);
    }
    else if(x==5){
        binary_s(num,given);
    }
}
