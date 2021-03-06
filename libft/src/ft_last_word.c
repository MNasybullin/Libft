/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:49:46 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/14 17:54:39 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_last_word(char *s)
{
	int	i;

	i = 0;
	if (*s)
	{
		while (s[i] != '\0')
			i++;
		i--;
		while (ft_is_space(s[i]) && i > 0)
			i--;
		while (!(ft_is_space(s[i])))
			i--;
		i++;
		while (!((ft_is_space((s[i])))) && s[i] != '\0')
			write(1, &s[i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
