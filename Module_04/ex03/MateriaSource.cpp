# include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) { 
    for (int i = 0; i < 4; i++)
        tab[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy) {
    MateriaSource::operator=(cpy);
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (tab[i])
            delete tab[i];
    }
}

MateriaSource&   MateriaSource::operator=(const MateriaSource& bis)
{
    for (int i = 0; i < 4; i++)
        tab[i] = bis.tab[i];
    return (*this);
}

int MateriaSource::countItems() {
    int i = 0;
    while (i < 4 && tab[i] != NULL)
        i++;
    return i;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (this->countItems() == 4)
		std::cout << RED << "MateriaTab is full." NC << std::endl;
	else {
        int counter = this->countItems();
		tab[counter] = m;
        std::cout << GREEN << m->getType() << " is now stored in slot " << counter << " of the materia tab" << NC << std::endl;
    }
}

AMateria*       MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (tab[i] && type == tab[i]->getType())
            return tab[i];
    }
    std::cout << RED << type << " isn't in the materia tab." << NC << std::endl;
    return 0;
}