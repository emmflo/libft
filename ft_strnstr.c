#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	max_search;

	i = 0;
	max_search = len - ft_strlen(little) + 1;
	while (big[i] != '\0' && i < max_search)
	{
		j = 0;
		while (big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}