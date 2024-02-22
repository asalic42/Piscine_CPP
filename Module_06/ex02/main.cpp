#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
    Base* instance = generator();
    identify(instance);
    identify(*instance);
    delete instance;
}