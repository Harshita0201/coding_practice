/*  
Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

Input:
The first line of the input contains T denoting the number of testcases. First line of each test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements.

Output:
For each testcase, in a new line, output the rotated array.

Constraints:
1 <= T <= 200
1 <= N <= 107
1 <= D <= N
0 <= arr[i] <= 105

Example:
Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6

 
*/

#include <iostream>
using namespace std;
void leftRotateByOne(int arr[], int n){
    int temp=arr[0];
    int i;
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1]; //left shift or cyclic roate by 1 starting from second element
    }
    arr[n-1]=temp; //place the first element back to origanal array (in the end)
}

void leftRotate(int arr[], int n , int d){ //cyclic rotation by d elements
    
    for(int i=0; i<d; i++){
        leftRotateByOne(arr,n);
    }
}

void print(int arr[], int n){
  for(int i=0;i <n; i++){
      cout << arr[i] << " ";
  }
  cout << endl;
}

//WITH TIME COMPLEXITY OF O(N*D)
int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    int arr[n];
	    
	    for(int i=0;i <n; i++){
	        cin >> arr[I];
	    }
	    
      leftRotate(arr,n,d);
      print(arr,n);
	  }
	return 0;
}



//With less TIME COMPLEXITY->
// int main() {

// 	int t;
// 	cin >> t;
// 	while(t--){
// 	    int n, d;
// 	    cin >> n >> d;
// 	    int arr[n];
	    
// 	    for(int i=0;i <n; i++){
// 	        cin >> arr[(i+n-d)%n];
// 	    }
	    
	     
// 	    for(int i=0;i <n; i++){
//                 cout << arr[i] << " ";
// 	    }
//         cout << endl;
	     
// 	  }
// 	return 0;
// }
