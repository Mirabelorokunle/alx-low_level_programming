#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- thsi function will read STDOUT of thr ptogram
 * @filename: the file containing the text beinf read
 * @letter: the bumber of letters that will be read by tyhe progra,
 * Return:the actual number of bytes read and printed during the operation
 * and returns 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letter)
{
	char *theBuffer;
	ssize_t wToRead;
	ssize_t watToWrit;
	ssize_t theTim;

	wToRead = open(filename, O_RDONLY);
	if (wToRead == -1)
		return (0);
	theBuffer = malloc(sizeof(char) * letter);
	theTim = read(wToRead, theBuffer, letter);
	watToWrit = write(STDOUT_FILENO, theBuffer, theTim);

	free(theBuffer);
	close(wToRead);
	return (watToWrit);
}

