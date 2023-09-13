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

int Input()
{
	pipe pipe;
	cout << "¬ведите, пожалуйста, длину трубы" << endl;
	cin >> pipe.len;
	cout << "¬ведите, пожалуйста, диамметр трубы" << endl;
	cin >> pipe.diam;
	cout << "¬ведите, пожалуйста, километровую отметку" << endl;
	cin >> pipe.km_mark;
	cout << "¬ведите, пожалуйста, признак работы" << endl;
	cin >> pipe.repair;

	station station;
	cout << "¬ведите, пожалуйста, название" << endl;
	cin >> station.title;
	cout << "¬ведите, пожалуйста, кол-во цехов" << endl;
	cin >> station.workshop;
	cout << "¬ведите, пожалуйста, кол-во работающих цехов" << endl;
	cin >> station.active_workshop;
	cout << "¬ведите, пожалуйста, эффективность" << endl;
	cin >> station.efficiency;
}

int Output()
{

}