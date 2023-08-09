#include "main.h"

/**
 * create_file - the fxn that Creates the required file during execution
 * @filename: pointer to the name of the file to be created duting execution
 * @text_content: pointer to the string to be written to the created file.
 *
 * Return: -1 if operation fails or 1 if not.
 */
int create_file(const char *filename, char *text_content)
{
	int wToRead, watToWrit, lengthUsed = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengthUsed = 0; text_content[lengthUsed];)
			lengthUsed++;
	}

	wToRead = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	watToWrit = write(wToRead, text_content, lengthUsed);

	if (wToRead == -1 || watToWrit == -1)
		return (-1);

	close(wToRead);

	return (1);
}

