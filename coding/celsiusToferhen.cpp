#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<< "Enter F to convert from fahrenheit to celsius and C to convert from celsius to fahrenheit: ";
    cin >> ch;

    float temp;
    cout<< "Enter temp: ";
    cin>>temp;

    if (ch == 'F'){
        cout<<temp<< " fahrenheit = " <<(float)(temp - 32) * 0.55;
    }
    if (ch == 'C'){
        cout << temp << " celsius = " <<(float)1.8*temp + 32;
    }
    //(9/5*temp + 32)
    return 0;
}