#include<stdio.h>
#include<conio.h>
int main()
{
 int count_words=0,i;
 char str[20];
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
   if(str[i]==' ')
      count_words++;
 }
 printf("\nNumber of words in string : % d",count_words+1);
 return 0;
}
