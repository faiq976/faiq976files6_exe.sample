#include <iostream>
using namespace std;
void vehiclecalculator(char type, float price);
int main()
{
    string taxrate;
    string arr["MOTORCYCLE", "ELECTRIC", "SEDAN", "VAN", "TRUCK"];
    int taxamount, taxrate;
    int arr["6%", "8%", "10%", "12%", "15%"];
    char type;
    float purprice, tax, finalprice;
    cout << "Enter the type of vehicle:";
    cin >> type;
    cout << "Enter the price of vehicle:";
    cin >> purprice;
    taxamount = purprice * (taxrate / 100);
    finalprice = purprice + taxamount;
    cout << "Tax amount of vehicle" << type << "and" << "final price" << finalprice << endl;
    return 0;
}