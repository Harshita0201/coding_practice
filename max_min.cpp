/***
  Write a  function to return minimum and maximum in an array. Your program should make the minimum number of comparisons. 
***/


//solution using tournamment method, complexity o(n)

#include<iostream>
using namespace std;
struct pair1{
    int min;
    int max;
};

struct pair1 minimum_maximum(int arr[], int l, int u){
    pair1 min_max;
    
    if(l==u){ //1 element
        min_max.min=arr[l];
        min_max.max=arr[l];
    }else if(u==l+1){ //2 elements
        if(arr[l]>arr[u]){
            min_max.max=arr[l];
            min_max.min=arr[u];
        }else{
            min_max.max=arr[u];
            min_max.min=arr[l];
        }
    }else{
        
     if(l<u){    
        int mid=(l+u)/2;
        pair1 f_min_max=minimum_maximum(arr,l,mid); //first half array min max pair
        pair1 s_min_max=minimum_maximum(arr,mid+1,u); //second half array min max pair
        
        if(f_min_max.min<s_min_max.min){ //compare the 2 halves minimums
            min_max.min = f_min_max.min;
        }else{
            min_max.min = s_min_max.min;
        }
        
        if(f_min_max.max > s_min_max.max){
            min_max.max=f_min_max.max;
        }else{
            min_max.max=s_min_max.max;
        }
     }
   }
   
    return min_max;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    pair1 p;
    p=minimum_maximum(arr,0,n-1);
    cout << "Min = " << p.min << endl;
    cout << "Max = " << p.max << endl;
    
    return 0;
}
