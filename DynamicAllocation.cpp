#include <iostream>
#include <string>
using namespace std;

int main() {
    int* age = new int;
    cout<<"Enter your age"<<endl;
    cin >> *age;

    string* name = new string;
    cout<<"Enter your name"<<endl;
    cin>>*name;

    cout<<"You are "<<*name<<" and your age is "<< *age<<endl;
    delete age;
    delete name;
    return 0;

}