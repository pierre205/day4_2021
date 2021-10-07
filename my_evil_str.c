/*
** EPITECH PROJECT, 2021
** day4_2021
** File description:
** my_evil_str
*/

void my_putchar(char c);

int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    char c;
    int i = 0;
    int j = my_strlen(str) - 1;


    while (i < j)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i = i + 1;
        j = j - 1;
    }
    return (str);
}