/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:13:53 by coder             #+#    #+#             */
/*   Updated: 2022/11/09 19:01:56 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	char	*buffer;
	int		end;
	char	*dst;
	ssize_t	rread;

	if (!buffer)
		buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	while (end == 0)
	{
		rread = read(fd, buffer, BUFFER_SIZE);
		buffer[rread] = '\0';
		if (!dst)
			dst = malloc((BUFFER_SIZE + 1) * sizeof(char));
		buffercat(dst, buffer);
		if (rread <=  0)
			return (NULL);
		else
			end = check_endline(dst);
	}
	return (end);
}

char	find_line()
