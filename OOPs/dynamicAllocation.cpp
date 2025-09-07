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
        cout<<this->name<< " "<<this->price<< " "<<this->model<< " "<<this->proc<<endl;
        
    }
};

int main()
{
    laptop l1("Asus tuf f15",50000,2022,"i5 12500h");
    laptop* p1 = new laptop("Asus vivobook 16x",60000,2023,"i5 12500h"); // Dynamic allocation:)
    l1.print();
    p1->print();
    
/*     int a = 10;// normal allocation;
     int* b = new int(20);//Dynamic allocation
     cout << a << " " << (*b)<<endl;
*/   
    return 0;
}