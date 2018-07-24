#include <iostream>

template <typename T>
const int & count(const T& a)
{
    return sizeof(a)/sizeof(a[0]);
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    int count = ::count(a);
    std::cout << count << std::endl;
    return 0;
}
