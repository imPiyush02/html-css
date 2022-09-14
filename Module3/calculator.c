#include <stdio.h>
void main()
{
   int add,sub,mul,div,mod,a,b;
   printf("Enter the first number :");
   scanf("%d",&a);
   printf("Enter the secend number:");
   scanf("%d",&b);
   add=a+b;
   sub=a-b;
   mul=a*b;
   div=a/b;
   mod=a%b;
   printf("The Addition of two number is %d\n",add);
   printf("The subtriction of two number is %d\n",sub);
   printf("The Multiplication  of two number is %d\n",mul);
   printf("The Divison of two number is %d\n",div);
   printf("The module of two number is %d\n",mod);
   
   // getch();
}