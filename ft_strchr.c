/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:24:54 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:40:59 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*localizar a primeira ocorrência de um caractere específico em uma 
string. Ela retorna um ponteiro para a primeira ocorrência desse caractere na 
string ou um ponteiro nulo*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s && s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
