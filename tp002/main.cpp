#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
/*
*   read a a file contain the size of the array and array's element
*   and print it on the console =D
*/
int main()
{

    int n;
    ifstream flux("in.txt",ios::in); // open file

    flux >> n; // read from the file

    int *tab = new int[n]; // create an array

    for(int i=0;i<n;i++){  // fill the array
        flux >> tab[i];
    }


    for(int i=0;i<n;i++){ // print the array
        cout << tab[i] <<" ";
    }

    int t[5] = {1, 5, 9, 7, 4};
    ifstream outflux("in.txt",ios::out); // open file

    outflux << sizeof()

}
