#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int nb;
	int neg;

	nb = 0;
	neg = 1;
	while (( 9 <= *nptr && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			neg = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		nb = nb * 10 + ((*nptr - '0') * neg);
		nptr++;
	}
	return (nb);
}
