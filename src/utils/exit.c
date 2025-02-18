/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:18:16 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/18 19:21:27 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mlx_playground.h"

void	exit_with_error(const char *error, int error_code)
{
	fprintf(stderr, "%s\n", error);
	exit(error_code);
}
