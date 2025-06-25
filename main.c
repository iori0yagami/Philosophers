/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:25:02 by sabadri           #+#    #+#             */
/*   Updated: 2025/06/24 20:52:08 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void init_table(t_table *table, int ac, char **av)
{
    table->nphilos = ft_atol(av[1]);
    table->death = ft_atol(av[2]);
    table->eat = ft_atol(av[3]);
    table->sleep = ft_atol(av[4]);
	if(ac == 6)
    	table->nmeals = ft_atol(av[5]);
	table->nmeals = -1;
}

int main(int ac, char **av)
{
    t_table table;

    if (ac != 5 && ac != 6)
        return 1;

    if (!check_value(ac, av))
        return (printf("value must be int\n"), 1);
    if (!range_check(ac, av))
        return (printf("values out of range\n"), 1);
    init_table(&table, ac, av);
    return 0;
}