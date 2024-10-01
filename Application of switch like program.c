#include<stdio.h>
int main()

{
   int a,b;
   printf("Circuit Condition Reporter\n");
   printf("Enter The value of Current\n"); 
   scanf("%d",&a);

   if (a>0)
   {
      printf("You Have Entered %d\n",a);
      printf("The Circuit Is On\n");
      printf("--------------\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("-----n||p-----\n");
      printf("direction of current:-->\n");
      printf("Choose Out of Following options\n");
      printf("type 0 for turning the circuit off\n");
      printf("Type 1 for keeping the circuit as it is\n");
      scanf("%d",&b);
      if (b==1)
      {
         printf("Circuit Is Kept On\n");
      }
      else if (b==0)
      {
         printf("Circuit Is Turned Off");
      }
      else
      {
         printf("Input Error\n");
      }
      
   }
   else if (a<0)
   {
      printf("You Have Entered %d\n",a);
      printf("The Circuit Is On But flowing In Opposite Direction\n");
      printf("--------------\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("-----p||n-----\n");
      printf("direction of current:<--\n");
      printf("Choose Out of Following options\n");
      printf("type 0 for turning the circuit off\n");
      printf("Type 1 for keeping the circuit as it is\n");
      printf("Type 2 to make circuit Clockwise\n");
      scanf("%d",&b);
      if (b==1)
      {
         printf("Circuit Is Kept On In Reverse Direction\n");
      }
      else if (b==0)
      {
         printf("Circuit Is Turned Off");
      }
      else if (b==2)
      {
         printf("Direction of the ciruit is corrected\n");
      }
      else
      {
         printf("Input Error\n");
      }
   }
   else if (a==0)
   {
      printf("You Have Entered %d\n",a);
      printf("The Circuit Is Switched Off \n");
      printf("-------/------\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("-----n||p-----\n");
      printf("The circuit is broken");
      printf("Choose Out of Following options\n");
      printf("type 0 to keep the circuit off\n");
      printf("Type 1 for turning the circuit On\n");
      printf("Type 2 to make circuit on on Anticlockwise\n");
      scanf("%d",&b);
      if (b==0)
      {
         printf("Circuit Is Kept off\n");
      }
      else if (b==2)
      {
         printf("Circuit Is on in anticlockwise");
      }
      else if (b==1)
      {
         printf("Circuit Is On in clockwise\n");
      }
      else
      {
         printf("Input Error\n");
      }
      
   }
   return 0;
}
