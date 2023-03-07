#include <ctype.h>
#include "../../libft.h"
#include <stdio.h>

int	test_ft_isalpha()
{
	int		data_test[] = {1, -8, 70, 121, 95};
	int		system_output;
	int		ft_output;
	char	*error_message = "Error expected %i and obtain %i\n";
	char	*success_message = "Ok expected %i and obtain %i\n";

	for (int i = 0; i < 5; i++) 
	{
		system_output = isalpha(data_test[i]);
		ft_output = ft_isalpha(data_test[i]);
		printf("%i\n", system_output);
		if (system_output != ft_output && !system_output)
		{	
			printf(error_message, system_output, ft_output);
			return (0);
		}
		else
			printf(success_message, system_output, ft_output);
	}
	return (1);
}
