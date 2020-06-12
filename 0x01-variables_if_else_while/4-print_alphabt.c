#include <stdio.h>

/**
* main - Entry point
*
* Return: Always (Success)
*/
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch =='q')
{
ch++;
}
putchar(ch);
}
putchar('\n');
return (0);
}
