#include <iostream>
using namespace std;

int main(){
	
int mA,mB,mC, tSum;
float aM;
cout<<"Please enter the mark of the first stundent: ";cin>>mA;
cout<<"please enter the mark of the 2nd student: ";cin>>mB;
cout<<"please enter the mark if the last student: ";cin>>mC;
tSum = mA+mB+mC;
aM = (float)tSum / 3;
cout<<"The average mark of the three students is "<<aM;

return 0;
}
