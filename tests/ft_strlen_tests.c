#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	return (ft_test("strlen(\"\") == 0", ft_strlen("") == strlen("")));
}

static int	test_abcd()
{
	return (ft_test("strlen(\"abcd\") == 4", ft_strlen("abcd") == strlen("abcd")));
}

int			ft_strlen_tests()
{
	printf("ft_strlen\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_abcd);
	return (0);
}
