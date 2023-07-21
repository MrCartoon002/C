#include <stdio.h>
int main()
{
    char str1[255];
    int  i;
   printf("Input a sentence: ");
   gets(str1);
   printf("The original string:\n");
   puts(str1);
   i=0;
    while(str1[i]!='\0')
    {
        if(str1[i]=='a' ||str1[i]=='e' ||str1[i]=='i' ||str1[i]=='o' ||str1[i]=='u')
            str1[i]=str1[i]-32;
        i++;
    }
    printf("After converting vowels into upper case the sentence becomes:\n");
    puts(str1);
}
