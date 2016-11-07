#include "libft_tests.h"

static int	test()
{
	char *p;

	p = ft_strnew(100);
	ft_strdel(&p);
	return (ft_test("strdel(p)", p == NULL));
}

int			ft_strdel_tests()
{
	printf("ft_strdel\n");
	ft_run_test(&test);
	return (0);
}
