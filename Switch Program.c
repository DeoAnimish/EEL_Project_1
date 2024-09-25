#include<stdio.h>
int main()

{
   int a;
   printf("Switch Program\n");
   printf("Enter The value\n"); 
   scanf("%d",&a);

   if (a==1)
   {
      printf("You Have Entered %d\n",a);
      printf("The Switch Is On\n");
   }
   else if (a==0)
   {
      printf("You Have Entered %d\n",a);
      printf("The Switch Is Off\n");
   }
   else 
   {
      printf("You Have Entered %d\n",a);
      printf("Input Error\n");
   }
   return 0;
}