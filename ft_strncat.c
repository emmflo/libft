#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *orig_dest;

	orig_dest = dest;
	while (*dest != '\0')
		dest++;
	while (*(src) != '\0' && n-- > 0)
		*(dest++) = *(src++);
	*dest = '\0';
	return (orig_dest);
}
