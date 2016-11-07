#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *(s++) != c);
	if (*(--s) == c)
		return ((char*)s);
	else
		return (NULL);
}
