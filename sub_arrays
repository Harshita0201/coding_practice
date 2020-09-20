/* Problem 3:  Count of subarrays having exactly K perfect square numbers. Given a unsorted integer array arr[] and an integer K. The task is to count the number of subarray with exactly K Perfect Square Numbers.
Input: arr[] = {2, 4, 9, 3}, K = 2
Output: 4
Explanation:
Since total number of perfect square number in the array are 2.
So the 4 subarrays with 2 perfect square number are:
1.{2, 4, 9}
2.{2, 4, 9, 3}
3.{4, 9}
4.{4, 9, 3}

Input: arr[] = {4, 2, 5}, K = 3
Output: 0
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int arr[100], squar_arr[100];
	int n, x, k;
	float result;
	printf("Enter the number of elements of array :\n");
    scanf("%d",&n);
	int i, d, count=0;
	printf("Enter the elements : \n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&x);
    	arr[i]=x;
        result=sqrt(x);
    	d=(int)result;
    	if(d==result)
    	{
            squar_arr[i]=x;
        	count+=1;
    	}
	}
	printf("Enter value of  k :");
    scanf("%d",&k);
 
	if(k>count)
	{
        printf("%d",0);
	}
	else if(k==count)
	{
        printf("%d",n);
	}
	else
	{
        printf("%d",2*n-count);
	}
   return 0;
}
