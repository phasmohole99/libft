/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:59:59 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/21 23:26:55 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

// rule hoa khassni nakhod string kol whda bohda
// aykhssni ndir function tan9z lia keys li bin strings
// aykhssni nhssb string
// and alloca lihom blassa
// and alloca lihom lblassa lkola char mn string
// end return dyal dak double pointer
// function dump key
// function tat7ssb
// and function ka tcopy
// and **split
// ---  /-fgsyfgs-sfsyfv-----     result : str1 :  / || str2 :fgsyfgs

static size_t	len_jump(char const *str, char r)
{
	int		i;
	size_t	x;

	i = 0;
	x = 0;
	while (str[i])
	{
		while (str[i] == r)
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != r)
				i++;
			x++;
		}
	}
	return (x);
}

static size_t	len_char(char const *st, char b, int len)
{
	int	w;

	w = 0;
	while (st[len] && st[len] != b)
	{
		w++;
		len++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char			**new;
	unsigned int	p;
	int				a;

	new = (char **)malloc((len_jump((char *)s, c) + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	p = 0;
	a = 0;
	while (s[p])
	{
		while (s[p] == c)
			p++;
		if (s[p])
		{
			new[a] = ft_substr(s, p, len_char((char *)s, c, p));
			a++;
			while (s[p] != c && s[p] != '\0')
				p++;
		}
	}
	new[a] = NULL;
	return (new);
}
