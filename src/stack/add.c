/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:27:56 by jmaing            #+#    #+#             */
/*   Updated: 2024/03/07 22:51:07 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_rt.h"

t_err	mb_rt_stack_add(
	t_mb_rt_stack *self,
	t_mb_rt_resource *destination,
	t_mb_rt_resource resource
)
{
	return (self->v->add(self, destination, resource));
}
