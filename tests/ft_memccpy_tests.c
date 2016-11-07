#include "libft_tests.h"
#include <string.h>

static int	test_empty()
{
	char	dest[100];
	char	dest2[100];
	char	*ptr;
	char	*ptr2;
	
	ptr = ft_memccpy(dest, "", 'a', 1);
	ptr2 = memccpy(dest2, "", 'a', 1);
	return (ft_test("memccpy(dest, \"\", 'a', 1)", memcmp(dest, dest2, 1) == 0 && ptr == ptr2));
}

static int	test_empty_filled_10()
{
	char	dest[100];
	char	dest2[100];
	char	*ptr;
	char	*ptr2;

	ptr = ft_memccpy(dest, "", 'a', 10);
	ptr2 = memccpy(dest2, "", 'a', 10);
	return (ft_test("memccpy(dest, \"\", 'a', 10)", memcmp(dest, dest2, 10) == 0 && ptr == ptr2));
}

static int	test_abcd_without_nul()
{
	char	dest[100];
	char	dest2[100];
	char	*ptr;
	char	*ptr2;

	ptr = ft_memccpy(dest, "abcd", 'e', 4);
	ptr2 = memccpy(dest2, "abcd", 'e', 4);
	return (ft_test("memccpy(dest, \"abcd\", 'e', 4)", memcmp(dest, dest2, 4) == 0 && ptr == ptr2));
}

static int	test_abcd()
{
	char	dest[100];
	char	dest2[100];
	char	*ptr;
	char	*ptr2;

	ptr = ft_memccpy(dest, "abcd", 'e', 5);
	ptr2 = memccpy(dest2, "abcd", 'e', 5);
	return (ft_test("memccpy(dest, \"abcd\", 'e', 5)", memcmp(dest, dest2, 5) == 0 && ptr == ptr2));
}

static int	test_abcd_stop()
{
	char	dest[100];
	char	dest2[100];
	char	*ptr;
	char	*ptr2;

	ptr = ft_memccpy(dest, "abcd", 'b', 5);
	ptr2 = memccpy(dest2, "abcd", 'b', 5);
	printf("%s %s\n", dest, dest2);
	printf("%p %c %p %c\n", ptr, *ptr, ptr2, *ptr2);
	return (ft_test("memccpy(dest, \"abcd\", 'b', 5)", memcmp(dest, dest2, 5) == 0 && ptr - dest == ptr2 - dest2));
}

int			ft_memccpy_tests()
{
	printf("ft_memccpy\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_empty_filled_10);
	ft_run_test(&test_abcd_without_nul);
	ft_run_test(&test_abcd);
	ft_run_test(&test_abcd_stop);
	return (0);
}
