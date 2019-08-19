//
// Created by Deeksha Kashyap on 8/19/2019.
//
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    float a[50],large,small;
    printf("size of vector/value:");
    scanf("%d",&n);
    printf("\n vector elements are \n");
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);
    large=a[0];small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>large)
            large=a[i];
        else if(a[i]<small)
            small=a[i];
    }
    printf("\n Largest element in vector is %8.2f\n",large);
    printf("\n Smallest element in vector is %8.2f\n",small);
    getch();
}
