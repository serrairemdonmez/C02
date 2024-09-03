/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonmez <sdonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 04:23:13 by sdonmez           #+#    #+#             */
/*   Updated: 2024/08/25 19:00:54 by sdonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str [i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_numeric("123213123213"));
	printf("\n%d", ft_str_is_numeric("abc1defghijkl"));
	printf("\n%d", ft_str_is_numeric("-_134556efghij67"));
}