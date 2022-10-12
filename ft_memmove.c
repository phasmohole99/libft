/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:13:22 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/11 00:49:17 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// same jobs the function memcpy but this is solved the problem overlop
void	*ft_memmove(void *dst, const void *src, size_t i)
{
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (i--)
		{
			*(char *)(dst + i) = *(char *)(src + i);
		}
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, i));
	return (dst);
}
/*#include <ctype.h>
#include <string.h>

int main () {
   char dest[50] = "mohamed";

   printf ("after : %s\n", dest);
   ft_memmove((dest + 2), dest, 10);
   printf("After memmove dest = %s\n", dest);
   return(0);
}*/
