#include<stdio.h>
void main()
{
    int n,a,i,j,k;
    HERE:printf("enter the type of pattern:(1 or 2)");
    scanf("%d", &a);
    printf("\nenter the number of rows:");
    scanf("%d",&n);
    switch(a)
   {
       case 1:   for( i=n;i>0;i--)
                    {

                      for( j=1;j<=i;j++)
                      { printf("#"); }
                      printf("\n");

                    }
                    break;
       case 2:    for( i=1;i<=n;i++)
                    {

                      for( j=(n-i);j>0;j--)
                      { printf(" "); }
                      for( k=1;k<=i;k++)
                      { printf("#"); }
                      printf("\n");

                    }
                break;
        default: printf("THERE ARE ONLY TWO PATTERNS AVAILABLE.\n");
                goto HERE;

    }}
