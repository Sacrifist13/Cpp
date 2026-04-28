#include <iostream>

namespace Jeu 
{
    void init()
    {
        std::cout << "Initialisation de la partie\n";
        return;
    }
}

namespace Moteur
{
    void init()
    {
        std::cout << "Démarrage du moteur 3D\n";
        return;
    }
}

int main()
{
    Jeu::init();
    Moteur::init();

    return 0;
}
