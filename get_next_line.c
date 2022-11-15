/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:13:53 by coder             #+#    #+#             */
/*   Updated: 2022/11/15 03:14:51 by feandrad         ###   ########.fr       */
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
	static char	*result = malloc((ft_strlen(dst, '\n') * sizeof(char) + 1);


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
	return (show_result);
}

// char	find_line()


//	usar uma static pra imprimir a linha
//	armazenar o que estiver depois do \n na dst

static char	*show_result(const char *dst)
{
	static char	*result = malloc((ft_strlen(dst, '\n') * sizeof(char) + 1);

	ft_strlcpy(result, dst, '\n')
	return (result)
}
