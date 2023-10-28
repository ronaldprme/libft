/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:00:54 by rpr               #+#    #+#             */
/*   Updated: 2023/10/28 10:40:20 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft 0 para entrada padrão (stdin), 1 para saída padrão (stdout) e 
2 para saída de erro padrão (stderr)*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
