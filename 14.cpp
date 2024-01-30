#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of month: ";cin>>n;
	if(n >= 1 && n <= 12){
		if(n == 1)
			cout<<"1 is January - The month of new beginnings.\n\n";
		else if (n == 2)
			cout<<"2 is february - The month of love.\n\n";
		else if (n == 3)
			cout<<"3 is March - The month of Graduation.\n\n";
		else if (n == 4)
			cout<<"4 is April - The month of Summer.\n\n";
		else if (n == 5)
			cout<<"5 is May - The month of Relaxation.\n\n";
		else if (n == 6)
			cout<<"6 is June - The month of classes.\n\n";
		else if (n == 7)
			cout<<"7 is july - The month of meeting.\n\n";
		else if (n == 8)
			cout<<"8 is August - The month of Hardwoking.\n\n";
		else if (n == 9)
			cout<<"9 is September - The month of exams.\n\n";
		else if (n == 10)
			cout<<"10 is October - The month of celevration.\n\n";
		else if (n == 11)
			cout<<"11 is November - The month of celebration.\n\n";
		else if (n == 12)
			cout<<"12 is December - The month of giving.\n\n";
	}else
		cout<<"Error the input is invalid.\n\n";
	
	
	return 0;
}
