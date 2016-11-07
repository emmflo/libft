#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;

	if (!(d = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	ft_strcpy(d, s);
	return (d);
}
