
#include "grid.hpp"

// Define your functions here
Grid::Grid(){
    arr = new int* [10]; //default is 10
    for (int i=0;i<10<i++){
        arr[i] = new int[10];
    }
}
Grid::Grid (int dimension){
    int **arr;
    arr = int* [dimension];
    for(int i = 0;i < dimension; i++){
        arr[i] = new int[dimension];
    }
}

Grid(const Grid & obj){
    arr = new int **[obj.dimension];
    for(int i = 0; i<dimension;i++){
        arr[i] = new int* [dimension];
        for(int j =0; j<dimension;j++){
            arr[i][j] = new int[dimension];
        }
    }
}
~Grid(){
    for(int i = 0; i<dimension; i++){
        for(int j = 0; j <dimension; i++){
            delete [] arr[i][j];
            delete []arr [i];
        }
        delete [] arr;
    }
}

//trouble with overloaded assignment operator
const Grid & operator=(const Grid & obj){
    
}

void swapRows(int row1, int row2){
    int temp;
    for (int i =0; i<row1; i++){
        temp = arr[row1][i];
        arr[row1][i]=arr[row2][i];
        arr[row2][i]=temp;
    }
}

//trouble with overloaded operators
const Grid operator+(const Grid &obj2){
    
}

void swapColumns (int col1, int col2){
    int temp;
    for (int i =0; i<col1; i++){
        temp = arr[i][col1];
        arr[i][col1]=arr[i][col2];
        arr[i][col2]=temp;
    }
}

Grid multCoords(Grid &obj){
    Grid newobj(&obj);
    for (int i = 0; i < obj.dimension; i++ ){
        for(int j = 0; j < obj.dimension; j++){
            newobj[i][j] = i*j*(obj[i][j]);
        }
    }
    return newobj;
}

void printGrid(){
    for(int i = 0; i<dimension; i++){
        cout << arr[i] << endl;
        for(int j = 0; j <dimension; i++){
            cout << arr[i][j] << endl;
        }
    }
}
    


int main(){
  return 0;
}
