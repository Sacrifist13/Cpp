#include <iostream>

void    echanger(int& a, int& b)
{
    int tmp {a};

    a = b;
    b = tmp;
}

void    print_status(const std::string& text, int a, int b)
{
    std::cout << text << "a = " << a << " b = " << b << std::endl;
}

int main()
{
    int a {10};
    int b {20};

    std::string before {"Avant : "};
    std::string after {"After : "};

    print_status(before, a, b);
    echanger(a, b);
    print_status(after, a, b);

    return 0;
}