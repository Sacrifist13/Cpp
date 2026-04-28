#include <iostream>

class CompteBancaire
{
    private:
        double solde;

    public:
        CompteBancaire(double initial_solde = 100.0) : solde {initial_solde} {}

        void deposer(double montant)
        {
            if (montant > 0.0)
            {
                solde += montant;
                std::cout << "Montant ajoute : " << montant << '$' << std::endl;
            }
            else
            {
                std::cout <<    "Montant ne peut pas etre negatif : " << montant << 
                                "$ -IMPOSSIBLE-" << std::endl;
            }
        }

        void retirer(double montant)
        {
            if (montant > 0.0)
            {
                if (solde - montant >= 0.0)
                {
                    solde -= montant;
                    std::cout << "Montant retire : " << montant << '$' << std::endl;
                }
                else
                {
                    std::cout << "Solde insuffisant" << std::endl;
                }
            }
            else
            {
                std::cout <<    "Montant ne peut pas etre negatif : " << montant << 
                                "$ -IMPOSSIBLE-" << std::endl;
            }
        }

        double getSolde() const
        {
            return solde;
        }
};

int main()
{
    CompteBancaire kev_account {};

    kev_account.deposer(-89.0);
    kev_account.deposer(50);
    kev_account.retirer(5000);
    kev_account.retirer(-89);
    kev_account.retirer(100.0);
    std::cout << kev_account.getSolde();
}