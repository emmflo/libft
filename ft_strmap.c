#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char	*res;

	res = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = (*f)(s[i]);
		i++;
	}
	return (res);
}
