#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int	ft_atoi(const char *str);
int	ft_isprint(int c);
void	ft_memdel(void **ap);
void	ft_putstr_fd(char const *s, int fd);
int	ft_strequ(char const *s1, char const *s2);
char	*ft_strncat(char *s1,const char *s2, size_t n);
char	*ft_strstr(const char *s1, const char *s2);
void	ft_bzero(void *s, size_t n);
int	ft_lenbr(int n);
char	*ft_itoa(int n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
void	ft_striter(char *s, void (*f)(char *));
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_putendl_fd(char const *s, int fd);
int	ft_lenbr(int n);
void	*ft_memset(void *mem, int c, size_t n);
char	*ft_strchr(const char *s, int c);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strtrim(char const *s);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memalloc(size_t size);
void	ft_putchar(char c);
void	ft_strclr(char *str);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
int	ft_tolower(int c);
int	ft_isalnum(int c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
int	ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnew(size_t size);
int	ft_tolower(int c);
int	isalpha(int c);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_putendl(char const *s);
char	*ft_strcpy(char *dest, char *src);
size_t	ft_strlen(char *s);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int	ft_isascii(int c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putnbr(int n);
void	ft_strdel(char **as);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strrchr(const char *s, int c);
int	isdigit(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putstr(char const *s);
char	*ft_strdup(const char *s1);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strxdup(char const *s, size_t x, size_t y);
size_t	ft_line_count(char const *s, char c);
char	**ft_strsplit(char const *s, char c);

#endif