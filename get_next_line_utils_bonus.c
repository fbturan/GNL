/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:17:10 by fatturan          #+#    #+#             */
/*   Updated: 2023/08/04 14:48:10 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_line_size(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] || s[i] == '\n')
	{
		if (s[i] == '\n')
			return (i + 1);
		i++;
	}
	return (i);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_is_newline(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s, char *buffer)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s)
	{
		s = malloc(sizeof(char) * 1);
		s[0] = '\0';
	}
	res = malloc (sizeof (char) * (ft_strlen(s) + ft_strlen(buffer)) + 1);
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j])
		res[i++] = s[j++];
	j = 0;
	while (buffer[j])
		res[i++] = buffer[j++];
	res[i] = '\0';
	free (s);
	return (res);
}
