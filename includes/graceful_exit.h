/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graceful_exit.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:54:53 by facetint          #+#    #+#             */
/*   Updated: 2024/09/16 11:54:54 by facetint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRACEFUL_EXIT_H
# define GRACEFUL_EXIT_H

# include "player.h"

t_player	*get_player(void);
void		free_all(t_player *player);
void		safe_exit(void);
void		handle_abort(void);

#endif
