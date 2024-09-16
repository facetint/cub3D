/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graceful_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:54:38 by facetint          #+#    #+#             */
/*   Updated: 2024/09/16 11:54:39 by facetint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx/mlx.h"
#include "../includes/player.h"
#include "../safe_alloc/allocator.h"
#include <stdlib.h>

t_player	*get_player(void)
{
	static t_player	player = {0};

	return (&player);
}

void	free_all(t_player *player)
{
	if (player->mlx.win)
		mlx_destroy_window(player->mlx.mlx, player->mlx.win);
	if (player->map.texture.east.img)
		mlx_destroy_image(player->mlx.mlx, &player->map.texture.east);
	if (player->map.texture.north.img)
		mlx_destroy_image(player->mlx.mlx, &player->map.texture.north);
	if (player->map.texture.south.img)
		mlx_destroy_image(player->mlx.mlx, &player->map.texture.south);
	if (player->map.texture.west.img)
		mlx_destroy_image(player->mlx.mlx, &player->map.texture.west);
	free_memory();
}

void	handle_abort(void)
{
	free_all(get_player());
}

void	safe_exit(void)
{
	handle_abort();
	exit(0);
}
