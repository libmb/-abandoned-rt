/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 23:06:43 by jmaing            #+#    #+#             */
/*   Updated: 2024/03/07 23:28:33 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_rt.h"

void	mb_rt_buffer_builder_build(
	t_mb_rt_buffer_builder *self,
	t_mb_rt_buffer *out
)
{
	out->buffer = self->buffer;
	out->length = self->length;
	self->buffer = NULL;
	self->length = 0;
	self->capacity = 0;
}
