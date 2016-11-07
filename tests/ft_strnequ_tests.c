#include "libft_tests.h"
#include <string.h>

static int	test_eq()
{
	return (ft_test("strnequ(\"abcd\", \"abcd\")", ft_strnequ("abcd", "abcd") == 0));
}

static int	test_neq()
{
	return (ft_test("strnequ(\"abcd\", \"abc\")", ft_strnequ("abcd", "abc") == 1));
}

int			ft_strnequ_tests()
{
	printf("ft_strnequ\n");
	ft_run_test(&test_eq);
	ft_run_test(&test_neq);
	return (0);
}
