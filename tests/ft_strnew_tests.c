#include "libft_tests.h"
#include <string.h>

static int	test_100()
{
	char *p;
	char p2[100] = {0};

	p = ft_strnew(100);
	return (ft_test("strnew(100)", memcmp(p, p2, 100) == 0));
}

static int	test_empty()
{
	char *p;

	p = ft_strnew(0);
	return (ft_test("strnew(0)", p == NULL));
}

int			ft_strnew_tests()
{
	printf("ft_strnew\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_100);
	return (0);
}
