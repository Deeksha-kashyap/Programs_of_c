//
// Created by Deeksha Kashyap on 8/19/2019.
//

#include<stdio.h>
void main()
{
    int n,i,r,sum=0;
    int *pn,*pi,*pr,*ps;
    pn=&n;
    pi=&i;
    pr=&r;
    ps=&sum;
    printf("Enter a number");
    scanf("%d",pn);
    for(*pi=1;*pi<*pn;(*pi)++)
    {
        *pr=(*pn)%(*pi);
        if(*pr==0)
            *ps=*ps+*pi;
    }
    if(*ps==*pn)
        printf("%d is a perfect number",*pn);
    else
        printf("%d is not a perfect number",*pn);
}