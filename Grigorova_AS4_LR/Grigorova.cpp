#include <iostream>

using namespace std;

struct pipe
{
	double len; //km
	double diam; //mm
	string km_mark;
	bool repair;
};

struct station
{
	string title;
	int workshop;
	int active_workshop;
	double efficiency; // о чем вообще речь?? 
};

void InputPipe()
{
	pipe pipe;
	cout << "Please, enter pipe length(km)" << endl;
	cin >> pipe.len;
	cout << "Please, enter pipe diameter(mm)" << endl;
	cin >> pipe.diam;
	cout << "Please, enter kilometer mark" << endl;
	cin >> pipe.km_mark;
	cout << "Please, enter pipe condition" << endl;
	cin >> pipe.repair;
}

void InputStation()
{
	station station;
	cout << "Please, enter station name" << endl;
	cin >> station.title;
	cout << "Please, enter number of workshops" << endl;
	cin >> station.workshop;
	cout << "Please, enter number of active workshops" << endl;
	cin >> station.active_workshop;
	cout << "Please, enter effectiveness" << endl;
	cin >> station.efficiency;
}

void OutputPipe()
{
	pipe pipe;
	cout << "Pipe length: " << pipe.len << endl;
	cout << "Pipe diameter: " << pipe.diam << endl;
	cout << "Kilometer mark: " << pipe.km_mark << endl;
	cout << "Pipe condition: " << pipe.repair << endl;
}

void OutputStation()
{
	station station;
	cout << "Station name: " << station.title << endl;
	cout << "Number of workshops: " << station.workshop << endl;
	cout << "Number of active workshops: " << station.active_workshop << endl;
	cout << "Effectiveness: " << station.efficiency << endl;
}

int main()
{
	InputPipe();
	InputStation();
	OutputPipe();
	OutputStation();
	return 0;
}