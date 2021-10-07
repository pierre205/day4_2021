/*
** EPITECH PROJECT, 2021
** day4_2021
** File description:
** my_sort_int_array
*/

void my_swap(int *a, int *b);

void my_sort_int_array(int *array, int size)
{
    int modif = 1;
    int pos;

    while (modif == 1) {
        pos = 0;
        modif = 0;
        while (pos < (size - 1)) {
            if (array[pos] > array[pos + 1]) {
                my_swap(array + pos, array + pos + 1);
                modif = 1;
            }
            pos = pos + 1;
        }
    }
}