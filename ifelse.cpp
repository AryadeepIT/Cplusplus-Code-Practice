#include<iostream>
using namespace std;
int main(){

    int savings;
    cin>>savings;

    // if(savings>5000){
    //     cout<<"Sanchita\n";
    // } else{
    //     cout<<"Munu\n";
    // }

    if(savings>5000){
        cout<<"Sanchita\n";
    
    } else if(savings>2000){
        cout<<"Munu\n";

    } else{
        cout<<"friends";
    }
    return 0;
}