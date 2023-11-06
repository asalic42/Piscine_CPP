#include "PhoneBook.hpp"

// int	ft_strncmp(const char *s1, const char *s2, size_t len)
// {
// 	size_t	i;

// 	i = 0;
// 	if (s1[0] == '\0' && i < len)
// 		return (- ((unsigned char *)s2)[0]);
// 	if (s2[0] == '\0' && i < len)
// 		return (((unsigned char *)s1)[0]);
// 	while ((s2[i] || s1[i]) && i < len)
// 	{
// 		if (s1[i] != s2[i])
// 			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
// 		i ++;
// 	}
// 	return (0);
// }

int main(void)
{
    PhoneBook	repertoire;
    char		cmd[255];

	/* Vrai code pour l'exo */
	
    std::cout << "ADD, SEARCH or EXIT ? ", std::cin >> cmd;
	while (!(strcmp(cmd, "EXIT") == 0 && strlen(cmd) == 4))
	{
		if (strcmp(cmd, "ADD") == 0 && strlen(cmd) == 3)
			repertoire.add();
		else if (strcmp(cmd, "SEARCH") == 0 && strlen(cmd) == 6)
			repertoire.search();
    	std::cout << "ADD, SEARCH or EXIT ? ", std::cin >> cmd;
	}
    return (0);
}