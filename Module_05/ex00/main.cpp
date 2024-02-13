# include <iostream>
# include <string>

int main(void)
{
    // std::size_t test = 0;
    std::string lol = "je suis une crepe";
    try
    {
        if (lol == "je suis une crepe")
            throw std::exception();
        else
            std::cout << "je suis different en fait." << std::endl;
    }
    catch(std ::exception e)
    {
        std::cout << e.what() << std::endl;
        // std::cerr << e.what() << '\n';
    }
}