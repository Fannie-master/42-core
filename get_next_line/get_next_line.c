/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:21:10 by cafang            #+#    #+#             */
/*   Updated: 2025/06/09 16:26:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* if we already  have something in storage, we use strjoin
	if nothing in storage, we use strdup to creat new.

*/
static	int	read_update(int fd, char **storage, char *temp)
{
	char	*buffer;
	ssize_t	len;

	while (1)
	{
		len = read(fd, temp, BUFFER_SIZE);
		if (len <= 0)
			return (len);
		temp[len] = '\0';
		if (*storage)
		{
			buffer = *storage;
			*storage = ft_strjoin(*storage, temp);
			free(buffer);
		}
		else
			*storage = ft_strdup(temp);
		if (!(*storage))
			return (-1);
		if (ft_strchr(*storage, '\n'))
			break ;
	}
	return (len);
}

static	char	*get_line(char **storage)
{
	char	*line;
	char	*temp;
	int		len;

	temp = *storage;
	len = 0;
	while ((*storage)[len] != '\0' && (*storage)[len] != '\n')
		len++;
	if ((*storage)[len] == '\n')
		len++;
	*storage = ft_strdup(*storage + len);
	if (!(*storage))
	{
		free(temp);
		return (NULL);
	}
	line = malloc(sizeof(char) * (len + 1));
	if (!line)
		return (NULL);
	line[len] = '\0';
	while (len--)
		line[len] = temp[len];
	free(temp);
	return (line);
}

/* clear static char *storage to store the remaining str behind \n
	after read(). 

*/
char	*get_next_line(int fd)
{
	static char	*storage;
	char		*temp;
	char		*new_line;
	int			len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	len = read_update(fd, &storage, temp);
	free (temp);
	temp = NULL;
	if (!storage)
		return (NULL);
	if (len == 0 && ft_strlen(storage) == 0)
	{
		free(storage);
		storage = NULL;
		return (NULL);
	}
	new_line = get_line(&storage);
	return (new_line);
}

# include <fcntl.h>
# include <stdio.h>

int		main(void)
{
	int		fd;
	char	*line;

	fd = open("test1.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	line = get_next_line (fd);
	printf("%s\n", line);
	free(line);
	line = get_next_line (fd);
	printf("%s\n", line);
	free(line);
	close(fd);
	return (0);
}