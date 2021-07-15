/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int x,int y);//function declaration
int maximum(int a,int b);
int multiply(int y,int z);

int main() {
   int no1, no2;//variable declaration
   printf("Enter a value for no 1 : ");//getting inputs
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");//getting inputs
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));//printing minimum
   printf("%d ", maximum(no1, no2));//printing maximum
   printf("%d ", multiply(no1, no2));//printing multiplication

   return 0;//end of main program
}
int minimum(int x,int y)//minimum function
{
   int min;
  if(x>y)
  {
    min=y;
  }
  else
  {
    min=x;
  }
   return min;
}
int maximum(int a,int b)//maximum function
{
   int max;
  if(a>b)
  {
    max=a;
  }
  else
  {
    max=b;
  }
   return max;
}
int multiply(int y,int z)//multiply function
{
  int answer;
  answer=y*z;
  return answer;
}
