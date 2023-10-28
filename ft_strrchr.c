/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:47:12 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:42:50 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Encontra a última ocorrência do caracter selecionado.
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s && s[i] != (char)c && i >= 0)
		i--;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
