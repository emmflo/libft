#include "libft_tests.h"
#include <string.h>

static int	test_100()
{
	char *p;
	char p2[100] = {0};

	p = (char*)ft_memalloc(100);
	return (ft_test("memalloc(100)", memcmp(p, p2, 100) == 0));
}

static int	test_empty()
{
	char *p;

	p = (char*)ft_memalloc(0);
	return (ft_test("memalloc(0)", p == NULL));
}

int			ft_memalloc_tests()
{
	printf("ft_memalloc\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_100);
	return (0);
}
