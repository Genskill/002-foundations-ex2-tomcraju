#include<stdio.h>
void main()
{
    float a,b,c,x,y,z;
    printf("enter the sides of the triangle:");
    scanf("%f %f %f", &a,&b,&c);
    printf("side 1 %f \nside 2 %f \nside 3 %f",a,b,c);
    if(a>b && a>c)
    {
        x=(b*b)+(c*c);

        if (x==(a*a))
            printf("\nyes");
        else
         printf("\nno");
    }
    else if(b>c)
    {
        y=(a*a)+(c*c);
        if(y==(b*b))
            printf("\nyes");
        else
         printf("\nno");
    }
    else if(c>b)
    {
        z=(a*a)+(b*b);
        if(z==(c*c))
            printf("\nyes");
        else
         printf("\nno");
    }
    else
         printf("\nno");
}
