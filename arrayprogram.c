//
// Created by Deeksha Kashyap on 8/20/2019.
//
#include <stdio.h>
int main()
{
    int i,sum=0,j,max,count=0;
    int n,arr[10];
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=sum+arr[i]+arr[j];
            if(sum==max)
            {
                count++;
                sum=0;
            }else
            {
                sum=0;
            }
        }
    }
    printf("addition of a array =%d",count);
}
