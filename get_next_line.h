#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	*get_next_line(int fd)
int	read_file(char **aux_p, char **line_p, int fd)
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
char	*ft_strdup(const char *s1)
char	*ft_substr(char const *s, unsigned int start, size_t len)
size_t	ft_strlen(const char *c)
char	*ft_strjoin(char const *s1, char const *s2)
void	*ft_calloc(size_t count, size_t size)
void	ft_bzero(void *s, size_t n)

#endif