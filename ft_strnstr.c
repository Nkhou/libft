/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:38:08 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/11 18:41:04 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (needle == NULL || needle == haystack)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (ft_strncmp(haystack + i, needle, len) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	const char *h;
// 	const char *n;

//     h = "hellobilalgoodbaybilal";
//     n = "algoodb11";
//     printf("%s \n", ft_strnstr(h, n,6));
// 	printf("%s \n", strnstr(h, n, 6));
// 	return (0);
// }