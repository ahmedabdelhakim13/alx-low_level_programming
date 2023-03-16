#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int m = 4;
char h = 'a';
float n = 12.5;
printf("%d \n%d \n%d \n%d \n%d \n" sizeof(h) , sizeof(m) ,(long) sizeof(m) , (long long) sizeof(m) , sizeof(n) ); 
return (0);
}
