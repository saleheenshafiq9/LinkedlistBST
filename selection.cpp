#include<iostream>
#include<stdio.h>
#include "header.h"

using namespace std;

void swapSelect(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection(int num, int arr[]){
    int min;

     for(int i=0; i<num-1; i++){
        min = i;
        for(int j=i+1; j<num; j++){
            if (arr[j] < arr[min])
                min = j;
        }
        swapSelect(&arr[min], &arr[i]);
    }

    for (int i=0; i<num; i++){
        cout << arr[i] << "\t";
    }
}
