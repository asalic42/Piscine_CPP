#ifndef FILESTREAM_HPP
# define FILESTREAM_HPP

# include <iostream>
# include <fstream>
# include <cstring>
# include <string>

int    read_srcfile(std::string& content_file, const std::string src_file);
int    write_repfile(const std::string content_file, const std::string src_file);

#endif