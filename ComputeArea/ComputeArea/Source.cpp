#include <iostream>
using namespace std;

int main()
{
	double width, length; // Declare length and width variables

	cout << "This program calculates the area of a room in square feet.\n";
	cout << "Enter the length of the room: ";
	cin >> length;

	cout << "Enter the width of the room: ";
	cin >> width;

	cout << "The total area of the room is " << length*width << " square feet." << endl;

	system("pause");
	return 0;
}