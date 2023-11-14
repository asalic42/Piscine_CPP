#include "FileStream.hpp"

// int main(int ac, char *av[])
// {
//     if (ac != 4)
//         return 1;
//     else
//     {
//         // std::string filename = av[1];
//         // std::ofstream myfile ("test.replace");
//         // if (myfile.is_open())
//         // {
//         //     myfile << "Test d'ecriture bis\n";
//         //     myfile.close();
//         // }
//         std::string line;
//         std::ifstream file_two(av[1]);
//         if (file_two.is_open())
//         {
//             std::fstream new_file;
//             new_file.open("jesuisun.replace", std::fstream::out);
//             new_file.close();
//             std::string word;
//             const char *word_char;
//             while (file_two >> word)
//             {
//                 word_char = word.c_str();
//                 if (std::strcmp(word_char, av[2]) == 0)
//                     replace_file(av[3]);
//                 else
//                     replace_file(word_char);
//             }
//             file_two.close();
//         }
        
//         // if (is_file_good(&filename))
//         // {
//         //     std::ifstream file(filename);
//         //     filename >> "hello";
//         //     file.close();
//         // }
//     }
//     return (0);
// }

// int	len_until(std::string str, char c)
// {
// 	for (int i=0; i < str && str[i])
// }


// bool	is_occure(char *str, char *s1)
// {
// 	if (std::strcmp(str, s1) == 0)
// 		return true;
// 	return false;
// }

// char	*string_to_word(std::string line)
// {
// 	char	*str;

// 	while ()
// }


// void	check_n_write(std::string line, char *s1, char *s2)
// {
// 	for (int i=0; i < line.length(); i++)
// 	{
		
// 	}
// }

// int	main(int ac, char *av[])
// {
// 	if (ac != 4)
// 		return 1;
// 	else
// 	{
// 		std::ifstream read_file(av[1]);
// 		if (read_file.is_open())
// 		{
// 			std::string line;
// 			while (getline(read_file, line))
// 			{
// 				std::cout << line << std::endl;
// 			}
// 		}
// 	}
// }

#include <iostream>
#include <fstream>
#include <string>

void remplacerOccurences(std::string& chaine, const std::string& s1, const std::string& s2)
{
    size_t position = chaine.find(s1);

    while (position != std::string::npos)
	{
        chaine = chaine.substr(0, position) + s2 + chaine.substr(position + s1.length());
        position = chaine.find(s1, position + s2.length());
    }
}

int main(int ac, char *av[])
{
	if (ac != 4)
		return 1;
    std::string fichierSource = av[1];
	std::string name_replace;

	name_replace = fichierSource.substr(0, fichierSource.find("."));
	std::cout << name_replace << std::endl;

    std::string fichierDestination = name_replace + ".replace";
    std::ifstream fichierSourceStream(fichierSource.c_str());
    if (!fichierSourceStream.is_open()) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier source " << fichierSource << std::endl;
        return 1;
    }
	std::string line;
	std::string	contentFile;
	while (std::getline(fichierSourceStream, line))
	{
		if (contentFile.empty())
			contentFile = line;
		else
			contentFile = contentFile.append(line);
		contentFile.append("\n");
	}
    fichierSourceStream.close();

    remplacerOccurences(contentFile, av[2], av[3]);
    std::ofstream fichierDestinationStream(fichierDestination.c_str());
    if (!fichierDestinationStream.is_open()) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier destination " << fichierDestination << std::endl;
        return 1;
    }
    fichierDestinationStream << contentFile;
    fichierDestinationStream.close();
    std::cout << "Le contenu a été copié avec succès dans le fichier destination avec les remplacements." << std::endl;
    return 0;
}
