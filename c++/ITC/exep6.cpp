#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float py , pyx, Hy , Hyx, C;
    py = 0.22;
    pyx = 0.15;
    Hy = py*log(1/py)/ log(2)+ (1-py)*(log(1/(1-py)))/log(2);
    Hyx = pyx*(log(1/pyx))/log(2)+(1-pyx)*(log(1/(1-pyx)))/ log(2);
    C = Hy -Hyx;
    cout <<"Probability of PY=" << py << " Prabability of Pyx=" <<pyx <<" Capacity=" << C << endl;
    system("pause");
     
    return 0;
}