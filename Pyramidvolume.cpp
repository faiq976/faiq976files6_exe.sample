#include <iostream>
using namespace std;
float volumePyramid(float length, float width, float height);
{
    Volume = length * width * height
}
int main()
{
    volumePyramid(float length, float width, float height);
    float length, width, height, volume;
    cout << "Enter the length in m:" << endl;
    cin >> length;
    cout << "Enter the width in m:" << endl;
    cin >> width;
    cout << "Enter the height in m:" << endl;
    cin >> height;
    cout << "Choose unit:" << endl;
    cout << "1.mm^3";
    cout << "2.cm^3";
    cout << "3.m^3";
    cout << "4.km^3";
    if (choice == 1)
    {
        cout << "Volume" << volume << "mm^3" << endl;
    }
    else if (choice == 2)
    {
        cout << "Volume" << volume << "cm^3" << endl;
    }
    else if (choice == 3)
    {
        cout << "Volume" << volume << "m^3" << endl;
    }
    else if (choice == 4)
    {
        cout << "Volume" << volume << "km^3" << endl;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
}