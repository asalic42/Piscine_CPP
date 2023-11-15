#include "FileStream.hpp"

/* 
How manipulated files?
    std::ifstream:
        * Read a file that exist
        * Input File Stream
    std::ofstream:
        * Write in a file that exist
        * If the file doesn't, can create a file
        * Output File Stream
    std::fstream:
        * Can write AND read a file
        * Specified with "std::ios::in/out"
        * File Stream
The 3 are classes of  C++ library
*/

/* Replace_occurence 
    * Search the first occurence and place a pos on it,
    * If pos!=null: modify chain by removing the occurence and replacing it by s2
    * And pos search the next occurence, if there isn't, then end.
*/
void replace_occure(std::string& chain, const std::string& s1, const std::string& s2)
{
    size_t pos = chain.find(s1);

    while (pos != std::string::npos)
	{
        chain = chain.substr(0, pos) + s2 + chain.substr(pos + s1.length());
        pos = chain.find(s1, pos + s2.length());
    }
}

int main(int ac, char *av[])
{
	if (ac != 4)
    {
        std::cout << "\x1b[31;1m\n\tERROR :\x1b[0m Not enough args, try again...\n" << std::endl;
		return 1;
    }
    std::string src_file = av[1];
	std::string	content_file;
	if (read_srcfile(content_file, src_file))
        return 1;
    replace_occure(content_file, av[2], av[3]);
    if (write_repfile(content_file, src_file))
        return 1;
    return 0;
}
