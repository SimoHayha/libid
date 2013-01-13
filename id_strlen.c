#include "lib.h"

int	id_strlen(char* str)
{
	int	cpt;

	cpt = 0;
	if (!str)
		return (id_printstr("Warning, NULL argument in id_strlen\n"));
	while (str[cpt])
		cpt = cpt + 1;
	return (cpt);
}
