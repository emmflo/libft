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
	ptr = strchr(s1, 'e');
	ptr2 = ft_strchr(s2, 'e');
	return (ft_test("strchr(s, 'e')", ptr == ptr2));
}

static int	test_abcd_b()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcd");
	strcpy(s2, "abcd");
	ptr = strchr(s1, 'b');
	ptr2 = ft_strchr(s2, 'b');
	return (ft_test("strchr(s, 'b')", ptr - s1 == ptr2 - s2));
}

int			ft_strchr_tests()
{
	printf("ft_strchr\n");
	ft_run_test(&test_abcd_e);
	ft_run_test(&test_abcd_b);
	return (0);
}
