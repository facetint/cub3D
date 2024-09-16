/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:55:08 by facetint          #+#    #+#             */
/*   Updated: 2024/09/16 11:55:09 by facetint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "vector.h"
# include "mlx_struct.h"
# include "map.h"

typedef struct s_camera
{
	t_vector	dir;
	t_vector	plane;
}	t_camera;

typedef struct s_pressed_keys	t_pressed_keys;

typedef struct s_player
{
	t_vector		position;
	t_camera		camera;
	t_map			map;
	t_mlx			mlx;
	t_pressed_keys	*keys;
}	t_player;

#endif