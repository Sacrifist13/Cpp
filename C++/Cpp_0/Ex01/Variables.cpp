#include <iostream>

int main()
{
    int age{24};
    int zero{};
    int input{};
    [[maybe_unused]] double not_used{4787.99};
    std::string name = "Kevin";

    std::cout << "Bonjour je suis " << name << " j' ai " << age << "ans\n"
              << "TEST " << zero << std::endl;

    std::cout << "Enter your  age: ";
    std::cin >> input;
    std::cout << "You have " << input << " years old";

    std::cout << "Salut je suis un test d'une enorme ligne de plus de 80 characters. "
                 "La question c'est est ce que ca foncitonne bien ?";
    return 0;
}