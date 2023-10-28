/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:59:03 by rprocopi          #+#    #+#             */
/*   Updated: 2023/10/28 10:40:42 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	creat_str_array(char ***array, int Index)
{
	*array = (char **)malloc(Index * sizeof(char *));
	if (array == NULL)
		return (1);
	return (0);
}

int	creat_sbt_array(char ***array, int Index, int Lenght)
{
	int	i;

	i = 0;
	(*array)[Index] = (char *)malloc((Lenght + 1) * sizeof(char));
	if ((*array)[Index] == NULL)
	{
		while (i < Index)
		{
			free((*array)[i]);
			i++;
		}
		free(*array);
		return (1);
	}
	return (0);
}

static void	allocate(char	**tab, char const *s, char sep)
{
	char		**pt_tab;
	char const	*tmp;

	tmp = s;
	pt_tab = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (tmp > s)
		{
			*pt_tab = ft_substr(s, 0, tmp - s);
			s = tmp;
			++pt_tab;
		}
	}
	*pt_tab = NULL;
}

static int	ct_tk(const char *s, char sep)
{
	int	cttk;

	cttk = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++cttk;
		while (*s && *s != sep)
			++s;
	}
	return (cttk);
}

char	**ft_split(char const *s, char c)
{
	char	**token;
	int		size;

	size = ct_tk(s, c);
	token = (char **)malloc(sizeof(char *) * (size + 1));
	if (!token)
		return (NULL);
	allocate(token, s, c);
	return (token);
}
