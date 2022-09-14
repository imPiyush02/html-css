#include<stdio.h>
int main()
{
    int a,b,rectangle,radius;
    float triangle,circle;
    printf("Enter The Length\n");
    scanf("%d",&a);
    printf("Enter The width:\n");
    scanf("%d",&b);
    rectangle=a*b;
    triangle=(a*b);
    printf("\nArea of rectangle is:%d\n",rectangle);
    printf("\nArea of triangle is:%d\n\n",triangle);
    printf("\nEnter The Radius:\n");
    scanf("%d",&radius);
    circle=3.14*radius*radius;
    printf("\narea of circle is:%f",circle);
    return 0;
}