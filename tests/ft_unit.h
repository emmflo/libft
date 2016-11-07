#ifndef FT_UNIT_H
# define FT_UNIT_H

extern int	tests_run;
extern int	tests_success;
int			ft_test(char *msg, int test);
void		ft_run_test(int (*f)(void));

#endif
