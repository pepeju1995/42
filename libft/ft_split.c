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

static count_separator(char const *s, char c)
{
	int	occurrences;

	occurrences = 0;
	while (*s)
	{
		if (*s == c)
			occurrences++;
		*s++;
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

	num_words = count_separator(s, c);
	result = malloc((num_words + 1) * sizeof(char *));
	current_word = 0;
	start_word = 0;
	while (current_word < (num_words - 1))
	{
		len_word = start_word;
		while (s[len_word] != c && s[len_word])
			len_word++;
		result[current_word] = malloc(len_word - start_word * sizeof(char));
		ft_strlcpy(result[current_word], s + start_word, len_word - start_word);
		start_word = len_word + 1;
		current_word++;
	}
	return (result);
}