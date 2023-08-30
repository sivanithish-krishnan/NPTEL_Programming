/*Write a C Program to Find the Smallest Number among Three Numbers (integer values) using Nested IF-Else statement.*/



#include <stdio.h>
int main()
{
    int n1, n2, n3; 
    scanf("%d %d %d", &n1, &n2, &n3); /* where three number are read from the test cases and are stored in the variable n1, n2 and n3 */

/* Complete the program to get the desired output */
*/
if (n1<n2)
{ if(n1<n3)
     printf("%d is the smallest number.",n1);
  else
     printf("%d is the smallest number.",n3);
}
else if(n2<n3)
     {
      printf("%d is the smallest number.",n2);
}
else
   printf("%d is the smallest number.",n3);
}
