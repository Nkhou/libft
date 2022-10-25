/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:36:36 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 16:38:48 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*int main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore (): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	ft_bzero(str +3 , 8*sizeof(char));

	printf("After memset():  %s", str);
	return 0;
}
 */