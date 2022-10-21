/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>            +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:33:11 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/20 02:39:01 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	i;
	char	*s;
	size_t	len;
	char	*swap;

	len = ft_strlen(str);
	swap = (char *)set;
	if (!str || !set)
		return (0);
	i = 0;
	while (str[i] && ft_strchr(swap, str[i]))
	{
		swap = (char *)set;
		i++;
	}
	swap = (char *)set;
	while (ft_strchr(swap, str[len - 1]))
	{
		swap = (char *)set;
		len--;
	}
	s = ft_substr(str, i, len - i);
	return (s);
}
