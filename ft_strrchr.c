#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	
	last = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last = (char*)s;
		s++;
	}
	return (last);
}
