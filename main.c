/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:58:09 by coder             #+#    #+#             */
/*   Updated: 2022/10/22 11:36:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

char	*get_next_line(int fd);

int main()
{
	int fd;
	char *path = "./wind_file.txt";

	fd = open(path, O_RDONLY);
	printf("%s", get_next_line(fd));
}
