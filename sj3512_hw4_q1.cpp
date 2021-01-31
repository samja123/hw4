#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
    int user_input;
    int counter, val;
    cout<<"Please enter a positive integer:";
    cin>>user_input;

    //while loop
    cout<<"section a"<<endl;
    val = 0;
    counter = 0;
    while(counter < user_input){
        counter++;
        val += 2;
        cout<<val<<endl;
    }

    //for loop
    cout<<endl;
    cout<<"section b"<<endl;
    for(counter = 0, val = 0; counter < user_input; counter++){
        val += 2;
        cout<<val<<endl;
    }
    return 0;
}
