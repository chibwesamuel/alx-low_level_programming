#include <stdio.h>                                                                                                                      
/**                                                                                                                                     
 * main - print letters of the alphabet in lowercase                                                                      
 *
 * Description: using the main function                                                                                                 
 * this program prints letters of the alphabet                                                                                          
 *
 * Return: 0
 */ 
int main(void)
{
	char y;
	
	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
