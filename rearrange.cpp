/*
An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
*/

#include<iostream>
using namespace std;
void rearrange(int arr[], int n){
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            if(i!=j){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
            j++;
        }
    }
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    rearrange(arr,n);
    print(arr,n);
    return 0;
}
