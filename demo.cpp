#include <iostream>
using namespace std;
// This is only for learning purpose

int Add (int a, int b) {
    return a + b;
}

int Divid (int a, int b) {
    return a % b;
}

int main()
{
    int a, b;
    cout << "Enter a value: ";
    cin>>a;
    cout << "Enter a another value: ";
    cin>>b;
    cout << Add (a, b) << endl;
    cout << Divid(a, b) << endl;
    // Adding paragraph
    cout <<"Hello, I am soldier boy \n";

   return 0;
}