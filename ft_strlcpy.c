/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strlcpy.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: nkhoudro <nkhoudro@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/10/07 11:13:40 by nkhoudro		  #+#	#+#			 */
/*   Updated: 2022/10/07 16:22:50 by nkhoudro		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>
size_t  ft_strlcpy(char *dst, const char *src, unsigned int  dstsize)
{
	unsigned int i;
	unsigned int cmp;

	i = 0;
	cmp = 0;
	while (src[cmp] && cmp < dstsize )
		cmp++;
	while (i < dstsize  && dstsize > 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (cmp);
}
// void test(int size)
// {
// 	char string[] = "Hello there, Venus";
// 	char buffer[19];
// 	int r;

// 	r = strlcpy( buffer, string, size);
// 	printf("Copied '%s' into '%s', length %d\n", string, buffer, r);

	
// }

// int main()
// {
// 	test(30);
// 	test(1);
// 	test(0);
// 	return(0);
// }
