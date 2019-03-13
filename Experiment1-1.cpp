#include <iostream>
#include <conio.h>
#include <string> 
#include <iomanip> 

using namespace std; 

int main () 
{ 
	string TicketPrice;
	string NumberofTicketsSold;
	double b;
	double s;
	double p;
	double g;


	cout << "TicketPrice" << " " << "Number of Tickets Sold" << endl; 
	cout << "Box ($250): " << " "; 
	cin >> b;
	cout << "Total Sales (Box): " << b*250 << endl;
	cout << "\nSideline ($100): " << " "; 
	cin >> s;
	cout << "Total Sales (Sideline): " << s*100 << endl;
	cout << "\nPremium ($50): " << " ";
	cin >> p;
	cout << "Total Sales (Premium): " << p*50 << endl;
	cout << "\nGeneral Admission ($25): " << " " ;
	cin >> g;
	cout << "Total Sales (GenAd): " << g*25 << endl;
	cout << "\nTotal Ticket Sold: " << b+s+p+g << endl;
	cout << "\nTotal Sales: " << (b*250) + (s*100) + (p*50) + (g*25) << endl;

	_getch();
	return 0;
}
	

	
