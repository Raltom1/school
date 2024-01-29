#include <iostream>
using namespace std;

int main(){
	
	int m;
	char g;
	cout<<"please enter the mark of the student: ";cin>>m;
	if(m >= 0 && m <= 34)
		g = 'f';
	else if (m >= 35 && m <= 54)
		g = 'd';
	else if (m >= 55 && m <= 64)
		g = 'c';
	else if(m >= 65 && m <= 74)
		g = 'b';
	else if (m >= 75 && m <= 100)
		g = 'a';
	
	
	
	return 0;
}
