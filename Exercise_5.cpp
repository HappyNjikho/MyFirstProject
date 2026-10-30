#include <iostream>
#include <string>
using namespace std;

    int Square(int length){
    return length * length;
    
    }

    int rectangle(int length,int width){
    return length * width;
    } 

    double triangle(int base,int height){
    return (base * height)/ 2.0;
    }

    int main() {
    while(true){
        int input;
        cout<<"Please select the area of the shape to calculate"<<endl;
        cout<<"1. Square"<<endl;
        cout<<"2. Restangle"<<endl;
        cout<<"3. Triangle"<<endl;
        cout<<"4. Quit program"<<endl;
        cin>>input;

        if(input == 1){
            int x;
            cout<<"Enter input"<<endl;
            cin>>x;
            cout<<"The area of a square of side "<<x<<"cm is "<<Square(x)<<"cm"<<endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
        else if(input == 2){
            int l, w;
            cout<<"Enter length"<<endl;
            cin>>l;
            cout<<"Enter width"<<endl;
            cin>>w;
            cout<<"The area of a rectangle of length "<<l<<"cm and width "<<w<<"cm is "<<rectangle(l,w)<<"cm"<<endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
        else if(input == 3){
            int b, h;
            cout<<"Enter base of the triangle"<<endl;
            cin>>b;
            cout<<"Enter height of the triangle"<<endl;
            cin>>h;
            cout<<"The area of the triangle of base "<<b<<"cm and height "<<h<<"cm is "<<triangle(b,h)<<"cm"<<endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
        else if(input == 4){
            break;
            }
        else{
            if(cin.fail()){
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout<<"Your input was: "<<input<<" which is an invalid input"<<endl;
            cout<<"Please enter a valid input!!!"<<endl;
        }
        cout<<endl;;
    }
    return 0;
    }
