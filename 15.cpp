#include <iostream>
using namespace std;

int main(){
	int m,d;
	cout<<"enter the month of your birthday: ";cin>>m;
	cout<<"enter the day of your birthday: ";cin>>d;
	if (m >= 1 && m <= 12 && d >= 1 && d <= 31){
		if (m == 1 && d >= 20 && d <= 31 ||m == 2 && d >= 1 && d <18)
			cout<<"your zodiac sign is aquarius.\n\n";
		else if (m == 2 && d >= 19 && d <= 28 || m == 3 && d >= 1 && d <= 20)
			cout<<"your zodiac sign is Pisces.\n\n";
		else if (m == 3 && d >= 21 && d <= 31 || m == 4 && d >= 1 && d <= 19)
			cout<<"your zodiac sign is aries.\n\n";
		else if (m == 4 && d >= 20 && d <= 30 || m == 5 && d >= 1 && d <= 20)
			cout<<"your zodiac sign is taurus.\n\n";
		else if (m == 5 && d >= 21 && d <= 31 || m == 6 && d >= 1 && d <= 20)
			cout<<"your zodiac sign is gemini.\n\n";
		else if (m == 6 && d >= 21 && d <= 30 || m == 7 && d >= 1 && d <= 22)
			cout<<"your zodiac sign is cancer.\n\n";
		else if (m == 7 && d >= 23 && d <= 31 || m == 8 && d >= 1 && d <= 22)
			cout<<"your zodiac sign is leo.\n\n";
		else if (m == 8 && d >= 23 && d <= 31 || m == 9 && d >= 1 && d <= 23)
			cout<<"your zodiac sign is virgo.\n\n";
		else if (m == 9 && d >= 24 && d <= 30 || m == 10 && d >= 1 && d <= 22)
			cout<<"your zodiac sign is libra.\n\n";
		else if (m == 10 && d >= 23 && d <= 31 || m == 11 && d >= 1 && d <= 21)
			cout<<"your zodiac sign is scorpio.\n\n";
		else if (m == 11 && d >= 22 && d <= 30 || m == 12 && d >= 1 && d <= 21)
			cout<<"your zodiac sign is sagittarius.\n\n";
		else if (m == 12 && d >= 22 && d <= 31 || m == 1 && d >= 1 && d <= 19)
			cout<<"Your zodiac sign is capricon.\n\n";
		
	
	}else{
		cout<<"error the input us invalid.\n\n";
	}
	
	return 0;
}
