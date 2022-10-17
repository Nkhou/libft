/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:24 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/11 19:35:00 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memcpy( void	*destination, const void	*source, size_t size )
{
	char *str;
	char *dst;
	size_t i;

	str = (char *)source;
	dst = destination;
	i = 0;
	if (dst == str)
		return (dst);
	while (i < size && (str[i] != '\0' || dst[i] != '\0'))
	{
		dst[i] = str[i];
		i++;
	}
	return (dst);
}
// int main()
// {
// 	const char src[] = "la vie est belle";
// 	char dest[40] = "hellooo";
// 	printf("before ft_memcpy = %s\n", dest);
// 	ft_memcpy(dest, src, 16);
// 	printf("after memcpy = %s", dest);
// 	return (0);	
// }
