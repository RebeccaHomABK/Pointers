#include <iostream>

int main()
{
    int a;
    int b;

    std::cout << "Enter the number to be stored in 'a': ";
    std::cin >> a;
    std::cout << "Enter the number to be stored in 'b': ";
    std::cin >> b;

    int* ptrA = new int{ a };
    int* ptrB = new int{ b };

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "ptrA: " << *ptrA << " (" << ptrA << ")" << std::endl;
    std::cout << "ptrB: " << *ptrB << " (" << ptrB << ")" << std::endl;

    delete ptrA;
    ptrA = nullptr;

    delete ptrB;
    ptrB = nullptr;

}
