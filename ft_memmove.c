#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	if (!(tmp = malloc(sizeof(unsigned char) * n)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		tmp[i] = ((unsigned char*)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char*)dest)[i] = tmp[i];
		i++;
	}
	return (dest);
}
