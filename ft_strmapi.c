#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*res;

	res = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
