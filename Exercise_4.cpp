#include <iostream>
using namespace std;

int main() {

    int Num;
    while(true){
    cout<<"Enter an integer value between 5 and 10"<<endl;
    
            if(!(cin>>Num)) {
            cout<<"Sorry, you entered an invalid number, please try again"<<endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
            }
            else if(Num < 5 || Num > 10) { 
            cout<<"You entered "<< Num<<". please enter a number between 5 and 10"<<endl;
            }      
            else{
            cout<<"Your input value "<<Num<<" has  been been accepted."<<endl;
            break;
            }
        }
            return 0;
    }

