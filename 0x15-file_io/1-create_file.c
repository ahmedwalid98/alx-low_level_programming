#include "main.h"
/**
 * create_file - creats a file
 * @filename: name of file
 * @text_content: file content
 * Return: 1 on success, -1 on failuer
 */
int create_file(const char *filename, char *text_content)
{
	int c, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	c = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(c, text_content, len);
	if (c == -1 || w == -1)
		return (-1);
	close(c);
	return (1);
}
