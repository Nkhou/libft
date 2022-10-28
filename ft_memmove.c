/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:29 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/27 22:59:59 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*my_dst;
	unsigned char	*my_src;
	size_t			i;

	i = 0;
	my_dst = (unsigned char *)dst;
	my_src = (unsigned char *)src;
	if (my_dst == my_src)
		return (my_dst);
	if (dst > src)
	{
		while (len--)
		{
			my_dst[len] = my_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			my_dst[i] = my_src[i];
			i++;
		}
	}
	return (dst);
}
// int main()
// {
//     char str1[] = ""; // Array of size 100
//     char str2[] = ""; // Array of size 5
//     puts("str1 before memmove ");
//     puts(str1);
//     /* Copies contents of str2 to sr1 */
//     memmove(str1, str2, sizeof(str2));
//     puts("\nstr1 after memmove ");
//     puts(str1);
// 	ft_memmove(str1, str2, sizeof(str2));
//     puts("\nstr1 after memmove ");
//     puts(str1);
//     return 0;
// }
// int main()
// {
// 	char src[5] = "abcd";
// 	ft_memmove(src + 1, src, 3);
// 	printf("after memcpy = %s", src);
// 	return (0);	
// }
