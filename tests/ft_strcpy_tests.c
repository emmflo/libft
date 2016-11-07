#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	char dest[100];
	char dest2[100];

	ft_strcpy(dest, "");
	strcpy(dest2, "");
	return (ft_test("strcpy(dest, \"\")", strcmp(dest, dest2) == 0));
}

static int	test_abcd()
{
	char dest[100];
	char dest2[100];

	ft_strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	return (ft_test("strcpy(dest, \"abcd\")", strcmp(dest, dest2) == 0));
}

int			ft_strcpy_tests()
{
	printf("ft_strcpy\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_abcd);
	return (0);
}
