/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:01:13 by rpr               #+#    #+#             */
/*   Updated: 2023/10/30 07:52:12 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
//Transforma string para int
int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	sin;
	int	fl;

	fl = 0;
	i = 0;
	num = 0;
	sin = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
		fl++;
	}
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sin = sin * -1;
		i++;
	}
	if (i - fl > 1)
		return (0);
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
		num = num * 10 + nptr[i++] - '0';
	return (num * sin);
}
