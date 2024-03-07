/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:26:34 by jmaing            #+#    #+#             */
/*   Updated: 2024/03/07 22:50:57 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_rt.h"

t_err	mb_rt_stack_tmp(
	t_mb_rt_stack *self,
	t_mb_rt_resource *destination,
	t_mb_rt_resource resource
)
{
	return (self->v->tmp(self, destination, resource));
}
