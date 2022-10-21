/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:21:47 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/20 07:40:28 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// is begin search in end & return more string
char	*ft_strrchr(const char *s2, int a)
{
	int	i;

	i = ft_strlen(s2);
	while (i > 0)
	{
		if (s2[i] == (char)a)
			return ((char *)s2 + i);
		i--;
	}
	if (s2[i] == (char)a)
		return ((char *)s2 + i);
	return (0);
}
/*int main ()
{
    char str[]= "1oha2med";
    printf("%s",ft_strrchr(str,'2'));
    return (0);

}*/
