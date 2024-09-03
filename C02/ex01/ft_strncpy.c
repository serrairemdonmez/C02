/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonmez <sdonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 04:15:28 by sdonmez           #+#    #+#             */
/*   Updated: 2024/08/25 18:59:09 by sdonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char src[] = "beautiful1";
	char src1[] = "beautiful2";
	char dest[40] = "Wo";
	char dest1[50] = "Wo";
	printf("%s", ft_strncpy(dest, src, 14));
	printf("\n%s", strcpy(dest1, src1));
}
