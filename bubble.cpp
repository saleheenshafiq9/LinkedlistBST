#include<iostream>
#include<stdio.h>
#include "header.h"

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(int num, int arr[]){
    for(int i=0; i<num-1; i++)

    for (int j=0; j<num-i-1; j++){
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
    }

    for (int i=0; i<num; i++){
        cout << arr[i] << "\t";
    }
}
