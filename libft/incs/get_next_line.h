#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdio.h>

# define BUFF_SIZE 1024

int					get_next_line(int fd, char **line);

typedef struct		s_gnl
{
	int				size;
	int				index;
	int				fd;
	char			*str;
	struct s_gnl	*next;
}					t_gnl;

#endif
