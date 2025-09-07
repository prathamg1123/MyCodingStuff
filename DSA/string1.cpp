#include<iostream>
using namespace std;
string rev(string &ch){
    int st = 0,end =ch.size() -1;

    while(st<=end){
        swap(ch[st++],ch[end--]);
    }
    return ch;
}

int main()
{
    string str = "madam";
    string compare = str;
    if (compare == rev(str)){
        cout << "Yes!, String is Palindrome";
    } 
    else{
        cout<< "Noooo";
    }


    
    return 0;
}