/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:14:16 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/08 00:28:18 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// c for output
// fd file lin khass nktbo fiih
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
