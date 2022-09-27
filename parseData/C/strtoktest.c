#include <string.h>
#include <stdio.h>

char str[80] = "1,22,3,44,5,66,7,88,9";
char *s = ",";

void parseData(char *str, const char *delimiter)
{
    char *token;
    token = strtok(str, delimiter);
    while (token != NULL)
    {
        printf("[%s]\n", token);
        token = strtok(NULL, delimiter);
    }
}

int main()
{

    parseData(str, s);

    // //原本切割的位置加上了"\0"
    // for (int i = 0; i < 18; i++)
    //     printf("%c\n", str[i]);
    return (0);
}