#include <unistd.h>

/**
 * main _Entry point
 *
 * Description: print using writ function.
 *      ssize_t write(int fd,const void *buf,size_t count);
 *
 * Return: 1 (error).
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
