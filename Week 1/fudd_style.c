#include <stdio.h>
#include <string.h>
#include <cs50.h>

void printf_fudd_style(string s)
{
    int length = strlen(s);
    for (int i = 0; i < length; i++)
        if (s[i] == 'r')
            s[i] = 'w';
            
    printf("%s\n", s);
}

int main(void)
{
    string s = GetString();
    while (s != NULL)
    {
        printf_fudd_style(s);
        s = GetString();
    }
}  
