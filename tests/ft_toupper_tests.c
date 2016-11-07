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
		//printf("%c %c\n", toupper(i), ft_toupper(i));
		if (toupper(i) == ft_toupper(i))
			res = 0;
		i++;
	}
	return (ft_test("test_all", res));
}

int			ft_toupper_tests()
{
	printf("ft_toupper\n");
	ft_run_test(&test);
	return (0);
}
