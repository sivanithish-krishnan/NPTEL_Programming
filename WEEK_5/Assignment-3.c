/*Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not.
For example 8 can be expressed as 2^3.*/



#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* The value of N is taken from the test case data */
 
/* Complete the code.
int i = 2;
while(i < N){
  i *= 2;
}
if(i == N)
  printf("%d is a number that can be expressed as power of 2.",N);
else
  printf("%d cannot be expressed as power of 2.",N);
return 0;
}
