#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rd;
	int chars;
	int wr;

	if (!filename)
		return (-1);

	rd = open(filename, O_WRONLY | O_APPEND);

	if (rd == -1)
		return (-1);

	if (text_content)
	{
		for (chars = 0; text_content[chars]; chars++)
			;

		wr = write(rd, text_content, chars);

		if (wr == -1)
			return (-1);
	}

	close(rd);
	return (1);
}
