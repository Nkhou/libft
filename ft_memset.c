/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:33 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/17 22:44:22 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *d;
	size_t i;

	d = (unsigned char *)b;
	i = 0;
	if (len < 0)
		return (NULL);
	while (i < len)
	{
		d[i] = c;
		i++;
	}
	return (b);
}

// int main()
// {
// 	int i;
// 	int str[50] = {1, 2, 3, 4,6};

// 	i = 0;
  
// 	// Fill 8 characters starting from str[13] with '.'
// 	ft_memset(str , 0, 4);
// 	while (i < 6)
// 	{
// 	printf("After memset():  %d", str[i]);
// 	i++;
// 	}
// 	return 0;
// }
