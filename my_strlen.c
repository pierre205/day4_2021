/*
** EPITECH PROJECT, 2021
** day4_2021
** File description:
** my_strlen
*/

void my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i = i + 1;
    }
    return (i);
}