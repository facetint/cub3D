/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:55:16 by facetint          #+#    #+#             */
/*   Updated: 2024/09/16 11:55:17 by facetint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef enum e_direction
{
	NORTH,
	SOUTH,
	WEST,
	EAST
}	t_direction;

typedef struct s_vector
{
	double	x;
	double	y;
}	t_vector;

typedef struct s_coord
{
	int		x;
	int		y;
}	t_coord;

typedef struct s_texture
{
	double	pos;
	int		x;
	int		y;
	int		width;
	int		height;
}	t_texture;

typedef struct s_raycast
{
	t_vector	side_dist;
	t_vector	delta_dist;
	t_vector	ray_dir;
	t_coord		gridcoord;
	double		wall_dist;
	double		step;
	int			on_horizontal_line;
	int			line_height;
	t_texture	texture;
	t_texture	current_texture;
}			t_raycast;

double	fract(double x);

#endif
