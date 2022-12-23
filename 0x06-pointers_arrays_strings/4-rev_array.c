#include <stdio.h>
/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;
int t;
while (i < n / 2)
{
t = a[i];
a[i] = a[j];
a[j] = t;
j--;
i++;
}
}
