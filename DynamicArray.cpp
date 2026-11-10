#include <iostream>
using namespace std;

int main() {
    int rows,columnns;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columnns: ";
    cin>>columnns;

    if(rows < 1 || rows > 3 || columnns < 1 || columnns > 3){
        cout<<"Enter numbers greater than or equal to 1 but  less than or equal to 3 "<<endl;
        return 0;
    }
    double** dArray = new double*[rows];
    for(int i = 0; i < rows; i++){
        dArray[i] = new double[columnns];
    }
    cout<<"Ente "<<rows * columnns<<" values"<<endl;
    for(int  i = 0; i < rows; i++){
        for(int j = 0; j < columnns; j++){
            cout<<"Enter element ["<< i <<"][" << j <<"]";
            cin>>dArray[i][j];
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columnns; j++ ){
            cout<<dArray[i][j]<<endl;
        
    }
    for(int i = 0; i < rows; i++){
        delete[] dArray[i];
    }
    delete[] dArray;

 } return 0;
}