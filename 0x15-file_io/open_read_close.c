#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - function that opens, reads, writes and closes a file
 * @argc: number of arguments
 * @argv:  array of pointers to arrays of character objects
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	/* Create File Descriptor as 'fd'*/
	int fd;
	char buf[43];

	fd = open("AandA.txt", O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		printf("File cannot be created and opened.\n");
		exit(1);
	}

	/* Write some text to the file */
	write(fd, "First business I started and learned from\n", 42);
	close(fd);

	/* Read the file */
	fd = open("AandA.txt", O_RDONLY);

	if (fd == -1)
	{
		printf("File can neither be opened nor read.\n");
		exit(1);
	}

	read(fd, buf, 42);
	buf[42] = '\0';

	close(fd);

	printf("buf: %s\n", buf);
	return (0);
}
