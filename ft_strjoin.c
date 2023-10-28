/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:27:01 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:41:18 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concatenar várias strings em uma única string
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n1;
	int		n2;
	char	*join;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, n1);
	ft_memcpy(join + n1, s2, n2);
	join[n1 + n2] = '\0';
	return (join);
}
