#include <iostream>

template <typename ti> ti getMax(ti Number1, ti Number2)
{
    if (Number1 > Number2)
        return (Number1);

    return (Number2);
}

int main(void)
{
    std::cout << "Max is : " << getMax(1 , 42) << std::endl;
    std::cout << "Max is : " << getMax(1.337 , 1.01) << std::endl;
    std::cout << "Max is : " << getMax('a' , 'z') << std::endl;

    return (0);
}
