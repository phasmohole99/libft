/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:19:36 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/12 02:53:33 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//return lenght src
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		len;
	long	x;

	x = dstsize;
	i = 0;
	len = ft_strlen(src);
	if (!src && !dst)
		return (0);
	if (x != '\0')
	{
		while (src[i] != '\0' && i < x - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*#include <string.h>
int main ()
{
    char dest[] = "mohamed";
    char src[] = "wor";
    printf("%zu\n",ft_strlcpy(dest, src, 0));
    printf("%lu\n",strlcpy(dest, src, 0));
}*/
