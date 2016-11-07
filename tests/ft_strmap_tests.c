#include "libft_tests.h"
#include <string.h>
#include <ctype.h>

static char	toupper_c(char c)
{
	return ((char)toupper((int)c));
}

static int	test_abcd()
{
	char	s1[100];
	char	s2[100];
	char	*s;

	strcpy(s1, "abcd");
	strcpy(s2, "ABCD");
	s = ft_strmap(s1, &toupper_c);
	return (ft_test("ft_strmap(\"abcd\", &toupper_c)", strcmp(s, s2) == 0));
}

int			ft_strmap_tests()
{
	printf("ft_strmap\n");
	ft_run_test(&test_abcd);
	return (0);
}
