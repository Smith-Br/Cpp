#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int a = 0 , b = 0;
    //or
    int c(0), d(0);
    //Specially, Uniform initialization:
    int e{0}, f{0};

    std::cout << a, b, c, d, e, f;
}