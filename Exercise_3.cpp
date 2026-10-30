#include <iostream>
#include <string>
using namespace std;

int main() {
    string elem[8] = {"B123","C234","A345","C15","B177","G3003","G235","B179"};
    for(int i = 0; i < 8; i++){
        if(elem[i][0] == 'B'){
        cout<<elem[i]<<endl;
        }
    }
    return 0;

}