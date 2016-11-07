#include "libft_tests.h"
#include <string.h>

static int	test()
{
	char *p;
	char p2[5] = {0};

	p = strdup("abcd");
	ft_strclr(p);
	return (ft_test("strclr(p)", memcmp(p, p2, 5) == 0));
}

int			ft_strclr_tests()
{
	printf("ft_strclr\n");
	ft_run_test(&test);
	return (0);
}
