#include "files.h"
#include<stdlib.h>

using namespace std;
File cree(){
    File F;
    F.Tete  = NULL;
    F.Queue = NULL;
    return F;
}



bool VideFile(File F){
    return (F.Tete == NULL);
}

int sommetFile(File F){
    return ( F.Tete ->info );


}



void Emfiler(int x , File &F){
    /// creation de l'element a emfiler
    ElementFile* q = new ElementFile;
    q->info = x;
    q->svt = NULL;

    if(!VideFile(F)) F.Queue->svt = q;
        else F.Tete = q;
        F.Queue = q;
}
int  Defiler(File &F){
    if(VideFile(F)) cout << "ERREUR" <<endl;
    else{

        int val;
        ElementFile *q = F.Tete;
        val = q->info;
        F.Tete = F.Tete->svt;
        free(q);
        return val;

    }
}



void Liberer(File &F){

    while(F.Tete!= NULL){
        ElementFile* q = F.Tete;
        F.Tete = F.Tete -> svt ;
        free(q);
    }
    free(F.Tete);
}

void AfficherFile(File F){
    ElementFile* q;
    q = F.Tete;
    cout << "<-";
    while(q!=NULL){
        cout <<"|"<< q->info <<"|";
        q=q->svt;
    }
    cout << "|<-"<<endl;
}
