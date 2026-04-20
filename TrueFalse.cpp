#include <iostream>
using namespace std;
int x = 20;
void myFunction(int x);
{
    cout << "The value of x:" << x << endl;
    int x = 30;
}
int main()
{
    myFunction(int x);
    int x = 30;
    cout << "The value of x:" << x << endl;
    myFunction(int x);
    return 0;
}