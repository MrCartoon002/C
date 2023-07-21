#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
   char string[100], word[20];

   printf("Enter the String: ");
   scanf("%s",string);

   printf("\nEnter the word to be removed: ");
   scanf("%s",word);

   int len_str, len_wrd;
   len_str = strlen(string);
   len_wrd = strlen(word);

   int i,j,temp,check=0;
   for(i=0; i<len_str; i++)
   {
      temp = i;
      for(j=0; j<len_wrd; j++)
      {
         if(string[i]==word[j])
            i++;
      }
      check = i-temp;
      if(check==len_wrd)
      {
         i = temp;
         for(j=i; j<(len_str-len_wrd); j++)
            string[j] = string[j+len_wrd];
            len_str = len_str-len_wrd;
            string[j]='\0';
      }
   }
   printf("\nNew String: %s", string);

   return 0;
}
