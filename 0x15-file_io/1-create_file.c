#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file.
 * @text_content: content written in the file.
 *
 * Return: 1 if success, -1 fails.
 */

int create_file(const char *filename, char *text_content)
{
	int file_a;
	int lettersn;
	int rwr;

	if (!filename)
		return (-1);

	file_a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_a == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (lettersn = 0; text_content[lettersn]; lettersn++)
		;

	rwr = write(file_a, text_content, lettersn);

	if (rwr == -1)
		return (-1);

	close(file_a);

	return (1);
}
