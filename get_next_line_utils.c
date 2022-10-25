/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:29:19 by feandrad          #+#    #+#             */
/*   Updated: 2022/10/24 21:33:21 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	swap_dest(char *dst, int dst_size)
{
	char	swp;

	swp = malloc(1 + ft_strlen(dst) * sizeof(char));
	swp = dst;
	free(dst);
	dst = malloc(1 + dst_size * sizeof(char));
	
}

void	buffercat(char *dst, const char *buffer)
{
	int	i;
	int dst_end;
	int	dst_size;
	char	*swp;
	
// variable init
	dst_size = ft_strlen(dst) + ft_strlen(buffer);
	dst_end = ft_strlen(dst) + 1;
	i = 0;
// dst swap
	swp = dst;
	free(dst);
	dst = malloc(1 + dst_size * sizeof(char));
	while(buffer[i] != '\0')
	{
		dst[dst_size + i] = buffer[i];
		i++;
	}
}
