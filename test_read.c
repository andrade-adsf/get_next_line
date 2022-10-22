/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:24:36 by coder             #+#    #+#             */
/*   Updated: 2022/10/22 05:52:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int	main()
{
	char	*path = "./short.txt";
	char	*buffer;
	int		fd;
	int		buffer_size;
	
	buffer_size = 80;
	memset(buffer, 0, buffer_size + 1);
	fd = open(path, O_RDONLY);
	read(1, buffer, buffer_size);
	printf("%s\n", buffer);
}
