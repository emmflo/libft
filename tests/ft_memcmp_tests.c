#include "libft_tests.h"
#include <string.h>

static int	test_empty_0()
{
	return (ft_test("memcmp(\"\", \"\", 0)", memcmp("", "", 0) == ft_memcmp("", "", 0)));
}

static int	test_empty_1()
{
	return (ft_test("memcmp(\"\", \"\", 1)", memcmp("", "", 1) == ft_memcmp("", "", 1)));
}

static int	test_empty_10()
{
	return (ft_test("memcmp(\"\", \"\", 10)", memcmp("", "", 10) == ft_memcmp("", "", 10)));
}

static int	test_abcd_4()
{
	return (ft_test("memcmp(\"abcd\", \"abcd\", 4)", memcmp("abcd", "abcd", 4) == ft_memcmp("abcd", "abcd", 4)));
}

static int	test_abcd_5()
{
	return (ft_test("memcmp(\"abcd\", \"abcd\", 5)", memcmp("abcd", "abcd", 5) == ft_memcmp("abcd", "abcd", 5)));
}

static int	test_s1_lt_s2_1()
{
	return (ft_test("memcmp(\"a\", \"b\", 1)", memcmp("a", "b", 1) == ft_memcmp("a", "b", 1)));
}

static int	test_s1_lt_s2_2()
{
	return (ft_test("memcmp(\"a\", \"b\", 2)", memcmp("a", "b", 2) == ft_memcmp("a", "b", 2)));
}

static int	test_s1_lt_s2_10()
{
	return (ft_test("memcmp(\"a\", \"b\", 10)", memcmp("a", "b", 10) == ft_memcmp("a", "b", 10)));
}

static int	test_s1_gt_s2_1()
{
	return (ft_test("memcmp(\"b\", \"a\", 1)", memcmp("b", "a", 1) == ft_memcmp("b", "a", 1)));
}

static int	test_s1_gt_s2_2()
{
	return (ft_test("memcmp(\"b\", \"a\", 2)", memcmp("b", "a", 2) == ft_memcmp("b", "a", 2)));
}

static int	test_s1_gt_s2_10()
{
	return (ft_test("memcmp(\"b\", \"a\", 10)", memcmp("b", "a", 10) == ft_memcmp("b", "a", 10)));
}

static int	test_same_at_beginning()
{
	return (ft_test("memcmp(\"abc\", \"abcde\", 3)", memcmp("abc", "abcde", 3) == ft_memcmp("abc", "abcde", 3)));
}

static int	test_same_at_beginning3()
{
	return (ft_test("memcmp(\"abc\", \"abcde\", 2)", memcmp("abc", "abcde", 2) == ft_memcmp("abc", "abcde", 2)));
}

static int	test_same_at_beginning2()
{
	return (ft_test("memcmp(\"abc\", \"ab\", 3)", memcmp("abc", "ab", 3) == ft_memcmp("abc", "ab", 3)));
}

int			ft_memcmp_tests()
{
	printf("ft_memcmp\n");
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
