#include<stdio.h>
int main()
{
    int n_d,y,w,d;
    printf("Enter the total day");
    scanf("%d",&n_d);
    y=n_d/365;
    w=(n_d%365)/7;
    d=(n_d%365)%7;
    printf("%d =%dyear %d weeks %d days\n",n_d,y,w,d);
    return 0;
}
