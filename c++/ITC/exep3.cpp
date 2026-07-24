//Name:- Pratham Bairagi
//Enrollment:- 24100BTCSE17813
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
double calcEntropy (string str) {
	int freqs[256] = {0};
	int i;
	double entropy = 0.00;
	double size=str.size();

	for(i=0; i<str.size(); i++) freqs[str[i]]++;
		for(i=0; i<256; i++) {
			if (freqs[i]!=0){
				entropy+=(freqs[i]/size)*log2(freqs[i]/size);
			}
		}
			entropy = entropy;

			cout<<"String = "<<str<<"\n";

			cout<<"Entropy="<<entropy<<"\n";
		cout<<"\n";

		return entropy;
	}

int main() {

	string inputs[] = {"1223334444"};

	for(int i=0; i<sizeof(inputs)/sizeof(string); i++) {
		calcEntropy (inputs[i]);
	}
	return 0;
}
