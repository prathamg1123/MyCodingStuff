#include <iostream>
using namespace std;
class Fraction{
public:    
    int nem;
    int den;
    
    Fraction(){
        
    };
    Fraction(int nem,int den){
        this->nem= nem;
        this->den = den;
    };
    
    void print(){
        cout<<nem<<" / "<<den<<endl;
    };           

    Fraction operator+(Fraction f){
        int newNem = nem*f.den + f.nem*den;
        int newDen = den*f.den;
        Fraction ans = Fraction(newNem,newDen);
        return ans;
    }
};
    
    
int main()
{
    Fraction f1(2,3);
    Fraction f2(3,2);
    Fraction f3 = f1+f2;
    f3.print();

    return 0;
}