#include "FileStream.hpp"

/* Read Source File
    * Read the source file line by line.
    * Return ERROR if the file opening failed
    * Add all the content in content_file
*/
int    read_srcfile(std::string& content_file, const std::string src_file)
{
    std::ifstream src_stream(src_file.c_str());
	std::string line;

    if (!src_stream.is_open())
    {
        std::cerr << "\x1b[31;1m\n\tERROR:\x1b[0m cannot open the source file !\n" << std::endl;
        return 1;
    }
	while (std::getline(src_stream, line))
	{
		if (content_file.empty())
			content_file = line;
		else
			content_file = content_file.append(line);
		content_file.append("\n");
	}
    src_stream.close();
    return 0;
}

/* Write in .Replace File
    * Create the .replace file
    * Write content_file with the modif in it
    * Return ERROR if the file opening failed
*/
int    write_repfile(const std::string content_file, const std::string src_file)
{
    std::string name_replace;
	name_replace = src_file.substr(0, src_file.find("."));
    std::string replace_file = name_replace + ".replace";
    std::ofstream replace_stream(replace_file.c_str());
    if (!replace_stream.is_open())
    {
        std::cerr << "\x1b[31;m\n\tERROR:\x1b[0m cannot open the \".replace\" file\n" << std::endl;
        return 1;
    }
    replace_stream << content_file;
    replace_stream.close();
    std::cout << "\x1b[33;1m\n\tSUCCESS >>> \x1b[0mA new file has been created !\n" << std::endl;
    return 0;
}
