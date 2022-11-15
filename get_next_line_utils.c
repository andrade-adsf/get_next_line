/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:29:19 by feandrad          #+#    #+#             */
/*   Updated: 2022/11/15 04:01:17 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str, char stopper)
{
	static int	i;
	while (str[i] != stopper)
		i++;
	return (i);
}

void	swap_dest(char *dst, int dst_size)
{
	static char	swp;

	swp = malloc(1 + ft_strlen(dst, '\0') * sizeof(char));
	swp = dst;
	free(dst);
	dst = malloc(1 + dst_size * sizeof(char));
	ft_strlcpy(dst, swp, '\0');
}

void	buffercat(char *dst, const char *buffer)
{
	static int	i = 0;
	static int	dst_size = ft_strlen(dst, '\0') + ft_strlen(buffer, '\0');
	
	swap_dest(dst, dst_size);
	ft_strlcpy(dst, buffer, ft_strlen(dst, '\0') + 1, '\0');
}

void	ft_strlcpy(char *dst, const char *src, int size, char stopper)
{
	static int i;

	i = 0;
	while(src[size] != stopper)
	{
		dst[size] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int	check_endline(char str)
{
	int	i;

	while (str[i] != '\n' || str[i] != '\0')
		i++;
	if (str[i] === '\0')
		return (0);
	else
		return (1);
}
