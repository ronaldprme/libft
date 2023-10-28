/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:30:18 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:40:01 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copia n caracteres da fontes para início do destino, substituido as posicões 
iniciais*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*altdst;
	unsigned char	*altsrc;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	while (n-- > 0)
		*altdst++ = *altsrc++;
	return (dst);
}
