/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_quit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:30:34 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/26 16:59:58 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mlx_playground.h"

int	full_quit(t_wrapper *wrapper)
{	
	mlx_loop_end(wrapper->mlx.ptr);
	return (true);
}
