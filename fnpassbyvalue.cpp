#include<bits/stdc++.h>
using namespace std;

// Function that modifies a local copy of 'num'
void dosomething(int num){
    cout << num << endl;   // Print original value
    num += 5;              // Add 5
    cout << num << endl;   // Print updated value
    num += 5;              // Add 5 again
    cout << num << endl;   // Print final updated value
}

int main(){
    int num = 10;           // Initialize num with 10
    dosomething(num);       // Call function with num (passed by value)
    cout << num << endl;    // Print original num (unchanged in main)

    return 0;
}
