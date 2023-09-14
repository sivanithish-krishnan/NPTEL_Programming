/*Write a C program to print Largest and Smallest Word from a given sentence. 
If there are two or more words of same length, then the first one is considered. A single letter in the sentence is also consider as a word.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
scanf("%[^\n]s", str); //Accepts the sentence from the test case data.
int kg,max,min,i,j,a,maxIndex,minIndex;
    while(str[kg]!='\0')
    {
        j=0;
        while(str[kg]!=' '&&str[kg]!='\0'&&str[kg]!='.')
        {
            substr[i][j]=str[kg];
            kg++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(str[kg]!='\0')
        {
            kg++;
        }        
    }
    int len=i;
    max=strlen(substr[0]);
    min=strlen(substr[0]);
    
    for(i=0;i < len;i++)
    {
       a=strlen(substr[i]);
       if(a > max)
        {
            max=a;
            maxIndex=i;
        }
        if(a < min)
        {
            min=a;
            minIndex=i;
        }
    }    
    printf("Largest Word is: %s\nSmallest word is: %s\n",substr[maxIndex],substr[minIndex]);
    return 0;
}
