#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd;
	ssize_t ptf, wtf;
	char *textfile;

	if (!filename)
		return (0);
	rd = open(filename, O_RDONLY);

	if (rd == -1)
		return (0);

	textfile = malloc(sizeof(char) * (letters));
	if (!textfile)
		return (0);

	ptf = read(rd, textfile, letters);
	wtf = write(STDOUT_FILENO, textfile, ptf);

	close(rd);
	free(textfile);
	return (wtf);
}
