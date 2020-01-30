#include <iostream>

using namespace std;

/*
Exercice 19
Ecrire un algorithme qui demande un entier à l’utilisateur et qui affiche si ce nombre est pair ou pas.
*/

int main()
{
    int a;

    cout << "saisir un nombre: " << endl;
    cin>>a;
    if (a%2==0)
    {
        cout << "c'est un nombre pair" <<endl;
    }
    else{
        cout << "c'est un nombre impair" <<endl;
    }
    return 0;
}
