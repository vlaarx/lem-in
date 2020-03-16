#include "lemin.h"

int			hash(int size, char *name)
{
	int		i;
	int		key;

	i = 0;
	key = 0;
	while (name[i])
	{
		key += name[i];
		i++;
	}
	key = key % (size * 4);
	return (key);
}
