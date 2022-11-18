#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int	ft_strlen(const char *str, char stopper);
void	swap_dest(char *dst, int dst_size);
void	buffercat(char *dst, const char *buffer);
void	ft_strlcpy(char *dst, const char *src, int size, char stopper);
int	check_endline(char *str);
char	*get_next_line(int fd);
char	*show_result(char *dst);

#endif