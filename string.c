#include <stdio.h>

int StrLength(char str[])
{
    int i, length;
    length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    };
    return length;
}

void toUpperCase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
}

void toLowerCase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
}

int main(int argc, char const *argv[])
{
    char s[] = "Brasilia";

    printf("%d\n", StrLength(s));
    toLowerCase(s);
    printf("%s", s);

    return 0;
}
