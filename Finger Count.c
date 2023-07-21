#include<stdio.h>

char* getfingerName(int number)
{
    int findFinger = ((number - 1)%5)+1;
    switch(findFinger)
    {
    case 1:
        return "Thumb";
        break;
    case 2:
        return "Index";
        break;
    case 3:
        return "Middle";
        break;
    case 4:
        return "Ring";
        break;
    case 5:
        return "Little";
        break;
    }
}

int main()
{
    int number;
    scanf("%d",&number);

    char* fingerName = getfingerName(number);
    printf("The finger is: %s",fingerName);
}
