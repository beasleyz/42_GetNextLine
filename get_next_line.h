/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 23:52:06 by zbeasley          #+#    #+#             */
/*   Updated: 2017/01/25 23:52:08 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"

# define BUFF_SIZE 1
# define MCHECK(x) if (!x) return (-1)
# define CHECK_EOF(x) if (x) return (0)
# define CONTENT current->content

int		get_next_line(const int fd, char **line);
int		ft_copyline(char **dest, char *src);

#endif
