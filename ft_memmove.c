/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:01:47 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 15:29:14 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*copia um bloco de memória de uma origem para um destino, 
lidando de forma segura com sobreposições de memória.*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = dst;
	temp2 = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		while (len--)
			temp1[len] = temp2[len];
	return (dst);
}
