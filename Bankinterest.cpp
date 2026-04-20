#include<iostream>
using namespace std;
int calculatebalance(float balance, int years);
{
    if(balance<=10,000)
    {
        cout<<"You have 5% interest"<<endl;
    }
    else if(balance>10,000 && balance<=50,000)
    {
        cout<<"You have 7% interest"<<endl;
    }
    else if(balance>50,000)
    {
        cout<<"You have 10% interest"<<endl;
    }
    if(years>=3)
    {
        cout<<"You have extra 2% interest"<<endl;
    }
}
int main()
{
    float balance;
    int years;
    cout<<"Enter your balance:";
    cin>>balance;
    cout<<"Enter your holding years:";
    cin>>years;
}
      calculatebalance(float balance, int years);
     {
        cout<<"Your interest is"<<balance"and"<<"extra interest is"<<years<<endl;
     }