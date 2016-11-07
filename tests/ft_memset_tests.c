#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	char p[100] = {0};
	char p2[100] = {0};
	char *_p;
	char *_p2;

	_p = (char*)ft_memset(p, 1, 0);
	_p2 = (char*)memset(p2, 1, 0);
	return (ft_test("memset(p, 1, 0)", memcmp(_p, _p2, 100) == 0));
}

static int	test_10_1()
{
	char p[100] = {0};
	char p2[100] = {0};
	char *_p;
	char *_p2;

	_p = ft_memset(p, 1, 10);
	_p2 = memset(p2, 1, 10);
	return (ft_test("memset(p, 1, 10)", memcmp(_p, _p2, 100) == 0));
}

static int	test_10_128()
{
	char p[100] = {0};
	char p2[100] = {0};
	char *_p;
	char *_p2;

	_p = ft_memset(p, 128, 10);
	_p2 = memset(p2, 128, 10);
	return (ft_test("memset(p, 128, 10)", memcmp(_p, _p2, 100) == 0));
}

int			ft_memset_tests()
{
	printf("ft_memset\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_10_1);
	ft_run_test(&test_10_128);
	return (0);
}
