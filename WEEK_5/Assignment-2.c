/*Write a C program to count total number of digits of an Integer number (N).*/



#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); /*The number is accepted from the test case data*/

/* Complete the rest of the code.*/
  int count=0,n;
  n=N;
  while(n!=0)
  {
    
    n=n/10;
    count++;
  }
  printf("The number %d contains %d digits.",N,count);
}
