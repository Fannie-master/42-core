#include "get_next_line.h"

/* if we already  have something in storage, we use strjoin
    if nothing in storage, we use strdup to creat new.

*/
static  int read_update(int fd, char **storage, char *temp)
{
    char *buffer;
    ssize_t len;

    while (1)
    {
        len = read(fd, temp, BUTTER_SIZE)
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
            break;
        return (len); 
    }
}

static char get_line(char **storage)
{
    
}

/* clear static char *storage to store the remaining str behind \n
    after read(). 

*/
char    *get_next_line(int fd)
{
    static char *storage;
    char        *temp;
    char        *new_line;
    int         len;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!re_str)
        return (NULL);
    len = read_update(fd, &storage, temp);
    free (temp);
    temp = NULL;
    if (!storage)
        return (NULL);
    if (count == 0 && ft_strlen(storage) == 0)
    {
        free(storage);
        storage = NULL;
        return (NULL);
    }
    new_line = get_line(&storage);
    return (new_line);
}