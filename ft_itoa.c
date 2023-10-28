/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:32:18 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:37:49 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converter um número inteiro para string
#include "libft.h"

char	*ft_itoa(int n)
{
	static char	p[13];
	int			j;
	long		nj;

	j = 11;
	p[12] = 0;
	p[11] = '0';
	nj = n;
	if (nj < 0)
		nj = -nj;
	while (nj != 0)
	{
		p[j] = (nj % 10 + '0');
		j--;
		nj /= 10;
	}
	if (n < 0)
		p[j--] = '-';
	return (ft_strdup(&p[j + (n != 0)]));
}
