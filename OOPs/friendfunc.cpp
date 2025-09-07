#include<iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass(int val) : data(val) {}

    // Friend function declaration
    friend void display(MyClass obj);
};

// Friend function definition
void display(MyClass obj) {
    cout << "Value: " << obj.data << endl;
}

int main() {
    MyClass obj(42);
    display(obj); // Accessing private member through friend function
    return 0;
}
