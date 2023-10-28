/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:15:33 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:41:05 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* criar uma cópia de uma string alocando dinamicamente memória para essa 
cópia.*/
char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s) + 1;
	new = (char *)malloc(sizeof(*new) * len);
	if (!new)
		return (NULL);
	return ((char *)ft_memcpy(new, s, len));
}
