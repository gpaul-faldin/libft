/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 01:48:36 by gpaul             #+#    #+#             */
/*   Updated: 2020/11/19 16:58:46 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	unsigned char	*src;
	unsigned char	*dst;

	src = (unsigned char *)source;
	dst = (unsigned char *)destination;
	if (src < dst)
	{
		while (size > 0)
		{
			size--;
			dst[size] = src[size];
		}
	}
	else
		ft_memcpy(dst, src, size);
	return ((void*)dst);
}
