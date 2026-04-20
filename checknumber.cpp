#include <iostream>
#include <cmath>
using namespace std;
int checknumbercase(int num);
{
    int sum=0;
    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
}
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    if (sum % 2 == 0)
    {
        cout << "The number is evenish" << num << endl;
    }
    else if (sum % 2 != 0)
    {
        cout << "The number is oddish" << num << endl;
    }
}