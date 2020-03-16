#include "lemin.h"

void		make_rooms_hash_table(t_general *farm)
{
	int		h;
	t_room	*tmp;
	t_room	*find_last_room;

	h = -1;
	tmp = farm->begin_rooms;
	if (!(farm->rooms = (t_room**)malloc(sizeof(t_room*)
											* (farm->n_rooms * 4))))
		program_end(farm, 0, NULL);
	while (h < farm->n_rooms * 4 - 1)
		farm->rooms[++h] = NULL;
	while (tmp)
	{
		h = hash(farm->n_rooms, tmp->name);
		if (!farm->rooms[h])
			farm->rooms[h] = tmp;
		else
		{
			find_last_room = farm->rooms[h];
			while (find_last_room->same_hash)
				find_last_room = find_last_room->same_hash;
			find_last_room->same_hash = tmp;
		}
		tmp = tmp->next;
	}
}
