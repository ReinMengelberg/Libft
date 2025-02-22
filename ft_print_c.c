/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_c.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmengelb <rmengelb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/02 14:56:17 by rmengelb      #+#    #+#                 */
/*   Updated: 2024/11/03 12:25:43 by rmengelb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_c(int c)
{
	char	x;

	x = c;
	write (1, &x, 1);
	return (1);
}
