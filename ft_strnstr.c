/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:37:04 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:42:42 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*procurar uma substring em uma string maior*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (!*little)
		return ((char *)big);
	if ((char *)big == NULL && len == 0)
		return (NULL);
	n = ft_strlen(little);
	while (*big && len >= n)
	{
		if (ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
