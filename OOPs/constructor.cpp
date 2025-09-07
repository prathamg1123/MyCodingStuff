#include <iostream>
using namespace std;

class laptop{
    public:
    string name;
    int price;
    int model;
    string proc;
    
    //Default constructor 
    laptop(){
        cout<<"This is default  constructor\n";
        
    };
    //Parameterized Constructors 
    
    laptop(string name,int price,int model,string proc){
        this-> name= name;
        this-> price= price;
        this-> model= model;
        this-> proc = proc;
    };
    
    //Print function 
    void print(){


        
        cout<<name<<" "<<this->price<< " "<<this->model<< " "<<this->proc<<endl;
        
    }
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
    
    laptop l3("Asus vivobook 16x",60000,2023,"i5 12500h");
    laptop l4(l3);

    cout<< l1.name<< " "<<l1.price<< " "<<l1.model<< " "<<l1.proc<<endl;
    cout<< l2.name<< " "<<l2.price<< " "<<l2.model<< " "<<l2.proc<<endl;
    //cout<< l3.name<< " "<<l3.price<< " "<<l3.model<< " "<<l3.proc<<endl;
    l3.print();
    l4.print();
    return 0;
}