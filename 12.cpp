#include <iostream>
using namespace std;

int main(){
	
	int age;
	cout<<"please enter your age: ";cin>>age;
	if(age > 17)
		cout<<"you are eligible to vote. your age is "<<age<<" years old.\n";
	else
		cout<<"sorry! you are mot eligible to vote! ";
	
	return 0;
}
