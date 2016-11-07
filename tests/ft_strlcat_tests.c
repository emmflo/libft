#include "libft_tests.h"
#include <string.h>
#include <bsd/string.h>

static int	test_empty()
{
	char	dest[100];
	char	dest2[100];
	size_t	ret = 0;
	size_t	ret2 = 0;

	strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	ret = ft_strlcat(dest, "", sizeof(dest));
	ret2 = strlcat(dest2, "", sizeof(dest2));
	//printf("%s %s\n%zu %zu\n", dest, dest2, ret, ret2);
	return (ft_test("strlcat(dest, \"\", sizeof(dest))", memcmp(dest, dest2, 5) == 0 && ret == ret2));
}

static int	test_abcd()
{
	char dest[100];
	char dest2[100];
	size_t	ret = 0;
	size_t	ret2 = 0;

	strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	ret = ft_strlcat(dest, "abcd", sizeof(dest));
	ret2 = strlcat(dest2, "abcd", sizeof(dest2));
	//printf("%s %s\n%zu %zu\n", dest, dest2, ret, ret2);
	return (ft_test("strlcat(dest, \"abcd\", sizeof(dest))", memcmp(dest, dest2, 9) == 0 && ret == ret2));
}

static int	test_abcd_toolong()
{
	char dest[6];
	char dest2[6];
	size_t	ret = 0;
	size_t	ret2 = 0;

	strcpy(dest, "abcd");
	strcpy(dest2, "abcd");
	ret = ft_strlcat(dest, "abcd", sizeof(dest));
	ret2 = strlcat(dest2, "abcd", sizeof(dest2));
	//printf("%s %s\n%zu %zu\n", dest, dest2, ret, ret2);
	return (ft_test("strlcat(dest, \"abcd\", sizeof(dest))", memcmp(dest, dest2, 6) == 0 && ret == ret2));
}

int			ft_strlcat_tests()
{
	printf("ft_strlcat\n");
	ft_run_test(&test_empty);
	ft_run_test(&test_abcd);
	ft_run_test(&test_abcd_toolong);
	return (0);
}
