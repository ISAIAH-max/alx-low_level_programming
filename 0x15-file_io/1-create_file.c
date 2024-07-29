#include "main.h"

/**
 *create_file -A function that creates a file.
 *@filename: The name of the file to create.
 *@text_content: is a NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f_write, f_open, length;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
		{
		}
	}
	f_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f_open == -1)
	        return (-1);

	if (text_content != NULL)
	{
	        f_write = write(f_open, text_content, length);
		if (f_write == -1)
		{
		        close(f_open);
		        return (-1);
		}
	  
	}
	close(f_open);

	return (1);
}
