#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *orig_dest;

	orig_dest = dest;
	while (*dest != '\0')
		dest++;
	while (*(src) != '\0')
		*(dest++) = *(src++);
	*dest = '\0';
	return (orig_dest);
}
