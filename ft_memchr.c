#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char* ptr;

	ptr = (unsigned char*)s;
	while (*(ptr++) != c && n > 0)
		n--;
	if (*(--ptr) == c)
		return (ptr);
	else
		return (NULL);
}
