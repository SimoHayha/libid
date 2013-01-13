#include "lib.h"

char*	id_strcpy(char* s1, char* s2)
{
	int	i;

	i = 0;
	if (!s2)
		return (s1);
	else if (!s1)
		return ((void*)0);
	while (s2[i])
	{
		s1[i] = s2[i];
		i = i + 1;
	}
	s1[i] = '\0';
	return (s1);
}

char*	id_strncpy(char* s1, char* s2, int n)
{
	int	i;

	i = 0;
	if (!s2)
		return (s1);
	else if (!s1)
		return ((void*)0);
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i = i + 1;
	}
	s1[i] = '\0';
	return (s1);
}
