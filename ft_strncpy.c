#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*orig_dest;

	orig_dest = dest; 
	while (*src != '\0' && n > 0)
	{
		*(dest++) = *(src++);
		n--;
	}
	while (n > 0)
	{
		*(dest++) = '\0';
		n--;
	}
	return (orig_dest);
}
