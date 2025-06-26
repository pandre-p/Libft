/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:14:32 by ppassos           #+#    #+#             */
/*   Updated: 2024/05/13 12:42:44 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*array;

	i = 0;
	if (s[i] == '\0')
	{
		array = (void *)malloc((1) * sizeof (char));
		if (array == NULL)
			return (NULL);
		array[0] = s[0];
		return (array);
	}
	while (s[i] != '\0')
		i++;
	array = (void *)malloc((i + 1) * sizeof (char));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		array[i] = s[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
/*int main()
{
	char source[] = "sandes de atum e bom :)";

	char* target = ft_strdup(source);

	printf("%s", target);
	return 0;
}*/
