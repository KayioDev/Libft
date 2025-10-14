/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:27:39 by klima-do          #+#    #+#             */
/*   Updated: 2025/10/14 17:43:58 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* -------------------------------------------------------------------------- */
/*                                  STRUCTS                                   */
/* -------------------------------------------------------------------------- */

/* Singly linked list (libft bonus) */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* Stack built on top of t_list */
typedef struct s_stack
{
	t_list	*top;
	int		size;
}	t_stack;

typedef struct s_dlist_node
{
	void					*content;
	struct s_dlist_node		*next;
	struct s_dlist_node		*previous;
}	t_dlist_node;

typedef struct s_dlist
{
	int				size;
	t_dlist_node	*first;
	t_dlist_node	*last;
}	t_dlist;


/* -------------------------------------------------------------------------- */
/*                                CORE FUNCS                                  */
/* -------------------------------------------------------------------------- */

/* Character checks */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/* String and memory length */
int		ft_strlen(const char *s);

/* Memory operations */
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

/* Conversions */
int		ft_atoi(const char *nptr);
long	ft_atol(const char *s);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_itoa(int n);

/* String operations */
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* File descriptor output */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* -------------------------------------------------------------------------- */
/*                             LINKED LIST (BONUS)                            */
/* -------------------------------------------------------------------------- */

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* -------------------------------------------------------------------------- */
/*                                   STACKS                                   */
/* -------------------------------------------------------------------------- */

void	init_stack(t_stack **stack);
void	push(t_stack *stack, void *content);
void	*pop(t_stack *stack);
t_list	*find_last(t_stack *stack);
void	stack_clear(t_stack *stack, void (*del)(void *));

/* -------------------------------------------------------------------------- */
/*                             DOUBLY LINKED LIST                             */
/* -------------------------------------------------------------------------- */

/* Futuras funções da t_dlist, ex:
t_dlist			*ft_dlst_new(void);
t_dlist_node	*ft_dlst_node_new(void *content);
void			ft_dlst_add_back(t_dlist *lst, t_dlist_node *new);
void			ft_dlst_add_front(t_dlist *lst, t_dlist_node *new);
void			ft_dlst_clear(t_dlist *lst, void (*del)(void *));
*/
t_dlist_node	*dlist_search(t_dlist *list, void *content);
/* -------------------------------------------------------------------------- */
/*                                  UTILITIES                                 */
/* -------------------------------------------------------------------------- */

char	**ft_free_split(char **arr_ptr);
char	*get_next_line(int fd);

#endif /* LIBFT_H */
