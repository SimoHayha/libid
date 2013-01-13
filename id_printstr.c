#include "lib.h"

int	id_fprintstr(int fd, char* str)
{
	int	ret;
	int	cpt;

	if (!str)
		return (id_printstr("(null)"));
	cpt = 0;
	while (*str)
	{
		ret = id_fprintchar(fd, *str);
		if (ret == -1)
			return (-1);
		cpt = cpt + 1;
		str = str + 1;
	}
	return (cpt);
}

int	id_printstr(char* str)
{
	return (id_fprintstr(1, str));
}
