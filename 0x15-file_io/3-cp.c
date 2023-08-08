#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates the buffer size of 1024 bytes during execution.
 * @file: the file name that stores chars during execution.
 *
 * Return: pointer to the new buffer we alloacted.
 */
char *create_buffer(char *file)
{
	char *bufferSize;

	bufferSize = malloc(sizeof(char) * 1024);

	if (bufferSize == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bufferSize);
}

/**
 * close_file - this willd close all file descriptors.
 * @fd: represents the file descriptor to close.
 */
void close_file(int fd)
{
	int closeA;

	closeA = close(fd);

	if (closeA == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - thi will Copy the content of the file to a different file.
 * @argc: represents the number of arguments tht was supplied to the program.
 * @argv: array of pointers to the arguments supplied to main.
 *
 * Return: 0 if successful.
 *
 * Description: If the argument counted is not correct - exit code is 97.
 * and if file_from is non existent or can't be read - exit code is 98.
 * and if file_to is not created or not written to - exit code is 99.
 * and if file_to or file_from is not or can;t be closed - exit code is 100.
 */
int main(int argc, char *argv[])
{
	int fromVar, toVar, reaD, writE;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fromVar = open(argv[1], O_RDONLY);
	reaD = read(fromVar, buffer, 1024);
	toVar = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromVar == -1 || reaD == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writE = write(toVar, buffer, reaD);
		if (toVar == -1 || writE == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		reaD = read(fromVar, buffer, 1024);
		toVar = open(argv[2], O_WRONLY | O_APPEND);

	} while (reaD > 0);

	free(buffer);
	close_file(fromVar);
	close_file(toVar);

	return (0);
}
