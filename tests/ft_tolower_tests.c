#include "libft_tests.h"
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

static int	test()
{
	unsigned char	i = 0;
	int				res = 1;

	while (i < UCHAR_MAX)
	{
		if (tolower(i) == ft_tolower(i))
			res = 0;
		i++;
	}
	return (ft_test("test_all", res));
}

int			ft_tolower_tests()
{
	printf("ft_tolower\n");
	ft_run_test(&test);
	return (0);
}
