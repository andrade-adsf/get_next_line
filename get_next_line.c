/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:13:53 by coder             #+#    #+#             */
/*   Updated: 2022/11/08 19:53:47 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	char	*buffer;
	int		not_end;
	char	*result;
	int		line_end

	if (!buffer)
		buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	while (not_end == 1)
	{
		read(fd, buffer, BUFFER_SIZE);
		if (!result)
			result = malloc((BUFFER_SIZE +1) * sizeof(char));
		buffercat(result, buffer);
		line_end = ft_strlen(result)
		if	(line_end == '\n' || line_end == '\0')
			not_end == 0;
	}
	return (result);
}
