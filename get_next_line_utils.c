#include "get_next_line.h"

void *ft_calloc(size_t count, size_t size)
{
	void *alloc;

	alloc = malloc(count * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, count * size);
	return (alloc);
}

void ft_bzero(void *s, size_t n)
{
	size_t count;
	char *str;

	str = s;
	count = 0;
	while (count != n)
	{
		str[count] = '\0';
		count++;
	}
}
