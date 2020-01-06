#include <iostream>
#include<string.h>
struct ElementPile{
    int info;
    ElementPile* svt;
};
typedef ElementPile* Pile;

/// les fonctions de base :
void Empiler(int x, Pile &P);
int Depiler(Pile &P);
bool VidePile(Pile P);
void LibererPile(Pile &P);
int sommetPile(Pile );
void AfficherPile(Pile P);
