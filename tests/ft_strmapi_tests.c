#include "libft_tests.h"
#include <string.h>
#include <ctype.h>

static char	toupper_c(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ((char)toupper((int)c));
	else
		return (c);
}

static int	test_abcd()
{
	char	s1[100];
	char	s2[100];
	char	*s;

	strcpy(s1, "abcd");
	strcpy(s2, "AbCd");
	s = ft_strmapi(s1, &toupper_c);
	return (ft_test("ft_strmapi(\"abcd\", &toupper_c)", strcmp(s, s2) == 0));
}

int			ft_strmapi_tests()
{
	printf("ft_strmapi\n");
	ft_run_test(&test_abcd);
	return (0);
}
