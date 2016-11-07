#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	char dest[100];
	char dest2[100];
	return (ft_test("memmove(dest, \"\", 1)", memcmp(ft_memmove(dest, "", 1), memmove(dest2, "", 1), 1) == 0));
}

static int	test_empty_filled_10()
{
	char dest[100];
	char dest2[100];
	return (ft_test("memmove(dest, \"\", 10)", memcmp(ft_memmove(dest, "", 10), memmove(dest2, "", 10), 10) == 0));
}

static int	test_abcd_without_nul()
{
	char dest[100];
	char dest2[100];
	return (ft_test("memmove(dest, \"abcd\", 4)", memcmp(ft_memmove(dest, "", 4), memmove(dest2, "", 4), 4) == 0));
}

static int	test_abcd()
{
	char dest[100];
	char dest2[100];
	return (ft_test("memmove(dest, \"abcd\", 5)", memcmp(ft_memmove(dest, "", 5), memmove(dest2, "", 5), 5) == 0));
}

static int test_overlapping()
{
	char *dest = strdup("abcdefghijklmnopqrstuvwxyz");
	char *dest2 = strdup("abcdefghijklmnopqrstuvwxyz");

	ft_memmove(&dest[4], &dest[6], 5);
	memmove(&dest2[4], &dest2[6], 5);
	return (ft_test("overlapping", memcmp(dest, dest2, 26) == 0));
}

int			ft_memmove_tests()
{
	printf("ft_memmove\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_empty_filled_10);
	ft_run_test(&test_abcd_without_nul);
	ft_run_test(&test_abcd);
	ft_run_test(&test_overlapping);
	return (0);
}
