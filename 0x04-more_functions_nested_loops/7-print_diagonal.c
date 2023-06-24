#include "main.h"

/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int row, col;
if (n > 0)
{
for (row = 0; row < n; row++)
{
for (col = 0; col < row; col++)
_putchar(' ');

_putchar('\\');

if (row == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
