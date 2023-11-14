#ifndef FILESTREAM_HPP
# define FILESTREAM_HPP

# include <iostream>
# include <fstream>
# include <cstring>

bool    is_file_good(std::string& filename);
bool    is_same(const char *s1, const char *s2, const char *line);
void    replace_file(const char *str);

#endif