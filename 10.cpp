#include <iostream>
using namespace std;

int main(){
	float p,d,drate,t;
	cout<<"Buying price: ";cin>>p;
	cout<<"Discount rate in percent: ";cin>>d;
	drate = d / 100;
	t = p -(p*drate);
	cout<<"For buying price Php "<<p<<" and discount rate "<<drate<<"\n";
	cout<<"the total price is Php "<<t;

return 0;
}
