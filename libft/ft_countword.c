/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 01:54:57 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/15 01:55:08 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_countword(char const *s, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	if (s[i] == '\0' && (s[i - 1] != c || i == 0))
		count++;
	return (count);
}
