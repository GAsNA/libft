#ifndef LIBFT_H
# define LIBFT_H

/* 23 / 34 de faites */
/* 11 restantes */
/* + 9 bonus a faire*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dest, const void *src, size_t n);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_toupper(int c);
int	ft_tolower(int c);


int	ft_strncmp(char *s1, char *s2, unsigned int n);



int	ft_atoi(const char *nptr);

char	*ft_strdup(char *src);

char	*ft_strjoin(char const *s1, char const *s2);

char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);


void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
