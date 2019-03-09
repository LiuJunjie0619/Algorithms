#include <iostream>

int abc(int a, int b, int c)
{
    std::cout << "int abc(int a, int b, int c)" << std::endl;
    return a + b * c;
}
float abc(float a, float b, float c)
{
    std::cout << "float abc(float a, float b, float c)" << std::endl;
    return a + b * c;
}
int main()
{
    std::cout << abc(1,2,3) << std::endl;
    std::cout << abc(1.0F,2.0F,3.0F) << std::endl;
    std::cout << abc(1,2,3.0F) << std::endl;
    std::cout << abc(1.0, 2.0 , 3.0) << std::endl;
    return 0;
}
