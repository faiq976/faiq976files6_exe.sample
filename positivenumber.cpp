#include <iostream>
using namespace std;
void add(int num1, int num2);
int main()
{
    int num1;
    cout << "Enter the first number:";
    cin >> num1;
    int num2;
    cout << "Enter the second number:";
    cin >> num2;
    add(num1, num2);
    return 0;
}
    void add(int num1, int num2)
  {
        cout << "Sum" << num1 + num2 << endl;
    }

