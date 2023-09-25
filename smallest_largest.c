/* Find the largest and smallest number in an unsorted integer array.
WTD: Navigate through the elements of the unsorted array, continuously updating the
largest and smallest values found to identify the extremities in the array.
(e.g.: I/P: [34, 15, 88, 2]; O/P: Max: 88, Min: 2 ) */

#include <stdio.h>

void largest_smallest(int *arr,int n)
{
    int i,min,max;
    min=max=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i] < min)
        min = arr[i];
        if(arr[i] > max)
        max = arr[i];
    }
    printf("Smallest ele = %d, largest ele = %d\n",min,max);
}

int main()
{
    int arr[50],i,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    largest_smallest(arr,n);
    return 0;
}