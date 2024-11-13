/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:51:13 by ahornstr          #+#    #+#             */
/*   Updated: 2023/01/25 17:55:56 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

char	*ft_strchr(char *string, int c)
{
	int		position;
	char	a;

	if (!string)
		return (NULL);
	position = 0;
	a = (char) c;
	while (string[position] != '\0')
	{
		if (string[position] == a)
			return ((char *)string + position);
		position++;
	}
	if (string[position] == a)
		return ((char *)string + position);
	return (NULL);
}

char	*trim_replace_buffer(char *string, size_t i)
{
	int		x;
	char	*temp;

	while (string[i] != '\n' && string[i] != '\0')
		i++;
	if (string[i] == '\n')
		i++;
	x = ft_strlen(string);
	temp = malloc(x - i + 1);
	if (temp == 0)
		return (NULL);
	x = 0;
	while (string[i + x] != '\0')
	{
		temp[x] = string[i + x];
		x++;
	}
	temp[x] = '\0';
	free (string);
	return (temp);
}

char	*read_line(char *string, int fd)
{
	int		count;
	char	buffer[BUFFER_SIZE + 1];

	buffer[0] = '\0';
	count = 1;
	while (!ft_strchr(buffer, '\n') && count != 0)
	{
		count = read(fd, buffer, BUFFER_SIZE);
		if (count < 0)
			return (free(string), NULL);
		buffer[count] = '\0';
		string = ft_strjoin(string, buffer);
		if (!string)
			return (free(string), NULL);
	}
	if (!string[0])
		return (free(string), NULL);
	return (string);
}

char	*get_complete_line(char *string)
{
	int		i;
	int		j;
	char	*returner;

	i = 0;
	j = 0;
	while (string[i] != '\n' && string[i] != '\0')
		i++;
	if (string[i] == '\n')
		i++;
	returner = malloc(i * sizeof(char));
	if (returner == NULL)
		return (NULL);
	while (string[j] != '\n' && string[j] != '\0')
	{
		returner[j] = string[j];
		j++;
	}
	if (string[j] == '\n')
		returner[j++] = '\n';
	returner[j] = '\0';
	return (returner);
}

char	*get_next_line(int fd)
{
	size_t		i;
	static char	*string;
	char		*returner;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!string)
	{
		string = malloc(1 * sizeof(char));
		if (string == NULL)
			return (NULL);
		string[0] = '\0';
	}
	string = read_line(string, fd);
	returner = get_complete_line(string);
	if (!returner)
	{
		free(string);
		string = NULL;
		return (NULL);
	}
	string = trim_replace_buffer(string, i);
	return (returner);
}

int	main(void)
{
	int		fd;
	char	*str;

	fd = open("bible.txt", O_RDONLY);
	str = get_next_line(fd);
	// while (x != 0)
	// {
	// 	printf("line returned: %d: %s", i, get_next_line(fd));
	// 	x--;
	// 	i++;
	// }
	while (str)
	{
		printf("%s", str);
		str = get_next_line(fd);
	}
	close(fd);
	// system("leaks -q a.out");
	return (0);
}

// leaks boii
// onderverdelen in meerdere functies
// read functie
// returner functie
// protecten in meerdere functies tegen een STR == NULL/0