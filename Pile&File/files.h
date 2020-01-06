#include <iostream>

struct ElementFile{
    int info;
    ElementFile* svt;
};

struct File{
    ElementFile* Tete;
    ElementFile* Queue;
};

/// les fonctions de base :
File cree();

void Emfiler(int  , File &);
int  Defiler(File & );
bool VideFile(File );

void Liberer(File & );
void AfficherFile(File);
int sommetFile(File );
