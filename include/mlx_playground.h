/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_playground.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:38:54 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/18 19:19:26 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_PLAYGROUND_H
# define MLX_PLAYGROUND_H

# include <stdio.h>
# include <stdlib.h>
# include "../.minilibx/mlx.h"
# include <sysexits.h>

typedef enum e_prog
{
	FRACTOL
}	t_prog;

void	exit_with_error(const char *error, int error_code);

#endif
