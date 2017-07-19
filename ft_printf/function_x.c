/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sromanet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 21:55:19 by sromanet          #+#    #+#             */
/*   Updated: 2017/03/23 21:55:28 by sromanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_data_x_2(t_arg *arg, char **global_type)
{
	if (ft_strequ(arg->length, global_type[2]))
	{
		arg->buf = ft_itoa_base_j((uintmax_t)arg->data, 16, arg);
		ft_data_width(arg);
	}
	else if (ft_strequ(arg->length, global_type[5]))
	{
		arg->buf = ft_itoa_base_h((unsigned short int)arg->data, 16, arg);
		ft_data_width(arg);
	}
	else if (ft_strequ(arg->length, global_type[6]))
	{
		arg->buf = ft_itoa_base_hh((unsigned char)arg->data, 16, arg);
		ft_data_width(arg);
	}
	else
	{
		arg->buf = ft_itoa_base_int((unsigned int)arg->data, 16, arg);
		ft_data_width(arg);
	}
}

void			ft_data_x(t_arg *arg, char **global_type)
{
	if (ft_strequ(arg->length, global_type[0]))
	{
		arg->buf = ft_itoa_base_t((ptrdiff_t)arg->data, 16, arg);
		ft_data_width(arg);
	}
	else if (ft_strequ(arg->length, global_type[3]))
	{
		arg->buf = ft_itoa_base_ll((unsigned long long int)arg->data, 16, arg);
		ft_data_width(arg);
	}
	else if (ft_strequ(arg->length, global_type[4]))
	{
		arg->buf = ft_itoa_base_l((unsigned long int)arg->data, 16, arg);
		ft_data_width(arg);
	}
	else if (ft_strequ(arg->length, global_type[1]))
	{
		arg->buf = ft_itoa_base_z((size_t)arg->data, 16, arg);
		ft_data_width(arg);
	}
	else
		ft_data_x_2(arg, global_type);
}
