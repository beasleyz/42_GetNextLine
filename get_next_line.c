/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 23:50:22 by zbeasley          #+#    #+#             */
/*   Updated: 2017/01/25 23:50:26 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*check_fd(int fd, t_list **files)
{
	t_list		*tmp;

	tmp = *files;
	while (tmp != NULL)
	{
		if (fd == (int)tmp->content_size)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(files, tmp);
	tmp = *files;
	return (tmp);
}

int		ft_copyline(char **dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == '\n')
			break ;
		i++;
	}
	if (!(*dest = ft_strnew(i)))
		return (0);
	*dest = ft_strncpy(*dest, src, i);
	return (i);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*files;
	t_list			*current;
	char			*tmp;
	char			buf[BUFF_SIZE + 1];
	int				i;

	i = 0;
	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	current = check_fd(fd, &files);
	while ((i = read(fd, buf, BUFF_SIZE)))
	{
		buf[i] = '\0';
		tmp = CONTENT;
		MCHECK((CONTENT = ft_strjoin(CONTENT, buf)));
		free(tmp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	CHECK_EOF(i < BUFF_SIZE && !ft_strlen(CONTENT));
	i = ft_copyline(line, CONTENT) + 1;
	tmp = CONTENT;
	CONTENT = ft_strsub(CONTENT, i, (ft_strlen(CONTENT) + 1) - i);
	free(tmp);
	return (1);
}
