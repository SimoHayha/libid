#include "lib.h"

int	id_strcmp(char* s1, char* s2)
{
	int	i;

	i = 0;
	if (s1 == s2)
		return (0);
	else if (!s1)
		return (-1);
	else if (!s2)
		return (1);
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i = i + 1;
		else
		{
			if (s1[i] > s2[i])
				return (1);
			else
				return (-1);
		}
	}
	return (0);
}

int	id_strncmp(char* s1, char* s2, int n)
{
	int	i;

	i = 0;
	if (s1 == s2)
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i = i + 1;
		else
		{
			if (s1[i] > s2[i])
				return (1);
			else
				return (-1);
		}
	}
	return (0);
}
