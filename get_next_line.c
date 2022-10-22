/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:13:53 by coder             #+#    #+#             */
/*   Updated: 2022/10/22 12:10:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	char	*buffer;
	static int	i_buffer = 0;
	char *lastline;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	read(fd, buffer, BUFFER_SIZE);
	while (buffer[i_buffer] != '\0' || buffer[i_buffer])
		i_buffer++;
	lastline = malloc((sizeof(char) * i_buffer) + 1);
	lastline[i_buffer + 1] = '\0';
	while (i_buffer >= 0)
	{
		lastline[i_buffer] = buffer[i_buffer];
		i_buffer--;
	}
	return (lastline);
}
