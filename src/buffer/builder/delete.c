/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 23:07:59 by jmaing            #+#    #+#             */
/*   Updated: 2024/03/07 23:08:44 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_rt.h"

#include <stdlib.h>

void	mb_rt_buffer_builder_delete(t_mb_rt_buffer_builder *self)
{
	free(self->buffer);
	free(self);
}
