#include "piles.h"
#include <stdlib.h>
#include<string.h>

using namespace std;

void Empiler(int x, Pile &P){
    /// creation de l'element a Empiler :
        Pile q = new ElementPile;
        q->info = x;
        q->svt=P;
        P=q;
}


int Depiler(Pile &P){
    int val;
    val = P->info;
    Pile q = P;
    P = P->svt;
    free(q);
    return val;
}


bool VidePile(Pile P){
    return (P == NULL);

}

void LibererPile(Pile &P){
    while(P!=NULL){
        Pile q = P;
        P = P-> svt ;
        free(q);
    }
    free(P);
}

int sommetPile(Pile P){
    return P->info;
}


void AfficherPile(Pile P){
    Pile q;
    q = P;
    while(q!=NULL){
        cout <<"|   "<< q->info <<"    |"<<endl;
        q=q->svt;
    }
    cout << "|   #    |"<<endl;
}






