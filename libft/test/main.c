#include "../libft.h";
#include "testing.h";
#include <setjmp.h>
#include <stdlib.h>;

int	main()
{
	printf("ft_isalpha tests:\n\t");
	test_ft_isalpha();

	printf("ft_isdigit tests:\n\t");
	test_ft_isdigit();

	printf("ft_isalnum tests:\n\t");
	test_ft_isalnum();
	
	printf("ft_isascii tests:\n\t");
	test_ft_isascii();

	printf("ft_isprint tests:\n\t");
	test_ft_isprint();
	
	printf("ft_ismemset tests:\n\t");
	test_ft_memset();
	
	printf("ft_bzero tests:\n\t");
	test_ft_bzero();
	
	printf("ft_memcpy tests:\n\t");
	test_ft_memcpy();
	
	printf("ft_memmove tests:\n\t");
	test_ft_memmove();
	
	printf("ft_strlcpy tests:\n\t");
	test_ft_strlcpy();
	
	printf("ft_strlcat tests:\n\t");
	test_ft_strlcat();
	
	printf("ft_toupper tests:\n\t");
	test_ft_toupper();
	
	printf("ft_tolower tests:\n\t");
	test_ft_tolower();
	
	printf("ft_strchr tests:\n\t");
	test_ft_strchr();
	
	printf("ft_strrchr tests:\n\t");
	test_ft_strrchr();
	
	printf("ft_strncmp tests:\n\t");
	test_ft_strncmp();
	
	printf("ft_memchr tests:\n\t");
	test_ft_memchr();
	
	printf("ft_memcmp tests:\n\t");
	test_ft_memcmp();
	
	printf("ft_strnstr tests:\n\t");
	test_ft_strnstr();
	
	printf("ft_atoi tests:\n\t");
	test_ft_atoi();
	
	printf("ft_calloc tests:\n\t");
	test_calloc();
	
	printf("ft_strdup tests:\n\t");
	test_strdup();
}