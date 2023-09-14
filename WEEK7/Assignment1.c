/*Write a C Program to Count Number of Uppercase and Lowercase Letters in a given string. The given string may be a word or a sentence.*/


#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);  /*A word or a sentence is accepted from test case data */
#include<string.h>
#include<ctype.h>
int i,len;
   len=strlen(ch);
   for(i=0;i<len;i++)
   {
     if(isupper(ch[i]))
       
     {  upper++;
     }
     else if(islower(ch[i]))
     {
       lower++;
     }
   }
       
