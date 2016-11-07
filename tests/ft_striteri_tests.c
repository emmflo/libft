#include "libft_tests.h"
#include <string.h>
#include <ctype.h>

static void	toupper_c(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = toupper(*c);
}

static int	test_abcd()
{
	char s1[100];
	char s2[100];

	strcpy(s1, "abcd");
	strcpy(s2, "AbCd");
	ft_striteri(s1, &toupper_c);
	return (ft_test("ft_striter(\"abcd\", &toupper_c)", strcmp(s1, s2) == 0));
}

int			ft_striteri_tests()
{
	printf("ft_striteri\n");
	ft_run_test(&test_abcd);
	return (0);
}
