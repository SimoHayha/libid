#include <unistd.h>
#include <stdio.h>

#include "lib.h"

int	id_fprintchar(int fd, int c)
{
	int	ret;
	char	tmp;

	tmp = (char)c;
	ret = write(fd, &c, sizeof(tmp));
	if (ret == -1)
		perror("id_fprint_char");
	return (ret);
}

int	id_printchar(int c)
{
	return (id_fprintchar(1, c));
}
