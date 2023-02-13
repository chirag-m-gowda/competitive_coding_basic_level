//Program to generate Floyds triangle.
#include<stdio.h>
void main()
{
    int i,j,n,p=1;
    printf("enter the number of rows:\n");
    scanf("%d",&n);
    for(i=i;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        { 
            printf("%d ",p);
            p=p+1;
        }
        
        printf("\n");
    }
}