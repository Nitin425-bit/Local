#include <iostream>
using namespace std;
// This is only for learning purpose

int add_sum(int a, int b) {
    return a + b;
}

int main()
{
    int a, b;
    cout << "Enter a value: ";
    cin>>a;
    cout << "Enter a another value: ";
    cin>>b;
    cout << add_sum(a, b) << endl;
    
   return 0;
}