/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <antoine@doussaud.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:34:07 by adoussau          #+#    #+#             */
/*   Updated: 2014/11/05 12:55:28 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
	|| (c >= 'A' && c <= 'Z')
	|| (c >= 'a' && c <= 'z'));
}
