/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:21:00 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/08 00:28:23 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//search a begin the string and return more the string
char	*ft_strchr(const char *s, int a)
{
	while (*s && *s != a)
		s++;
	if (*s == '\0' && *s != a)
		return (NULL);
	return ((char *)s);
}

/*int main ()
{
    char str[]= "1oha2med  ";
    printf("%s",ft_strchr(str,'2'));
    return (0);

}*/
