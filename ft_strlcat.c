/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:19:18 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/12 03:21:10 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//return  dst + src
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lent_dest;
	size_t	re;

	i = 0;
	re = 0;
	if (size == 0)
		return (ft_strlen(src));
	lent_dest = ft_strlen(dst);
	if (size > lent_dest)
		re = lent_dest + ft_strlen(src);
	else
		re = size + ft_strlen(src);
	if (size > lent_dest + 1)
	{
		while (src[i] != '\0' && lent_dest < size - 1)
		{
			dst[lent_dest] = src[i];
			lent_dest++;
			i++;
		}
		dst[lent_dest] = '\0';
	}
	return (re);
}
/* int main ()
 {
     char c[] = "mhhh";
     char a[] = "1337";

     printf ("%zu",ft_strlcat(c,a,7));
    return (0);
 }*/
