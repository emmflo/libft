#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	return (ft_test("strcmp(\"\", \"\")", strcmp("", "") == ft_strcmp("", "")));
}

static int	test_abcd()
{
	return (ft_test("strcmp(\"abcd\", \"abcd\")", strcmp("abcd", "abcd") == ft_strcmp("abcd", "abcd")));
}

static int	test_s1_lt_s2()
{
	return (ft_test("strcmp(\"a\", \"b\")", strcmp("a", "b") == ft_strcmp("a", "b")));
}

static int	test_s1_gt_s2()
{
	return (ft_test("strcmp(\"b\", \"a\")", strcmp("b", "a") == ft_strcmp("b", "a")));
}

int			ft_strcmp_tests()
{
	printf("ft_strcmp\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_abcd);
	ft_run_test(&test_s1_lt_s2);
	ft_run_test(&test_s1_gt_s2);
	return (0);
}
