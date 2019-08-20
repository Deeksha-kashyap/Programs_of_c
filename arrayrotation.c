//
// Created by Deeksha Kashyap on 8/20/2019.
//
#include<stdio.h>
int main()
{
    int i,n,arr[10],temp;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(n>0)
    {
        arr[0]=temp;
        for(i=0;i<n-1;i++)
            arr[i]=arr[i+1];
        arr[i]=temp;
    }

}
