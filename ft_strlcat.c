/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:58:12 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:41:27 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*concatena a string de origem src à string de destino dst, garantindo que 
a concatenação seja segura*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;
	size_t	j;

	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (size <= dstlen || size == 0)
		return (size + srclen);
	while (src[j] != '\0' && j < size - dstlen - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
