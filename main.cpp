// Vinyl calc

#include<iostream>
#include<algorithm>
#include<windows.h>

using namespace std;

void sq_cm_calc();
void sticker_cost_calc();
void transfer();
void exit();
	
float cost_sq_cm;
float sticker_cost;
float transfer_cost;

int main(){
	
	char again;
	
	cout << "\tVinyl Calculator\n\n";
	cout << "Vinyl sq cm calc\n";
	sq_cm_calc();
	cout << "Transfer tape cost calc\n\n";
	transfer();
	
	while (again != 'n'){

		cout << "\nSticker cost calc\n";
		sticker_cost_calc();
		cout << "\nWanna do another? y/n: ";
		cin >> again;
		again = tolower(again);
		while(again != 'n' && again != 'y'){
			cout << "\nWanna do another? y/n: ";
			cin >> again;
			again = tolower(again);
		}
	}
		
	exit();
	return 0;
}
	
void sq_cm_calc(){
	float width;
	float length;
	float cost;
	
	cout << "\nWhats the width in mm? ";
	cin >> width;
	cout << "Whats the length in m? ";
	cin >> length;
	float sq_cm = (width / 10) * (length * 100); 
	cout << "Cost $";
	cin >> cost;
	cost_sq_cm = cost / sq_cm;
	cout << "\nCost per sq cm $" << cost_sq_cm << "\n\n";
}
void transfer(){
	float width;
	float length;
	float sq_cm;
	float cost;
	
	cout << "Whats the width in mm? ";
	cin >> width;
	cout << "Whats the length in m? ";
	cin >> length;
	cout << "Cost $";
	cin >> cost;
	sq_cm = (width / 10) * (length * 100);
	transfer_cost = cost / sq_cm;
	cout << "Cost per sq cm of transfer tape $" << transfer_cost << "\n";
}
void sticker_cost_calc(){
	float width;
	float height;
	
	cout << "\nWhats the width of the sticker in mm? ";
	cin >> width;
	width = width / 10;
	cout << "Whats the height of the sticker in mm? ";
	cin >> height;
	height = height / 10;
	float sticker = height * width;
	sticker_cost = cost_sq_cm * sticker;
	cout << "\nThe vinyl cost of your sticker $" << sticker_cost << endl;
	float total_cost = (transfer_cost * sticker) + sticker_cost;
	cout << "The total cost with transfer sheet is $" << total_cost << "\n\n";
}
void exit(){
	
	cout << "\n\nExiting.....3.....";
	Sleep(1000);
	cout << "2.....";
	Sleep(1000);
	cout << "1.";
	Sleep(1000);
}
