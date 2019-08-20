//
// Created by Deeksha Kashyap on 8/20/2019.
//
#include <stdio.h>
int main()
{
    int arr[10],i,j,k,n,sum;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the element of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i <n-2; i++) {
        for (j = i + 1; j < n - 1; j++) {
            for (k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] == arr[k]) {
                    printf("%d %d %d",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
}
