#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	char dest[100];
	char dest2[100];
	return (ft_test("strncpy(dest, \"\", 1)", memcmp(ft_strncpy(dest, "", 1), strncpy(dest2, "", 1), 1) == 0));
}

static int	test_empty_filled_10()
{
	char dest[100];
	char dest2[100];
	return (ft_test("strncpy(dest, \"\", 10)", memcmp(ft_strncpy(dest, "", 10), strncpy(dest2, "", 10), 10) == 0));
}

static int	test_abcd_without_nul()
{
	char dest[100];
	char dest2[100];
	return (ft_test("strncpy(dest, \"abcd\", 4)", memcmp(ft_strncpy(dest, "", 4), strncpy(dest2, "", 4), 4) == 0));
}

static int	test_abcd()
{
	char dest[100];
	char dest2[100];
	return (ft_test("strncpy(dest, \"abcd\", 5)", memcmp(ft_strncpy(dest, "", 5), strncpy(dest2, "", 5), 5) == 0));
}

int			ft_strncpy_tests()
{
	printf("ft_strncpy\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_empty_filled_10);
	ft_run_test(&test_abcd_without_nul);
	ft_run_test(&test_abcd);
	return (0);
}
