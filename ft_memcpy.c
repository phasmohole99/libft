/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:12:47 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/08 00:28:15 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies bytes from str src to str dest
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)dst;
	a = (unsigned char *)src;
	if (!b && !a)
		return (0);
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}
/*int main () {
   const char src[50] = "mohamed1222";
   char dest[50];

   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, ft_strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}*/
