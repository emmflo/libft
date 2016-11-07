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
	ptr = strstr(s1, "e");
	ptr2 = ft_strstr(s2, "e");
	return (ft_test("strstr(s, \"e\")", ptr == ptr2));
}

static int	test_abcd_b()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcd");
	strcpy(s2, "abcd");
	ptr = strstr(s1, "b");
	ptr2 = ft_strstr(s2, "b");
	return (ft_test("strstr(s, \"b\")", ptr - s1 == ptr2 - s2));
}

static int	test_abcd_cb()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcd");
	strcpy(s2, "abcd");
	ptr = strstr(s1, "cb");
	ptr2 = ft_strstr(s2, "cb");
	return (ft_test("strstr(s, \"cb\")", ptr == ptr2));
}

static int	test_abcdcba_cb()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcdcba");
	strcpy(s2, "abcdcba");
	ptr = strstr(s1, "cb");
	ptr2 = ft_strstr(s2, "cb");
	return (ft_test("strstr(s, \"cb\")", ptr - s1 == ptr2 - s2));
}

static int	test_abcdabcd_cd()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcdabcd");
	strcpy(s2, "abcdabcd");
	ptr = strstr(s1, "cd");
	ptr2 = ft_strstr(s2, "cd");
	return (ft_test("strstr(s, \"cd\")", ptr - s1 == ptr2 - s2));
}

static int	test_abcdabcd()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcdabcd");
	strcpy(s2, "abcdabcd");
	ptr = strstr(s1, "");
	ptr2 = ft_strstr(s2, "");
	return (ft_test("strstr(s, \"\")", ptr - s1 == ptr2 - s2));
}

int			ft_strstr_tests()
{
	printf("ft_strstr\n");
	ft_run_test(&test_abcd_e);
	ft_run_test(&test_abcd_b);
	ft_run_test(&test_abcd_cb);
	ft_run_test(&test_abcdcba_cb);
	ft_run_test(&test_abcdabcd_cd);
	ft_run_test(&test_abcdabcd);
	return (0);
}
