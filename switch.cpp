#include<iostream>
using namespace std;
 
int main(){
    char button;
    cout<<"Input character : ";
    cin>>button;
    // if(button=='a'){
    //     cout<<"Hello"<<endl;
    // }
    // else if(button=='b'){
    //     cout<<"Namaste"<<endl;
    // }
    // else if(button=='c'){
    //     cout<<"Salut"<<endl;
    // }
    // else if(button=='d'){
    //     cout<<"ciao"<<endl;
    // }
    // else{
    //     cout<<"i am learning more"<<endl;
    // }

    switch(button)
    {
        case 'a':
        cout<<"hello"<<endl;
        break;

        case 'b':
        cout<<"hi"<<endl;
        break;

        case 'c':
        cout<<"he"<<endl;
        break;

        case 'd':
        cout<<"no"<<endl;
        break;

        default:
        cout<<"i am still learning more"<<endl;
        break;
    }

   

 
    return 0;
}