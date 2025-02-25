/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_playground.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:38:54 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/25 15:15:58 by tstephan         ###   ########.fr       */
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

typedef struct s_mlx
{
	void	*ptr;
	void	*win;
}	t_mlx;

void	exit_with_error(const char *error, int error_code);

#endif
