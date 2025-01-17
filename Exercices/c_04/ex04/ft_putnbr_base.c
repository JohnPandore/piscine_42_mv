/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:33:31 by fverge            #+#    #+#             */
/*   Updated: 2023/06/23 21:17:23 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	error_check (char *base)
{

	int	i;
	int	j;

	if (ft_strlen(base) < 2 || base[0] == '\0')
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len_base;

	len_base = ft_strlen(base);
	if (error_check(base) == 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * (-1);
		}
		if (nbr < len_base)
			ft_putchar(base[nbr]);
		if (nbr >= len_base)
		{
			ft_putnbr_base(nbr / len_base, base);
			ft_putnbr_base(nbr % len_base, base);

		}
	}
}
