#include <iostream>

int     demanderNombre(void);
int     multiplier(int x, int y);
void    afficher_resultat(int resultat);


int main()
{
    afficher_resultat(multiplier(demanderNombre(), demanderNombre()));
    return 0;
}

void afficher_resultat(int resultat)
{
    std::cout << "Resultat: " << resultat;

    return;
}
int multiplier(int x, int y)
{
    return x * y;
}

int demanderNombre(void)
{
    int x {};

    std::cout << "Veuillew entrer un nombre: ";
    std::cin >> x;

    return x;
}

