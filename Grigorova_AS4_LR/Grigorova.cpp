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
	double efficiency; // � ��� ������ ����?? 
};

int Input()
{
	pipe pipe;
	cout << "�������, ����������, ����� �����" << endl;
	cin >> pipe.len;
	cout << "�������, ����������, �������� �����" << endl;
	cin >> pipe.diam;
	cout << "�������, ����������, ������������ �������" << endl;
	cin >> pipe.km_mark;
	cout << "�������, ����������, ������� ������" << endl;
	cin >> pipe.repair;

	station station;
	cout << "�������, ����������, ��������" << endl;
	cin >> station.title;
	cout << "�������, ����������, ���-�� �����" << endl;
	cin >> station.workshop;
	cout << "�������, ����������, ���-�� ���������� �����" << endl;
	cin >> station.active_workshop;
	cout << "�������, ����������, �������������" << endl;
	cin >> station.efficiency;
}

int Output()
{

}