/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42paris.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:29:20 by schouite          #+#    #+#             */
/*   Updated: 2025/12/10 22:16:47 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*join_line(char *buffer, char *rest)
{
	char	*str;

	if ((!rest))
		return (ft_strdup(buffer));
	str = ft_strjoin(rest, buffer);
	if (!str)
	{
		free(rest);
		return (NULL);
	}
	free(rest);
	return (str);
}

char	*handle_rest(char **rest)
{
	char	*newline;
	char	*line;
	char	*tmp;
	int		len;

	if (!*rest || !**rest)
		return (free(*rest), *rest = NULL, NULL);
	newline = ft_strchr(*rest, '\n');
	if (!newline)
	{
		line = ft_strdup(*rest);
		return (free(*rest), *rest = NULL, line);
	}
	len = (int)((newline - *rest) + 1);
	line = ft_substr(*rest, 0, len);
	if (!line)
		return (free(*rest), *rest = NULL, NULL);
	tmp = ft_strdup(newline + 1);
	if (!tmp)
		return (free(*rest), free(line), *rest = NULL, NULL);
	return (free(*rest), *rest = tmp, line);
}

char	*get_next_line(int fd)
{
	static char	*rest = NULL;
	char		*buffer;
	char		*newline;
	int			nb_read;

	newline = NULL;
	if (rest)
		newline = ft_strchr(rest, '\n');
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free(rest), rest = NULL, NULL);
	while (!newline)
	{
		nb_read = read(fd, buffer, BUFFER_SIZE);
		if (nb_read < 0)
			return (free(buffer), free(rest), rest = NULL, NULL);
		if (nb_read == 0)
			break ;
		buffer[nb_read] = '\0';
		rest = join_line(buffer, rest);
		if (!rest)
			return (free(buffer), NULL);
		newline = ft_strchr(rest, '\n');
	}
	return (free(buffer), handle_rest(&rest));
}
