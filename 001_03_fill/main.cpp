#include <iostream>

template <typename T>
void fill(T* arr,int start,int end,const T & value)
{
    for(int i = start;i < end-1 ;i++)
        arr[i] = value;
}

template <typename T>
void fill(T& arr,int start,int end)
{
}

int main()
{
    int start = 3;
    int end = 10;

    char arr[] = {"1234567890123456"};
    std::cout << arr << std::endl;
    ::fill(arr,start,end,'c');
    std::cout << arr << std::endl;
    return 0;
}
