/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:11:54 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/08 02:10:38 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//search char in string and return rest string
//(kat9lb 3la lchar w tatreturni li b9a mn string mno hta l lkher )
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (unsigned char *)s;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
		{
			return ((unsigned char *)b + i);
		}
		i++;
	}
	return (NULL);
}
/*int main () {
   const char str[] = "mohamed";
   const char ch = 'a';
   char *ret;

   ret = ft_memchr(str, ch, ft_strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
