#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
        if(year %400==0 )
    {
       printf("\nThis is Leap Year");
    }
else

    {
        printf("\nThis is Not Lrap year");
    }
}
