#include "libft_tests.h"
#include <string.h>

static int	test_eq()
{
	return (ft_test("strequ(\"abcd\", \"abcd\")", ft_strequ("abcd", "abcd") == 1));
}

static int	test_neq()
{
	return (ft_test("strequ(\"abcd\", \"abc\")", ft_strequ("abcd", "abc") == 0));
}

int			ft_strequ_tests()
{
	printf("ft_strequ\n");
	ft_run_test(&test_eq);
	ft_run_test(&test_neq);
	return (0);
}
