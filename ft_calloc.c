/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:38:37 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/27 19:24:28 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ca;

	ca = malloc (count * size);
	if (ca == NULL)
		return (NULL);
	ft_bzero(ca, count * size);
	return (ca);
}

// int main()
// {
// 	int *p;
// 	p = ft_calloc(10, sizeof(int));
// 	if(!p)
// 	{
// 		printf("faild\n");
// 		exit(0);
// 	}
// 	int sum = 0;
// 	int i = 0;
// 	while (i < 10)
// 	{
// 		*(p + i) = i;
// 		sum += *(p + i);
// 		i++;
// 	}
// 	printf("%d", sum);
// 	free(p);
// }