// program to create an equilateral triangle with '*'

#include<stdio.h>
void main()
{
    int n,p,q,r,i;
    printf("enter the value of n:\n"); 
    scanf("%d",&n);// input the number of lines you want to form the triangle
    r=n;
    for(p=1;p<=r;p++) //main loop
    {
        for(i=(n-1);i>0;i--) // blank space creating loop
        {
            printf(" ");
        }
        n=n-1;
        for(q=0;q<((2*p)-1);q++) // '*' printing loop
        {
            printf("*");
        }
        printf("\n");
    }

}