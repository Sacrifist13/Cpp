#include <iostream>

struct Vector2D
{
    int x {};
    int y {};

    void deplacer(int dx, int dy)
    {
        x += dx;
        y += dy;
    }

    void afficher() const 
    {
        std::cout << '(' << x << ',' << y << ")\n";
    }
};

int main()
{
    Vector2D position;

    position.afficher();
    position.deplacer(5, -2);
    position.afficher();
    return 0;
}