#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string
 * Return: the length
 */
size_t _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * append_text_to_file - appends text at end of file
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 on success -1 on failuer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_WRONLY | O_APPEND);
	if (fo == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fo, text_content, _strlen(text_content));
	close(fo);
	if (len == -1)
		return (-1);
	return (1);
}
