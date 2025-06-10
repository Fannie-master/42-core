/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:21:10 by cafang            #+#    #+#             */
/*   Updated: 2025/06/10 19:00:56 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* The aim of this function: read content according to 
	fd = open("test1", O_RDONLY) and update storage.

	why use ssize_t len? because the return type of read function
	ssize_t read(int fd, void *buf, size_t count)

	while (1) is an infinite loop until meet return or break.
	if we already  have something in storage, we use strjoin
	if nothing in storage, we use strdup to creat new.
	
	return (len): 
	(1) len > 0, content has read
	(2) len == 0, end of file
	(3) len < 0, read error.
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

/* The aim of this function: get a line(include '\n') from storage
	and leave the remaining characters in storage. 
	For example, we set BUFFER_SIZE=20, and first read "hello\nworl"
	so line is "hello\n"
	and the remaining characters in storage is "worl"
	End of a line: '\n' or '\0'
*/
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

/* The aim of this function: 
	get the file(in main function means test1) content line by line.
	Continuously call the read_update function to read data 
	from the file and store the read data in storage
	then use the get_line function to extract a line of data 
	from storage and return it.
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

// # include <fcntl.h>
// # include <stdio.h>

// int		main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("test1", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("line1: %s", line);
// 	free(line);
// 	line = get_next_line (fd);
// 	printf("line2: %s", line);
// 	free(line);
// 	line = get_next_line (fd);
// 	printf("line3: %s", line);
// 	free(line);
// 	line = get_next_line (fd);
// 	printf("line4: %s\n", line);
// 	free(line);
// 	close(fd);
// 	return (0);
// }