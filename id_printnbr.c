#include "lib.h"

int	make_division(int fd, int n, int* div, int* cpt)
{
	int	ret;

	if (n > 0)
		ret = id_fprintchar(fd, (n / *div) % 10 + '0');
	else
		ret = id_fprintchar(fd, (n / *div) % 10 * -1 + '0');
	if (ret == -1)
		return (-1);
	*cpt = *cpt + 1;
	*div = *div / 10;
	return (0);
}

int	id_fprintnbr(int fd, int n)
{
	int	div;
	int	cpt;

	div = 1;
	cpt = 0;
	while (n / div >= 10 || n / div <= -10)
		div = div * 10;
	if (n < 0)
	{
		if (id_fprintchar(fd, '-') == -1)
			return (-1);
		cpt = cpt + 1;
	}
	while (div > 0)
	{
		if (make_division(fd, n, &div, &cpt) == -1)
			return (-1);
	}
	return (cpt);
}

int	id_printnbt(int n)
{
	return (id_fprintnbr(1, n));
}
