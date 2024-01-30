/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:05:59 by reldahli          #+#    #+#             */
/*   Updated: 2024/01/30 13:06:02 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
void	print_newline_helper(char *buffer);
char	*read_from_file(int fd);
char	*get_next_line(int fd);
char	*append_buffer(char *basin_buffer, char *read_buffer);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

#endif
