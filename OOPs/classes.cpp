#include <iostream>
using namespace std;

class laptop{
    public:
    string name;
    int price;
    int model;
    string proc;
};

int main()
{
    laptop l1;
    l1.name = "Asus tuf f15";
    l1.price = 50000;
    l1.model = 2022;
    l1.proc = "i5 12500h";
    
    laptop l2;
    l2.name = "lenovo loq";
    l2.price = 58000;
    l2.model = 2024;
    l2.proc = "i5 12450hx";
    
    laptop* p1 = &l1;
    p1->price = 67000;

    cout<< p1->name<< " "<<l1.price<< " "<<l1.model<< " "<<l1.proc<<endl;

    //cout<< l2.name<< " "<<l2.price<< " "<<l2.model<< " "<<l2.proc;

    return 0;
}