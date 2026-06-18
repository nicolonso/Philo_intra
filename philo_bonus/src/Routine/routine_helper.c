/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:22:42 by nalfonso          #+#    #+#             */
/*   Updated: 2026/06/18 19:18:46 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	initialize_helper(int id, t_data *data, t_philo *philo)
{
	philo->id = id + 1;
	philo->meals_eaten = 0;
	philo->last_meal = data->start_time;
	philo->done = 0;
	philo->data = data;
}

void	routine_helper(t_philo *p)
{
	long	think_time;

	if (p->data->nb_philo % 2 != 0)
	{
		think_time = p->data->time_to_die
			- p->data->time_to_eat - p->data->time_to_sleep;
		if (think_time > 2)
			ft_usleep(think_time / 2);
	}
}
