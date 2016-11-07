#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp_dest;

	tmp_dest = (unsigned char*)dest;
	while (n > 0 && *(unsigned char*)(src) != c)
	{
		*(tmp_dest++) = *(unsigned char*)(src++);
		n--;
	}
	if (*(unsigned char*)(src) == c)
		return (tmp_dest++);
	else
		return (0);
}