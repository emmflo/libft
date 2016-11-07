#include "libft_tests.h"
#include <string.h>

static int	test_abcd_e()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcd");
	strcpy(s2, "abcd");
	ptr = memchr(s1, 'e', 5);
	ptr2 = ft_memchr(s2, 'e', 5);
	return (ft_test("memchr(s, 'e', 5)", ptr == ptr2));
}

static int	test_abcd_b()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcd");
	strcpy(s2, "abcd");
	ptr = memchr(s1, 'b', 5);
	ptr2 = ft_memchr(s2, 'b', 5);
	return (ft_test("memchr(s, 'b', 5)", ptr - s1 == ptr2 - s2));
}

int			ft_memchr_tests()
{
	printf("ft_memchr\n");
	ft_run_test(&test_abcd_e);
	ft_run_test(&test_abcd_b);
	return (0);
}
