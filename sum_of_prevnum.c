/* Problem 2:  Sum of previous numbers that are greater than current number for given array.  Given an array A[], for each element in the array, the task is to find the sum of all the previous elements which are strictly greater than the current elemen */
#include<stdio.h>
void sum_greater(int *arr , int n)
{
 
     for(int i=0;i<n;i++)
    {
        int initial_sum=0;
        for(int j=i-1 ; j>=0 ;j--)
        {
            if(arr[j]>arr[i])
            {
                initial_sum+=arr[j];
            }
        }
        printf("%d  ",initial_sum);
    }
 
}
int main(void)
{
    int arr[100];
    int n ;
    printf("Enter the number of elements of array \n");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
 
    sum_greater(arr,n);
 
}
