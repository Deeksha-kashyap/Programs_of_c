//
// Created by Deeksha Kashyap on 8/20/2019.
//
#include<stdio.h>
int main()
{
    int i,n,arr[10],temp,m;
    printf("Enter the size of the array");
    scanf("%d",&m);
    printf("Enter the rotation number");
    scanf("%d",&n);
    printf("Enter the element of array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(n>0)
    {
        temp=arr[0];
        for(i=0;i<m-1;i++)
            arr[i]=arr[i+1];
        arr[i]=temp;
        n-=1;
    }
    for(i=0;i<m;i++)
        printf("%d",arr[i]);
}
