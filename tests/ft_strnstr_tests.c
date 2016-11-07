#include "libft_tests.h"
#include <string.h>
#include <bsd/string.h>

static int	test_abcd_e()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcd");
	strcpy(s2, "abcd");
	ptr = strnstr(s1, "e", 4);
	ptr2 = ft_strnstr(s2, "e", 4);
	return (ft_test("strnstr(s, \"e\", 4)", ptr == ptr2));
}

static int	test_abcd_b()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcd");
	strcpy(s2, "abcd");
	ptr = strnstr(s1, "b", 4);
	ptr2 = ft_strnstr(s2, "b", 4);
	return (ft_test("strnstr(s, \"b\", 4)", ptr - s1 == ptr2 - s2));
}

static int	test_abcd_cb()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcd");
	strcpy(s2, "abcd");
	ptr = strnstr(s1, "cb", 5);
	ptr2 = ft_strnstr(s2, "cb", 5);
	return (ft_test("strnstr(s, \"cb\", 5)", ptr == ptr2));
}

static int	test_abcdcba_cb()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcdcba");
	strcpy(s2, "abcdcba");
	ptr = strnstr(s1, "cb", 6);
	ptr2 = ft_strnstr(s2, "cb", 6);
	return (ft_test("strnstr(s, \"cb\", 6)", ptr - s1 == ptr2 - s2));
}

static int	test_abcdcba_cb_null()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcdcba");
	strcpy(s2, "abcdcba");
	ptr = strnstr(s1, "cb", 5);
	ptr2 = ft_strnstr(s2, "cb", 5);
	return (ft_test("strnstr(s, \"cb\", 5)", ptr == ptr2));
}

static int	test_abcdabcd_cd()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcdabcd");
	strcpy(s2, "abcdabcd");
	ptr = strnstr(s1, "cd", 8);
	ptr2 = ft_strnstr(s2, "cd", 8);
	return (ft_test("strnstr(s, \"cd\", 8)", ptr - s1 == ptr2 - s2));
}

static int	test_abcdabcd()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "abcdabcd");
	strcpy(s2, "abcdabcd");
	ptr = strnstr(s1, "", 8);
	ptr2 = ft_strnstr(s2, "", 8);
	return (ft_test("strnstr(s, \"\", 8)", ptr - s1 == ptr2 - s2));
}

static int	test_null()
{
	char	s1[100];
	char	s2[100];
	char	*ptr;
	char	*ptr2;

	strcpy(s1, "Foo Bar Baz");
	strcpy(s2, "Foo Bar Baz");
	ptr = strnstr(s1, "Bar", 4);
	ptr2 = ft_strnstr(s2, "Bar", 4);
	return (ft_test("strnstr(s, \"Bar\", 4)", ptr == ptr2));
}

int			ft_strnstr_tests()
{
	printf("ft_strnstr\n");
	ft_run_test(&test_abcd_e);
	ft_run_test(&test_abcd_b);
	ft_run_test(&test_abcd_cb);
	ft_run_test(&test_abcdcba_cb);
	ft_run_test(&test_abcdcba_cb_null);
	ft_run_test(&test_abcdabcd_cd);
	ft_run_test(&test_abcdabcd);
	ft_run_test(&test_null);
	return (0);
}
