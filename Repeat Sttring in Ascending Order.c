#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    char string[20],temp;
    scanf("%s",string);
    int count;

    printf("Duplicate characters in a giveśn string: \n");

    //Counts each character present in the string
    for(int i = 0; i < strlen(string); i++)
    {
        count = 1;
        for(int j = i+1; j < strlen(string); j++)
        {
            if(string[i] == string[j] && string[i] != ' ')
            {
                count++;
                //Set string[j] to 0 to avoid printing visited character
                string[j] = '0';
            }
        }
        //A character is considered as duplicate if count is greater than 1
        if(count > 1 && string[i] != '0')
                {
        printf("%c ", string[i]);
                }
                {
                    if(string[i] > string[j]);
                    {
                      temp = string[i];
                      string[i] = string[j];
                      string[j] = temp;
                    }
                    printf("%c ",temp);
                }


    }

    /*void ascendingOrderString()
    {
        int i, j;
        char temp;
        int stringLength = strlen(string);
        for (i = 0; i < stringLength - 1; i++)
        {
            for (j = i + 1; j < stringLength; j++)
            {
                if (string[i] > string[j])
                {
                    temp = string[i];
                    string[i] = string[j];
                    string[j] = temp;
                }
            }
        }
    }
    getch();*/
    return 0;
}
