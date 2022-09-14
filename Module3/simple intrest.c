#include<stdio.h>
void main()
{
float amt,rate,time,si;
//clrscr();
printf("\nEnter The Amount:");
scanf("%f",&amt);
printf("enter the rate :");
scanf("%f",&rate);
printf("Enter the time:");
scanf("%f",&time);
si=(amt*rate*time)/100;
printf("simple intrest=%f",si);
getch();
return (0);
}