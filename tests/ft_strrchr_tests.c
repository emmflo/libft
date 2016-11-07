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
	ptr = strrchr(s1, 'e');
	ptr2 = ft_strrchr(s2, 'e');
	return (ft_test("strrchr(s, 'e')", ptr == ptr2));
}

static int	test_abcd_b()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcd");
	strcpy(s2, "abcd");
	ptr = strrchr(s1, 'b');
	ptr2 = ft_strrchr(s2, 'b');
	return (ft_test("strrchr(s, 'b')", ptr - s1 == ptr2 - s2));
}

static int	test_abcdcba_b()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcdcba");
	strcpy(s2, "abcdcba");
	ptr = strrchr(s1, 'b');
	ptr2 = ft_strrchr(s2, 'b');
	return (ft_test("strrchr(s, 'b')", ptr - s1 == ptr2 - s2));
}
int			ft_strrchr_tests()
{
	printf("ft_strrchr\n");
	ft_run_test(&test_abcd_e);
	ft_run_test(&test_abcd_b);
	ft_run_test(&test_abcdcba_b);
	return (0);
}
