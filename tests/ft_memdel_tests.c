#include "libft_tests.h"

static int	test()
{
	char *p;

	p = (char*)ft_memalloc(100);
	ft_memdel((void**)&p);
	return (ft_test("memdel(p)", p == NULL));
}

int			ft_memdel_tests()
{
	printf("ft_memdel\n");
	ft_run_test(&test);
	return (0);
}
