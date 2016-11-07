#include "libft_tests.h"

static int	all_tests()
{
	return (ft_strlen_tests() || 
			ft_strdup_tests() ||
			ft_strcpy_tests() ||
			ft_strncpy_tests() ||
			ft_memset_tests() ||
			ft_bzero_tests() ||
			ft_strcmp_tests() ||
			ft_strncmp_tests() ||
			ft_memcpy_tests() ||
			ft_memccpy_tests() ||
			ft_memcmp_tests() ||
			ft_isalpha_tests() ||
			ft_isdigit_tests() ||
			ft_isalnum_tests() ||
			ft_isascii_tests() ||
			ft_isprint_tests() ||
			ft_toupper_tests() ||
			ft_tolower_tests() ||
			ft_atoi_tests() ||
			ft_memmove_tests() ||
			ft_memchr_tests() ||
			ft_strcat_tests() ||
			ft_strncat_tests() ||
			ft_strchr_tests() ||
			ft_strrchr_tests() ||
			ft_strstr_tests() ||
			ft_strnstr_tests() ||
			ft_strlcat_tests() ||
			ft_memalloc_tests() ||
			ft_memdel_tests() ||
			ft_strnew_tests() ||
			ft_strdel_tests() ||
			ft_strclr_tests() ||
			ft_striter_tests() ||
			ft_striteri_tests() ||
			ft_strmap_tests() ||
			ft_strmapi_tests() ||
			ft_strequ_tests() ||
			ft_strnequ_tests());
}

int			main(void)
{
	all_tests();
	printf("Tests success: %d\n", tests_success);
	printf("Tests run: %d\n", tests_run);

	return (0);
}
