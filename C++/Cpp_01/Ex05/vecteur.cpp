#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nombres {1, 2, 3, 4, 5};

    for (auto& n : nombres)
    {
        n *= 10;
    }

    for (const auto& n : nombres)
    {
        std::cout << n << '\n';
    }
}