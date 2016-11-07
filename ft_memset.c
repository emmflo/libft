#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*t;

	t = (unsigned char*)s;
	while (n > 0)
	{
		*(t++) = c;
		n--;
	}
	return (s);
}
