#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;

	tmp_dest = (unsigned char*)dest;
	while (n > 0)
	{
		*(tmp_dest++) = *(unsigned char*)(src++);
		n--;
	}
	return (dest);
}
