#include "files.h"
#include<stdlib.h>
/*
TODO : solve & and * problem
*/
using namespace std;

void inverseFile(File& F){
    File F1 = cree();
    File F2 = cree();

    while(!VideFile(F)){
        int tmp = Defiler(F);
        //cout << "tmp :"<<tmp <<endl;
        Emfiler(tmp,F1);
        /// Defiler F2 dans F1 jusqu'a vide :
        while(!VideFile(F2)){
            Emfiler(Defiler(F2),F1);
        }
        /// Defiler F1 dans F2 jusqu'a vide :
        while(!VideFile(F1)){
            Emfiler(Defiler(F1),F2);
        }
    }
cout << "file inverser :" <<endl;
AfficherFile(F2);

}
