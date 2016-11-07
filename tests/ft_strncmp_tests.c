#include "libft_tests.h"
#include <string.h>

static int	test_empty_0()
{
	return (ft_test("strncmp(\"\", \"\", 0)", strncmp("", "", 0) == ft_strncmp("", "", 0)));
}

static int	test_empty_1()
{
	return (ft_test("strncmp(\"\", \"\", 1)", strncmp("", "", 1) == ft_strncmp("", "", 1)));
}

static int	test_empty_10()
{
	return (ft_test("strncmp(\"\", \"\", 10)", strncmp("", "", 10) == ft_strncmp("", "", 10)));
}

static int	test_abcd_4()
{
	return (ft_test("strncmp(\"abcd\", \"abcd\", 4)", strncmp("abcd", "abcd", 4) == ft_strncmp("abcd", "abcd", 4)));
}

static int	test_abcd_5()
{
	return (ft_test("strncmp(\"abcd\", \"abcd\", 5)", strncmp("abcd", "abcd", 5) == ft_strncmp("abcd", "abcd", 5)));
}

static int	test_s1_lt_s2_1()
{
	return (ft_test("strncmp(\"a\", \"b\", 1)", strncmp("a", "b", 1) == ft_strncmp("a", "b", 1)));
}

static int	test_s1_lt_s2_2()
{
	return (ft_test("strncmp(\"a\", \"b\", 2)", strncmp("a", "b", 2) == ft_strncmp("a", "b", 2)));
}

static int	test_s1_lt_s2_10()
{
	return (ft_test("strncmp(\"a\", \"b\", 10)", strncmp("a", "b", 10) == ft_strncmp("a", "b", 10)));
}

static int	test_s1_gt_s2_1()
{
	return (ft_test("strncmp(\"b\", \"a\", 1)", strncmp("b", "a", 1) == ft_strncmp("b", "a", 1)));
}

static int	test_s1_gt_s2_2()
{
	return (ft_test("strncmp(\"b\", \"a\", 2)", strncmp("b", "a", 2) == ft_strncmp("b", "a", 2)));
}

static int	test_s1_gt_s2_10()
{
	return (ft_test("strncmp(\"b\", \"a\", 10)", strncmp("b", "a", 10) == ft_strncmp("b", "a", 10)));
}

static int	test_same_at_beginning()
{
	return (ft_test("strncmp(\"abc\", \"abcde\", 3)", strncmp("abc", "abcde", 3) == ft_strncmp("abc", "abcde", 3)));
}

static int	test_same_at_beginning3()
{
	return (ft_test("strncmp(\"abc\", \"abcde\", 2)", strncmp("abc", "abcde", 2) == ft_strncmp("abc", "abcde", 2)));
}

static int	test_same_at_beginning2()
{
	return (ft_test("strncmp(\"abc\", \"ab\", 3)", strncmp("abc", "ab", 3) == ft_strncmp("abc", "ab", 3)));
}

int			ft_strncmp_tests()
{
	printf("ft_strncmp\n");
	ft_run_test(&test_empty_0);
	ft_run_test(&test_empty_1);
	ft_run_test(&test_empty_10);
	ft_run_test(&test_abcd_4);
	ft_run_test(&test_abcd_5);
	ft_run_test(&test_s1_lt_s2_1);
	ft_run_test(&test_s1_lt_s2_2);
	ft_run_test(&test_s1_lt_s2_10);
	ft_run_test(&test_s1_gt_s2_1);
	ft_run_test(&test_s1_gt_s2_2);
	ft_run_test(&test_s1_gt_s2_10);
	ft_run_test(&test_same_at_beginning);
	ft_run_test(&test_same_at_beginning2);
	ft_run_test(&test_same_at_beginning3);

	return (0);
}
