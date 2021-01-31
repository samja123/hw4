#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
    int n;
    int lineCount, starCount, spaceCount;
    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;
    //top
    for(lineCount = n; lineCount >= 1; lineCount--) {
        //print a sequence of spaces
        for(spaceCount = 1; spaceCount <= (n - lineCount); spaceCount++) {
            cout<<" ";
        }
        //print a sequence of stars
        for (starCount = 1; starCount <= ((2 * lineCount) - 1); starCount++) {
            cout<<"*";
        }
        cout<<endl;
    }
    // bottom
    for(lineCount = 1; lineCount <= n; lineCount++) {
        //print a sequence of spaces
        for(spaceCount = 1; spaceCount <= (n - lineCount); spaceCount++) {
            cout<<" ";
        }
        //print a sequence of stars
        for(starCount = 1; starCount <= ((2 * lineCount) - 1); starCount++) {
            cout << "*";
        }
        cout<<endl;

    }
    return 0;
}
