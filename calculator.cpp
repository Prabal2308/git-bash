#include<iostream>
using namespace std;

int main() {
    //code for printing hello in five different languages
    char button;
    cin>>button;

    switch(button)
    {
        case 'a':
        cout<<"Hello"<<endl;
        break;

        case 'b':
        cout<<"Namaste"<<endl;
        break;

        case 'c':
        cout<<"Oye Oye"<<endl;
        break;

        case 'd':
        cout<<"Salut"<<endl;
        break;

        case 'e':
        cout<<"Vanakkam"<<endl;
        break;

        default:
        cout<<"I am still learning more"<<endl;
        break;
    }
    return 0;
}