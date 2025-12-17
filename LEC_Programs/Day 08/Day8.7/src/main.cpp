//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;


class TaxCalculator{
	double rate;	// tax calculate
public:
	TaxCalculator(double rate) : rate(rate){}

	double operator()(double amount){
		return amount + (amount * rate);
	}

};


int main() {

	TaxCalculator tc(0.18); // gst //object creation

//	tc(); 	not valid //error: no match for call to '(TaxCalculator) ()'

	double tax = tc(80000);

	cout << "Education GST TAX : " << tax << endl;

	return 0;
}
