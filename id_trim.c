#include "lib.h"

void	id_trim(char** str, char* charset)
{
	int	i;
	int	size;
	char*	tmp;

	if (!*str || !charset)
		id_printstr("Warning, argument NULL in id_trim\n");
	i = 0;
	tmp = *str;
	size = id_strlen(tmp);
	while (i < size)
	{
		if (id_is_in_charset(*tmp, charset))
		{
			if (i == size - 1)
				*tmp = 0;
			else
				tmp = id_strcpy(tmp, tmp + 1);
			size = size - 1;
		}
		else
		{
			tmp = tmp + 1;
			i = i + 1;
		}
	}
}
