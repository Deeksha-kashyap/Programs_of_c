#include <stdio.h>
void leftRotatebyOne(int a[],int n);
void leftRotate(int a[],int m,int n)
{
  int i;
  for(i=0;i<m;i++)
      leftRotatebyOne(a,n);
}
void leftRotatebyOne(int a[],int n)
{
   int temp=a[0],i;
   for(i=0;i<n-1;i++)
       a[i]=a[i+1];
   a[i]=temp;
}
void print(int a[],int n)
{

}
int main() {
    printf("Hello, World!\n");
    return 0;
}