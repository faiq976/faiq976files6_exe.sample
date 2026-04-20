#include <iostream>
using namespace std;
int factorial(int num);
{
    int factorial = 1;
    for (int i = 1; i <= num, i++)
    {
        factorial = factorial * i;
    }
    return 0;
}
int main()
{
    int num, temp, digit, sum = 0;
    cout << "Enter a number:";
    cin >> num;
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        sum=sum+factorial(digit);
        temp=temp/10;
    }
    if(sum==num)
    {
        cout<<"Number is strong"<<endl;
    }
    else{
        cout<<"Number is not strong"<<endl;
    }
}