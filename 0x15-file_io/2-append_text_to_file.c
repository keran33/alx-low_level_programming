#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: add the content.
 *
 * Return: 1, file exists. -1, file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_a;
	int lettersn;
	int rwr;

	if (!filename)
		return (-1);

	file_a = open(filename, O_WRONLY | O_APPEND);

	if (file_a == -1)
		return (-1);

	if (text_content)
	{
		for (lettersn = 0; text_content[lettersn]; lettersn++)
			;

		rwr = write(file_a, text_content, lettersn);

		if (rwr == -1)
			return (-1);
	}

	close(file_a);

	return (1);
}
