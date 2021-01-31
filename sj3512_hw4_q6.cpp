#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
    int n, num;
    int counter, remainder;
    bool flag;
    cout<<"Please enter a positive integer: ";
    cin>>num;

    for(counter = 1; counter < num; counter++) {
        n = counter;
        flag = false;
        while(n != 0){
            remainder = n % 10;
            //if odd exit loop
            if((remainder % 2) == 1){
                flag = true;
            }
            n /= 10;
            }
        //if even print
        if(flag == false){
            cout<<counter<<endl;
        }
    }


    return 0;
}
