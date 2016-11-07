#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	return (ft_test("strdup(\"\")", strcmp(ft_strdup(""), strdup("")) == 0));
}

static int	test_abcd()
{
	return (ft_test("strdup(\"abcd\")", strcmp(ft_strdup("abcd"), strdup("abcd")) == 0));
}

int			ft_strdup_tests()
{
	printf("ft_strdup\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_abcd);
	return (0);
}
