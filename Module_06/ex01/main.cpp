# include "Serializer.hpp"

int main(void)
{
    Data data;
    data.line = "je suis une ligne";
    data.number = 42;

    uintptr_t ptr = Serializer::serialize(&data);
    std::cout << CYAN "Original data : " NC << &data << std::endl;
    std::cout << CYAN "Cast data in uintptr_t: " NC << &ptr << std::endl;
    std::cout << CYAN "Cast uintptr_t in data: " NC << Serializer::deserialize(ptr) << WHITE "\n\t[Should be the same as Original Data]" NC << std::endl;
}