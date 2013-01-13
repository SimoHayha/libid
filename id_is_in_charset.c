#include "lib.h"

int	id_is_in_charset(char c, char* charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i = i + 1;
	}
	return (0);
}
