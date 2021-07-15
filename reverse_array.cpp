/******************************************************************************

Given an array (or string), the task is to reverse the array/string.
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

void reverse_array(int arr[], int s, int e){
    if(s<=e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        
        reverse_array(arr, s+1, e-1);
    }else{
        return;
    }
}


void print(int arr[], int n){
    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }
     cout << endl;
     
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Original array ->" << endl;
    print(arr,n);
    
    cout << "Reversed array ->" << endl;
    reverse_array(arr,0,n-1);
    print(arr,n);
    
    
    return 0;
}
