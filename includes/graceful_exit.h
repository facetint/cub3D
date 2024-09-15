#ifndef GRACEFUL_EXIT_H
# define GRACEFUL_EXIT_H

# include "player.h"

t_player	*get_player(void);
void		free_all(t_player *player);
void		safe_exit(void);
void		handle_abort(void);

#endif
