#include "main.h"

/**
 * read_textfile - a function that reads a
 * textfile and prints it to the POSIX
 * standard output.
 * @filename: pointer to the filename.
 * @letters: number of letters to be read and
 * printed.
 *
 * Return: letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_a;
	ssize_t len1, len2;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_a = open(filename, O_RDONLY);
	if (file_a == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_a);
		return (0);
	}
	len1 = read(file_a, buffer, letters);
	close(file_a);
	if (len1 == -1)
	{
		free(buffer);
		return (0);
	}
	len2 = write(STDOUT_FILENO, buffer, len1);
	free(buffer);
	if (len1 != len2)
		return (0);
	return (len2);
}
