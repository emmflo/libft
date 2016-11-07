#include "libft_tests.h"
#include <string.h>
#include <ctype.h>

static void	toupper_c(char *c)
{
	*c = toupper(*c);
}

static int	test_abcd()
{
	char s1[100];
	char s2[100];

	strcpy(s1, "abcd");
	strcpy(s2, "ABCD");
	ft_striter(s1, &toupper_c);
	return (ft_test("ft_striter(\"abcd\", &toupper_c)", strcmp(s1, s2) == 0));
}

int			ft_striter_tests()
{
	printf("ft_striter\n");
	ft_run_test(&test_abcd);
	return (0);
}
