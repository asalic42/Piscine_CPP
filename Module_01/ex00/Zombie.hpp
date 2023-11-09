#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>

class Zombie
{
    public:
		Zombie(void);
		~Zombie(void);
		
		void		announce(void);
		std::string get_name(void);
		void		set_name(std::string new_name);

    private:
        std::string	name;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif