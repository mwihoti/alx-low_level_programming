#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int rd;
	int chars;
	int wr;

	if (!filename)
		return (-1);
	rd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (rd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (chars = 0; text_content[chars]; chars++)
		;
	wr = write(rd, text_content, chars);

	if (wr == -1)
		return (-1);

	close(rd);
	return (1);
}
