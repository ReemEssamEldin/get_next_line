#include <unistd.h>
#include "get_next_line.h"

/* ------------------------------------------------------------------- */
/* Function to convert and print the newline character as ?            */
/* ------------------------------------------------------------------- */
void	print_newline_helper(char *buffer)
{
	while (*buffer &&  *buffer != '\0')
	{
		if (*buffer == '\n')
		{
			*buffer= '\\';
		}
		printf("%c",*buffer);
		buffer++;
	}
}

/* -------------------------------------------------------------------------- */
/* Function to read data from the file and append it to partial content.      */
/* -------------------------------------------------------------------------- */
static char *read_from_file(int fd)
{
	int			bytes_read;
	char		*cup_buffer;
	static int	count;

	count = 1;
	printf("ft_calloc#[%d]---", count++);
	//size of the buffer 3+1 for the empty string to terminate
	cup_buffer = ft_calloc (BUFFER_SIZE + 1, sizeof(char));
	if (cup_buffer == NULL)
		return (NULL);
	//read from a file by 3 characters each time
	bytes_read = read(fd, cup_buffer, BUFFER_SIZE);
	//it should stop when it reads 0 or less bytes
	if (bytes_read <= 0)
	{
		free (cup_buffer);
		return (NULL);
	}
	return(cup_buffer);
}
/* -------------------------------------------------------------------------- */
/* The get_next_line function to get the next line from the file descriptor.  */
/* -------------------------------------------------------------------------- */
char *get_next_line(int fd)
{
	char	*basin_buffer;

	basin_buffer = read_from_file(fd);
	return(basin_buffer);
}
