#include "libft_tests.h"
#include <string.h>

static int	test_empty_0()
{
	char dest[100];
	char dest2[100];

	strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	ft_strncat(dest, "", 0);
	strncat(dest2, "", 0);
	return (ft_test("strncat(dest, \"\", 0)", memcmp(dest, dest2, 5) == 0));
}

static int	test_empty_1()
{
	char dest[100];
	char dest2[100];

	strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	ft_strncat(dest, "", 1);
	strncat(dest2, "", 1);
	return (ft_test("strncat(dest, \"\", 1)", memcmp(dest, dest2, 5) == 0));
}

static int	test_abcd_4()
{
	char dest[100];
	char dest2[100];

	strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	ft_strncat(dest, "abcd", 4);
	strncat(dest2, "abcd", 4);
	printf("%s %s\n", dest, dest2);
	return (ft_test("strncat(dest, \"abcd\", 4)", memcmp(dest, dest2, 9) == 0));
}

static int	test_abcd_5()
{
	char dest[100];
	char dest2[100];

	strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	ft_strncat(dest, "abcd", 5);
	strncat(dest2, "abcd", 5);
	printf("%s %s\n", dest, dest2);
	return (ft_test("strncat(dest, \"abcd\", 5)", memcmp(dest, dest2, 9) == 0));
}

static int	test_abcd_2()
{
	char dest[100];
	char dest2[100];

	strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	ft_strncat(dest, "abcd", 2);
	strncat(dest2, "abcd", 2);
	printf("%s %s\n", dest, dest2);
	return (ft_test("strncat(dest, \"abcd\", 2)", memcmp(dest, dest2, 9) == 0));
}

int			ft_strncat_tests()
{
	printf("ft_strncat\n");
	ft_run_test(&test_empty_0);
	ft_run_test(&test_empty_1);
	ft_run_test(&test_abcd_4);
	ft_run_test(&test_abcd_5);
	ft_run_test(&test_abcd_2);
	return (0);
}
