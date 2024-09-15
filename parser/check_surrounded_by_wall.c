#include "../includes/map.h"
#include "../includes/parser.h"

void	check_surrounded_by_wall(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (get_map_element(*map, (t_coord){x, y}) == EMPTY &&
				!is_surrounded_by_defined(map, x, y))
				error_exit(MAP_NOT_SURROUNDED_BY_WALL);
			x++;
		}
		y++;
	}
}

int	is_surrounded_by_defined(t_map *map, int x, int y)
{
	return (get_map_element(*map, (t_coord){x, y + 1}) != UNDEFINED &&
	get_map_element(*map, (t_coord){x, y - 1}) != UNDEFINED &&
	get_map_element(*map, (t_coord){x + 1, y}) != UNDEFINED &&
	get_map_element(*map, (t_coord){x - 1, y}) != UNDEFINED);
}
