#include <iostream>
#include "sort.h"

using namespace std;
/*
===============================================
            SWIP VALUE FUNCTION
===============================================
*/
void swip(int &x,int &y){
    int z;
    z=x;
    x=y;
    y=z;
}



/*
===============================================
            PRINT ARRAY FUNCTION
===============================================
*/
void ArrayOut(int arr[],int n){
    int i;
        for(i=0;i<n;i++){
            cout << arr[i] <<"  ";
        }
}
/*
===============================================
            SUM OF ARRAY' ELEMENTS
===============================================
*/

int ArraySum(int arr[], int imin,int imax){
    int sum = 0;
    int i;
    for(i=imin;i<imax;i++){
        sum = sum + arr[i];
    }
    return sum;
}
/*
===============================================
          SEARCH 4 AN ELEMENT IN ARRAY
===============================================
*/

int SearchElement(int arr[],int n,int element){
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == element) return i;
    }
    return -1;
}
/*
===============================================
            Min, Max between two index
===============================================
*/
int MinVect(int arr[],int imin ,int imax){
    int i;
    int min_value = arr[0];
    for(i=imin +1;i<imax;i++){
        if(arr[i] < min_value) min_value = arr[i];
    }
    return min_value;
}


int MaxVect(int arr[],int imin ,int imax){
    int i;
    int max_value = arr[0];
    for(i=imin +1;i<imax;i++){
        if(arr[i] > max_value) max_value = arr[i];
    }
    return max_value;
}
int MinMaxVect(int arr[],int imin ,int imax){
    const int MIN = -1;
    const int MAX =  1;
    int output;
    int answer;

        cout << "for Min tap *-1 * " << endl;
        cout << "for Max Tap * 1 * " << endl;

        cin >> answer;

        switch(answer){
            case 1  : output = MaxVect(arr,imin,imax);   break;
            case -1 : output = MinVect(arr,imin,imax);   break;
            default : cout << "err";
        }
        return output;
}






















/*
===============================================
                SELECTION SORT
===============================================
*/
void SelectionSort(int arr[],int n){

    int i,j;
    int min_index;
    int min_value;

    for(i=0;i<n-1;i++){
        min_value = arr[i];
        min_index = i;

        for(j=i+1;j<n;j++){
            if(arr[j] < min_value){
                min_value = arr[j];
                min_index = j;
            }
        }
        swip(arr[i],arr[min_index]);
    }

}
/*
===============================================
                INSERTION SORT
===============================================
*/
void InsertionSort(int arr[],int n){
        int i, key, j;
    for(i=1;i<n;i++){
        key = arr[i];
        j=i-1;

        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
/*
===============================================
                BUBBLE SORT
===============================================
*/
void BubbleSort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++)
            if(arr[j] > arr[j+1])
                swip(arr[j], arr[j+1]);
    }
}
