/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_playground.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:38:54 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/26 17:02:46 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_PLAYGROUND_H
# define MLX_PLAYGROUND_H

# include <stdio.h>
# include <stdlib.h>
# include <sysexits.h>
# include <X11/keysym.h>

# include "../.minilibx/mlx.h"
# include "../libft/include/libft.h"

# define WINDOW_WIDTH 720
# define WINDOW_HEIGT 480
# define W_W WINDOW_WIDTH
# define W_H WINDOW_HEIGT

typedef struct s_mlx
{
	void	*ptr;
	void	*win;
}	t_mlx;

typedef struct s_wrapper
{
	t_list	*keypressed;
	t_mlx	mlx;
}	t_wrapper;

void	exit_with_error(const char *error, int error_code);
int		full_quit(t_wrapper *wrapper);
int		key_pressed(int keycode, t_wrapper *wrapper);
int		key_release(int keycode, t_wrapper *wrapper);
bool	key_inlist(t_list *keys, int keycode);
void	key_add(t_list **keys, int keycode);
void	key_remove(t_list **keys, int keycode);
void	key_clear(t_list **keys);

#endif
