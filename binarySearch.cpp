#include<iostream>
#include<stdio.h>
#include "header.h"

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r>=l) {
        int mid = l + (r-l)/2;

        if (arr[mid]==x)
            return mid;

        if (arr[mid]>x)
            return binarySearch(arr, l, mid-1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

void binary_s(int num, int arr[]){

    int z;
    cout<<"\nEnter the value you want to search?\n";
    cin>>z;

    int result = binarySearch(arr, 0, num-1, z);
    (result == -1) ? cout << "Not Found"
                   : cout << "Found at Position " << result+1;
}

