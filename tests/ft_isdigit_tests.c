#include "libft_tests.h"
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

static int	test()
{
	unsigned char	i = 0;
	int				res = 1;
	int				a;
	int				b;

	while (i < UCHAR_MAX)
	{
		a = isdigit(i) != 0 ? 1 : 0;
		b = ft_isdigit(i) != 0 ? 1 : 0;
		if (a != b)
			res = 0;
		i++;
	}
	return (ft_test("test_all", res));
}

int			ft_isdigit_tests()
{
	printf("ft_isdigit\n");
	ft_run_test(&test);
	return (0);
}
