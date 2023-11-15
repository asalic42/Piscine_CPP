#include "FileStream.hpp"

/* How manipulate files?
    std::ifstream -> read a file
    std::ofstream -> write in a file
*/


/* Replace_occurence 
    * Search the first occurence and place a pos on it,
    * If pos!=null: modify chaine by removing the occurence and replacing it by s2
    * And pos search the next occurence, if there isn't, then end.
*/
void replace_occure(std::string& chaine, const std::string& s1, const std::string& s2)
{
    size_t pos = chaine.find(s1);

    while (pos != std::string::npos)
	{
        chaine = chaine.substr(0, pos) + s2 + chaine.substr(pos + s1.length());
        pos = chaine.find(s1, pos + s2.length());
    }
}

int main(int ac, char *av[])
{
	if (ac != 4)
		return 1;
    std::string src_file = av[1];
	std::string name_replace;
	name_replace = src_file.substr(0, src_file.find("."));
    std::string replace_file = name_replace + ".replace";
    
    std::ifstream src_stream(src_file.c_str());
    if (!src_stream.is_open())
    {
        std::cerr << "\x1b[31;1mERROR: cannot open the source file !\x1b[0m" << std::endl;
        return 1;
    }
	std::string line;
	std::string	content_file;
	while (std::getline(src_stream, line))
	{
		if (content_file.empty())
			content_file = line;
		else
			content_file = content_file.append(line);
		content_file.append("\n");
	}
    src_stream.close();

    replace_occure(content_file, av[2], av[3]);
    std::ofstream replace_stream(replace_file.c_str());
    if (!replace_stream.is_open())
    {
        std::cerr << "\x1b[31;mERROR: cannot open the \".replace\" file\x1b[0m" << std::endl;
        return 1;
    }
    replace_stream << content_file;
    replace_stream.close();
    std::cout << "\x1b[33;1mSUCCESS >>> \x1b[33;0mA new file has been created !\x1b[0m" << std::endl;
    return 0;
}
