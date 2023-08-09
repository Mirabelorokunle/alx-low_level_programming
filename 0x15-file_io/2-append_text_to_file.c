#include "main.h"

/**
 * append_text_to_file - this program wil; append to the end of thr file
 * @filename: points to the name of the file thhat we are appending to.
 * @text_content: The string we want to appenf to the end of the file.
 *
 * Return: -1 If the function fails or if filename is NULL
 * If file does not exist then user does nothave write permissions -1.
 * else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int obj, watToWrit, lengthUsed = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengthUsed = 0; text_content[lengthUsed];)
			lengthUsed++;
	}

	obj = open(filename, O_WRONLY | O_APPEND);
	watToWrit = write(obj, text_content, lengthUsed);

	if (obj == -1 || watToWrit == -1)
		return (-1);

	close(obj);

	return (1);
}

