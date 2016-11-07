#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	char dest[100];
	char dest2[100];
	return (ft_test("memcpy(dest, \"\", 1)", memcmp(ft_memcpy(dest, "", 1), memcpy(dest2, "", 1), 1) == 0));
}

static int	test_empty_filled_10()
{
	char dest[100];
	char dest2[100];
	return (ft_test("memcpy(dest, \"\", 10)", memcmp(ft_memcpy(dest, "", 10), memcpy(dest2, "", 10), 10) == 0));
}

static int	test_abcd_without_nul()
{
	char dest[100];
	char dest2[100];
	return (ft_test("memcpy(dest, \"abcd\", 4)", memcmp(ft_memcpy(dest, "", 4), memcpy(dest2, "", 4), 4) == 0));
}

static int	test_abcd()
{
	char dest[100];
	char dest2[100];
	return (ft_test("memcpy(dest, \"abcd\", 5)", memcmp(ft_memcpy(dest, "", 5), memcpy(dest2, "", 5), 5) == 0));
}

int			ft_memcpy_tests()
{
	printf("ft_memcpy\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_empty_filled_10);
	ft_run_test(&test_abcd_without_nul);
	ft_run_test(&test_abcd);
	return (0);
}
