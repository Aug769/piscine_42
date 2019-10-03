/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:17:29 by sdunckel          #+#    #+#             */
/*   Updated: 2019/06/07 09:31:26 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		len_count;

	len_count = 0;
	while (str[len_count])
	{
		len_count++;
	}
	return (len_count);
}
