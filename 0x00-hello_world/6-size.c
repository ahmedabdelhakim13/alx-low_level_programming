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
printf("Size of a char:%d \nSize of an int:%d \nSize of a long int:%d \n Size of a long long int:%d \nSize of a float:%d \n" sizeof(h) , sizeof(m) ,(long)sizeof(m) , (long long)sizeof(m) , sizeof(n) ); 
return (0);
}
