#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "Salut bande de salope";
	char s2[] = "Salut bande de salope";
	unsigned int n1 = 21;

	char s3[] = "Salut bande de salopes";
	char s4[] = "Salut bande dE salopes";
	unsigned int n2 = 13;

	char s5[] = "Salut bande d2 salopes";
	char s6[] = "Salut bande de salopes";
	unsigned int n3 = 14;

	char s7[] = "Salut bande de salope";
	char s8[] = "Salut bande de salopes";
	unsigned int n4 = 23;
	
	char s9[] = "Salut bande de salopes";
	char s10[] = "Salut bande de salope";
	unsigned int n5 = 23;
	
	
	printf("Real strncmp = %i\nft_strncmp = %i\n", strncmp(s1, s2, n1), ft_strncmp(s1, s2, n1));
	printf("Real strncmp = %i\nft_strncmp = %i\n", strncmp(s3, s4, n2), ft_strncmp(s3, s4, n2));
	printf("Real strncmp = %i\nft_strncmp = %i\n", strncmp(s5, s6, n3), ft_strncmp(s5, s6, n3));
	printf("Real strncmp = %i\nft_strncmp = %i\n", strncmp(s7, s8, n4), ft_strncmp(s7, s8, n4));
	printf("Real strncmp = %i\nft_strncmp = %i\n", strncmp(s9, s10, n5), ft_strncmp(s9, s10, n5));
}
