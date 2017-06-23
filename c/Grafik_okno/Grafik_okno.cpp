#include <iostream>
using namespace std;

void main()
{
	const unsigned char DoubleTopLeft = 201;
	const unsigned char DoubleTopRight = 187;
	const unsigned char DoubleBottomLeft = 200;
	const unsigned char DoubleBottomRight = 188;
	const unsigned char DoubleHorz = 205;
	const unsigned char DobOneMidiLeft = 199;
	const unsigned char DobOneMidiRight = 182;
	const unsigned char MidiCenter = 194;
	const unsigned char MidiLine = 196;
	const unsigned char DobOneCenterLow = 207;
	const unsigned char DoubleVert = 186;
	const unsigned char MidiVert = 179;

	int h, w, w2, w3, w4;

	cout << DoubleTopLeft;
	for (w = 1; w < 12; w++)
		cout << DoubleHorz;
	cout << DoubleTopRight << endl;

	cout << DoubleVert;
	for (w2 = 1; w2 < 12; w2++)
		cout << " " ;
	cout << DoubleVert << endl;
	
	cout << DobOneMidiLeft;
	for (w3 = 1; w3 < 6; w3++)
		cout << MidiLine;
	cout << MidiCenter;
	for (w3 = 7; w3 < 12; w3++)
		cout << MidiLine;
	cout << DobOneMidiRight << endl;

	for (int i = 0; i < 2; i++)
	{
		cout << DoubleVert;
		for (w3 = 1; w3 < 6; w3++)
			cout << " ";
		cout << MidiVert;
		for (w3 = 7; w3 < 12; w3++)
			cout << " ";
		cout << DoubleVert << endl;
	}
	cout << DoubleBottomLeft;
	for (w4 = 1; w4 < 6; w4++)
		cout << DoubleHorz;
	cout << DobOneCenterLow;
	for (w3 = 7; w3 < 12; w3++)
		cout << DoubleHorz;
	cout << DoubleBottomRight << endl;

	cout << endl;
}
