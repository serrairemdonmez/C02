/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonmez <sdonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:01:06 by sdonmez           #+#    #+#             */
/*   Updated: 2024/08/25 18:56:22 by sdonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src1));
}