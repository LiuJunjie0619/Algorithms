#include <iostream>
#include <numeric>
#include <algorithm>

void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

template <typename T>
void permutations(T a[], int k, int m)
{
    if(k == m)
    {
        std::copy(a,a+m+1,std::ostream_iterator<T>(std::cout,""));
        std::cout << std::endl;
    }

    for(int i = k; i<m; i++)
    {
        std::swap(a[k],a[i]);
        ::permutations(a,k+1,m);
        std::swap(a[k],a[i]);
    }
}

template <typename T>
T sum(T a[],int n)
{
    T theSum = 0;
    return std::accumulate(a,a+n,theSum);
}

template <typename T>
T product(T a[], int n)
{
    T theProduct = 1;
    return std::accumulate(a,a+n,theProduct,std::multiplies<T>());
}

template <class T>
void permutationsSTL(T list[],int k, int m)
{

}
int main()
{
//    int a = 1;
//    int b = 2;
//    std::cout << "a:" << a << std::endl;
//    std::cout << "b:" << b << std::endl;
//    ::swap(a,b);
//    std::cout << "a:" << a << std::endl;
//    std::cout << "b:" << b << std::endl;

//    char a[] = {'a','b','c','d'};
//    ::permutations(a,0,4);

//    double d[]={1.0, 2.0, 3.0, 5.0};
//    std::cout << ::sum(d,4) << std::endl;
//    std::cout << ::product(d,4) << std::endl;

//    double x[]={1.0, 2.0, 3.0, 5.0};
//    double y[4];
//    std::copy(x,x+4,y);
//    std::cout.precision(2);
//    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
//    std::for_each(y,y+4,[](double a){std::cout << a << ',';});
//    std::cout << std::endl;

    return 0;
}
