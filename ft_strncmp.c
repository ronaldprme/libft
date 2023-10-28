/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:34:59 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:42:30 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*comparar os primeiros N caracteres de duas strings. Ela é 
frequentemente usada para determinar a igualdade ou a ordem lexicográfica 
entre duas strings limitando a comparação a um número específico de caracte-
res*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}
