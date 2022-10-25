/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:13:53 by coder             #+#    #+#             */
/*   Updated: 2022/10/24 20:23:27 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*lastline;
	static int	i_buffer = 0;
	int		not_end;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	not_end = 0;
	while (not_end == 0)
	{
		read(fd, BUFFER_SIZE, 1);
	}




// salva o que foi lido pelo buffer em uma variavel e retorna
	while (buffer[i_buffer] != '\0' || buffer[i_buffer])
		i_buffer++;
	lastline = malloc((sizeof(char) * i_buffer) + 1);
	lastline[i_buffer + 1] = '\0';
	while (i_buffer >= 0)

		lastline[i_buffer] = buffer[i_buffer];
		i_buffer--;
	}
	return (lastline);
}

char	*read_file(int fd)
{
	read(fd, buffer, BUFFER_SIZE);
	
	while (not_end == 0)
	{
		read_file(fd);
	}
}
