#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	size_t	i;

	if (size == 0)
		return (NULL);
	if (!(ptr = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (i < size)
		ptr[i++] = 0;
	return ((void*)ptr);
}
