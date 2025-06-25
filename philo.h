/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:25:17 by sabadri           #+#    #+#             */
/*   Updated: 2025/06/24 20:54:44 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_table
{
    int nphilos;
    int death;
    int eat;
    int sleep;
    int nmeals;
}   t_table;

//parse
int check_value(int ac, char **av);
int	range_check(int ac, char **av);

//libc
long ft_atol(const char *str);
#endif
