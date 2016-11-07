#include "libft_tests.h"
#include <string.h>

static int	test_123()
{
	char *nb = "123";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_233()
{
	char *nb = "   233";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_321()
{
	char *nb = "   321fdsajkl";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_0_1()
{
	char *nb = "fdsa123fdsa";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_0_2()
{
	char *nb = "0";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_0_3()
{
	char *nb = "-0";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_0_4()
{
	char *nb = "+0";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_n12()
{
	char *nb = "-12";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_n42()
{
	char *nb = "  \t\v-42";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_p42()
{
	char *nb = "  \t\v+42";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_0_pp()
{
	char *nb = "  ++42";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_0_np()
{
	char *nb = "  ++42";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

static int	test_0_pn()
{
	char *nb = "  +-42";

	return (ft_test(nb, atoi(nb) == ft_atoi(nb)));
}

int			ft_atoi_tests()
{
	printf("ft_atoi\n");
	ft_run_test(&test_123);
	ft_run_test(&test_233);
	ft_run_test(&test_321);
	ft_run_test(&test_0_1);
	ft_run_test(&test_0_2);
	ft_run_test(&test_0_3);
	ft_run_test(&test_0_4);
	ft_run_test(&test_n12);
	ft_run_test(&test_n42);
	ft_run_test(&test_p42);
	ft_run_test(&test_0_pp);
	ft_run_test(&test_0_np);
	ft_run_test(&test_0_pn);
	return (0);
}
