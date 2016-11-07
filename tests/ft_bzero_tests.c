#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	char p[100] = {0xFF};
	char p2[100] = {0xFF};

	ft_bzero(p, 0);
	bzero(p2, 0);
	return (ft_test("bzero(p, 0)", memcmp(p, p2, 100) == 0));
}

static int	test_10_middle()
{
	char p[100] = {0xFF};
	char p2[100] = {0xFF};

	ft_bzero(p + 50, 10);
	bzero(p2 + 50, 10);
	return (ft_test("bzero(p + 50, 10)", memcmp(p, p2, 100) == 0));
}

static int	test_10_start()
{
	char p[100] = {0xFF};
	char p2[100] = {0xFF};

	ft_bzero(p, 10);
	bzero(p2, 10);
	return (ft_test("bzero(p, 10)", memcmp(p, p2, 100) == 0));
}

int			ft_bzero_tests()
{
	printf("ft_bzero\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_10_middle);
	ft_run_test(&test_10_start);
	return (0);
}
