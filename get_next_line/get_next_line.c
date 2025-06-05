#include "get_next_line.h"
/* clear static char *re_str to receive remianing string
*/


char    *get_next_line(int fd)
{
    static char *re_str;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    re_str = 
    if (!re_str)
        return (NULL);
    
}