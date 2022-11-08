/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:29:19 by feandrad          #+#    #+#             */
/*   Updated: 2022/11/08 20:30:50 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	static int	i;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	swap_dest(char *dst, int dst_size)
{
	static char	swp;

	swp = malloc(1 + ft_strlen(dst) * sizeof(char));
	swp = dst;
	free(dst);
	dst = malloc(1 + dst_size * sizeof(char));
	ft_strlcpy(dst, swp);
}

void	buffercat(char *dst, const char *buffer)
{
	static int	i = 0;
	static int	dst_size = ft_strlen(dst) + ft_strlen(buffer);
	
	swap_dest(dst, dst_size);
	ft_strlcpy(dst, buffer, ft_strlen(dst) + 1);
}

void	ft_strlcpy(char *dst, const char *src, int size)
{
	static int i;

	i = 0;
	while(src[size] != '\0')
	{
		dst[size] = src[i];
		i++;
	}
	dst[i] = '\0';
}
