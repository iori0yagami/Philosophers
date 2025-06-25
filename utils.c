/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:31:04 by sabadri           #+#    #+#             */
/*   Updated: 2025/06/24 20:43:20 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

#include <stdio.h>
#include <stdlib.h>

int	range_check(int ac, char **av)
{
	int	val1;
	int	val3;
	int	val4;

	val1 = atoi(av[1]);
	val3 = atoi(av[3]);
	val4 = atoi(av[4]);
	if (val1 > 200)
	{
		printf("Error: av[1] must be <= 200\n");
		return (0);
	}
	if (val3 < 60)
	{
		printf("Error: av[3] must be >= 60\n");
		return (0);
	}
	if (val4 < 60)
	{
		printf("Error: av[4] must be >= 60\n");
		return (0);
	}
	return (1);
}


int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int check_value(int ac, char **av)
{
	int i = 1;
	while (i < ac)
	{
		char *arg = av[i];
		if (*arg == '-')
			arg++;
		if (*arg == '\0')
			return (0);
		while (*arg)
		{
			if (!ft_isdigit(*arg))
				return (0);
			arg++;
		}
		i++;
	}
	return 1;
}