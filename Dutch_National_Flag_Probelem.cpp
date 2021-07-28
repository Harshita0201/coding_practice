/*
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.

*/


#include<bits/stdc++.h>
using namespace std;



class Solution
{
    public:
    // void swap(int a, int b){
    //     int temp=a;
    //     a=b;
    //     b=temp;
    // }
    void sort012(int arr[], int n)
    {
        
         int low = 0;    
         int high = n - 1;    
         int mid = 0;    
         // We have keep iterating till all the elements are sorted    
         while (mid <= high)    
         {    
         switch (arr[mid])    
         {    
         // Here mid is 0.    
         case 0:    
         swap(arr[low++], arr[mid++]);    
         break;    
         // Here mid is 1.    
         case 1:    
         mid++;    
         break;    
         // Here mid is 2.    
         case 2:    
         swap(arr[mid], arr[high--]);    
         break;    
         }    
         }    
         
    }
    
};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

 
