/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:58:21 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:39:46 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Procurar por um byte específico dentro de uma área de memória,
geralmente em um array ou buffer*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*loc;
	size_t			i;

	loc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (loc[i] == (unsigned char)c)
			return (&loc[i]);
		i++;
	}
	return (NULL);
}
