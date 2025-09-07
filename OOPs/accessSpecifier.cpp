#include<iostream>
using namespace std;
class student{
public:
    string name;
    int roll;
        

    // default constructor;
    student(){
        
    };
    //Setter
    student(float cgpa){
        this->cgpa = cgpa;
    };
    
    student(float cgpa,string name){
        this->cgpa = cgpa;
        this->name = name;
    };
    //getter
    void print(){
        cout<<cgpa<<" "<< name;
    };
private:

    float cgpa;

};

int main(){
    student s1;
    s1.name = "Atul Sahu";
    student s2(92.8,"pratham bairagi");
    //cout<< s1.name;
    s2.print();
    
}