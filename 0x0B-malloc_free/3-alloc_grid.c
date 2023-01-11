#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - join string
 *@width:string
 *@height: string
 * Return: return ptr.
 */
int **alloc_grid(int width, int height)
{
int **ptr;
int i, j;

if (width < 1 || height < 1)
return (NULL);
ptr = malloc(height * sizeof(int *));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; i < height; i++)
{
ptr[i] = malloc(width * sizeof(int));
if (ptr[i] == NULL)
{
for (i--; i >= 0; i--)
free(ptr[i]);
free(ptr);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
ptr[i][j] = 0;
return (ptr);
}
