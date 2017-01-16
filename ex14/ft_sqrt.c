/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzmuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:36:27 by bzmuda            #+#    #+#             */
/*   Updated: 2016/11/03 15:49:52 by bzmuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int res;
	int res2;

	i = 1;
	res = 0;
	res2 = 0;
	if (nb == 1)
		return (1);
	while (res2 != nb)
	{
		res = nb / i;
		res2 = res * res;
		i++;
		if (i > nb)
			return (0);
	}
	i--;
	return (i);
}