/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   internal.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:28:54 by jmaing            #+#    #+#             */
/*   Updated: 2024/03/07 22:30:51 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERNAL_H

# include "mb_rt_type.h"

t_err			mb_rt_stack_internal_default_v_ok(t_mb_rt_stack *self);
t_err			mb_rt_stack_internal_default_v_ko(t_mb_rt_stack *self);
t_err			mb_rt_stack_internal_default_v_add(
					t_mb_rt_stack *self,
					t_mb_rt_resource *destination,
					t_mb_rt_resource resource);
t_err			mb_rt_stack_internal_default_v_tmp(
					t_mb_rt_stack *self,
					t_mb_rt_resource *destination,
					t_mb_rt_resource resource);

#endif
