#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	char dest[100];
	char dest2[100];

	strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	ft_strcat(dest, "");
	strcat(dest2, "");
	return (ft_test("strcat(dest, \"\")", memcmp(dest, dest2, 5) == 0));
}

static int	test_abcd()
{
	char dest[100];
	char dest2[100];

	strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	ft_strcat(dest, "abcd");
	strcat(dest2, "abcd");
	printf("%s %s\n", dest, dest2);
	return (ft_test("strcat(dest, \"abcd\")", memcmp(dest, dest2, 9) == 0));
}

int			ft_strcat_tests()
{
	printf("ft_strcat\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_abcd);
	return (0);
}
