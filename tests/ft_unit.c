/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmflo </var/mail/emmflo>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:30:04 by emmflo            #+#    #+#             */
/*   Updated: 2016/11/05 23:47:55 by emmflo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_unit.h"

int		tests_run = 0;
int		tests_success = 0;

int		ft_test(char *msg, int test)
{
	if (test)
		printf("%s \x1B[32mSUCCESS\x1B[0m\n", msg);
	else
		printf("%s \x1B[31mFAILED\x1B[0m\n", msg);
	return (test);
}

void	ft_run_test(int (*f)(void))
{
	int res;
	
	res = (*f)();
	if (res)
		tests_success++;
	tests_run++;
}
