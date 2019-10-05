#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

// swip value function prototype :
void swip(int &x,
          int &y
          );
// print array function prototype :
void ArrayOut(int arr[],            // array
              int n                 // array' size
              );

// sum of array element function prototype :
int ArraySum(int arr[],             // array
             int imin,              // starting index
             int imax               // ending index
             );
// search 4 an element in the array function' prototype :

int SearchElement(int arr[],        // array
                  int n,            // array's size
                  int element       // element that we need 2 find
                  );
// Min, Max between two index functions prototypes :

int MinVect(int arr[],                  // array
            int imin,                   // starting index
            int imax                    // ending index
            );


int MaxVect(int arr[],                  // array
            int imin ,                  // starting index
            int imax                    // ending index
            );

int MinMaxVect(int arr[],               // array
               int imin ,               // starting index
               int imax                 // ending index
               );



// selection sort function prototype :
void SelectionSort(int arr[],          // array
                   int n            // array size
                   );

// insertion sort function prototype :
void InsertionSort(int arr[],          // array
                   int n            // array size
                   );
// bubble sort function prototype :
void BubbleSort(int arr[],          // array
                   int n            // array size
                   );

#endif // SORT_H_INCLUDED
