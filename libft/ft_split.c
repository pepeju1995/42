/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:57:13 by josperez          #+#    #+#             */
/*   Updated: 2023/03/21 17:57:13 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*clean_str(char *str, char c)
{
	char	ant;
	int		cursor;
	int		cursor_new;
	int		len;

	ant = '\0';
	cursor = 0;
	cursor_new = 0;
	len = ft_strlen(str);
	if (*str == c || str[len] == c)
	{
		while (str[cursor] == c)
			cursor++;
		while (str[len - 1] == c)
			len--;
		str = str + cursor;
		str[len - cursor] = '\0';
	}
	cursor = 0;
	while (str[cursor])
	{
		if (str[cursor] != ant || str[cursor] != c)
			str[cursor_new++] = str[cursor];
		ant = str[cursor];
		cursor++;
	}
	str[cursor_new] = '\0';
	return (str);
}

static int	count_separator(char *s, char c)
{
	int		occurrences;

	if (*s == '\0')
		return (0);
	occurrences = 1;
	while (*s)
	{
		if (*s == c)
			occurrences++;
		s++;
	}
	return (occurrences);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	int		current_word;
	int		start_word;
	int		len_word;
	char	**result;
	char	*str;

	str = ft_strdup(s);
	str = clean_str(str, c);
	num_words = count_separator(str, c);
	result = malloc((num_words + 1) * sizeof(char *));
	current_word = 0;
	start_word = 0;
	while (current_word < num_words && str[start_word])
	{
		len_word = 0;
		while (str[start_word + len_word] != c && str[start_word + len_word] != '\0')
			len_word++;
		len_word++;
		result[current_word] = malloc(len_word * sizeof(char));
		ft_strlcpy(result[current_word], (const char *)(str + start_word), len_word);
		current_word++;
		start_word += len_word;
	}
	return (result);
}
