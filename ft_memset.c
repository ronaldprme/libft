/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:29:58 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 12:35:54 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*usada para preencher um bloco de memória com um valor específico. 
Uusada para inicializar arrays ou buffers de memória 
com valores padrão.*/

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*placeholder;

	placeholder = (unsigned char *)s;
	while (len > 0)
	{
		*placeholder = (unsigned char)c;
		placeholder++;
		len--;
	}
	return (s);
}
