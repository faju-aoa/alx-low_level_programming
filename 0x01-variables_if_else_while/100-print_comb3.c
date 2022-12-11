#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
 
int main(void)
{
int rows = 48;
int cols= 49;

while (rows <=56)
{
while (cols <=57)
{
if (rows < cols)
{
putchar(rows);
putchar(cols);
if (rows != 56 || cols !=57)
{
putchar(',');
putchar(' ');
}
}
cols++;
} 
rows++;
}
putchar('\n');
return (0);
}
