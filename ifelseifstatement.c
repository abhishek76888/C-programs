# include <stdio.h>

int main ()
{
      int age;
      printf("Enter your age \n");

      scanf ("%d", &age);
      printf("You have enterad %d as your age \n", age);
      
      if ( age>18)
      {
           printf("You can vote");
      }
      else if (age<18)
      {
            printf("You are not eligible for vote. You can vote after the 18.");
      }
      
      else
      {
            printf("You cannot vote");
      }
      
      return 0;
}