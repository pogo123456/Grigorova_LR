#include <iostream>
#include <vector>

using namespace std;

//Сведения о ТРУБЕ
struct pipe
{
	double len; //km
	double diam; //mm
	string km_mark;
	bool inrepair;

	void InputPipe()
	{
		cout << "Please, enter pipe length(km)" << endl;
		cin >> len;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Try again";
			cin >> len;
		}
		cout << "Please, enter pipe diameter(mm)" << endl;
		cin >> diam;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Try again";
			cin >> diam;
		}
		cout << "Please, enter kilometer mark" << endl;
		cin >> km_mark;
		cout << "Please, enter pipe inrepair? (1-yes, 0-no)" << endl;
		cin >> inrepair;
	}

	void OutputPipe()
	{
		cout << "Pipe length: " << len << endl;
		cout << "Pipe diameter: " << diam << endl;
		cout << "Kilometer mark: " << km_mark << endl;
		cout << "Pipe condition: " << inrepair << endl;
	}
	
	void RepairStatus()
	{
		inrepair = !inrepair;
	}
};

//Сведения о КС
struct station
{
	string title;
	int workshop;
	int active_workshop;
	double efficiency; // о чем вообще речь?? 

	void InputStation()
	{
		cout << "Please, enter station name" << endl;
		cin >> title;
		cout << "Please, enter number of workshops" << endl;
		cin >> workshop;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Try again";
			cin >> workshop;
		}
		cout << "Please, enter number of active workshops" << endl;
		cin >> active_workshop;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Try again";
			cin >> active_workshop;
		}
		cout << "Please, enter effectiveness" << endl;
		cin >> efficiency;
	}

	void OutputStation()
	{
		cout << "Station name: " << title << endl;
		cout << "Number of workshops: " << workshop << endl;
		cout << "Number of active workshops: " << active_workshop << endl;
		cout << "Effectiveness: " << efficiency << endl;
	}

	void StartWorkshop()
	{
		if (active_workshop < workshop)
		{
			active_workshop++;
		}
		else
		{
			cout << "Everyone is working" << endl;
		}
	}

	void StopWorkshop()
	{
		if (active_workshop > 0)
		{
			active_workshop--;
		}
		else
		{
			cout << "No one is working" << endl;
		}
	}
};

int main()
{
	vector <pipe> pipes;
	vector <station> stations;
	
	while (true)
	{
		cout << "Menu: " << endl;
		cout << "1. Add pipe" << endl;
		cout << "2. Add station" << endl;
		cout << "3. All object" << endl;
		cout << "4. Edit pipe" << endl;
		cout << "5. Edit station" << endl;
		cout << "6. Save" << endl;
		cout << "7. Download" << endl;
		cout << "8. Exit" << endl;

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			pipe pipe;
			pipe.InputPipe();
			pipes.push_back(pipe);
			//break;
			cin >> choice;
		}
		case 2:
		{
			station station;
			station.InputStation();
			stations.push_back(station);
			//break;
			cin >> choice;
		}
		//case 3:
		//{
		//	cout << "List of pipes: " << endl;
		//	for (const pipe& pipe : pipes)
		//	{
		//		pipe.OutputPipe();
		//		cout << endl;
		//	}
		//	for (const station & station : stations)
		//	{
		//		station.OutputStation();
		//		cout << endl;
		//	}
		//	//break;
		//	cin >> choice;
		//}
		case 4:
		{
			//break;
			cin >> choice;
		}
		case 5:
		{
			//break;
			cin >> choice;
		}
		case 6:
		{
			//break;
			cin >> choice;
		}
		case 7:
		{
			//break;
			cin >> choice;
		}
		case 0:
			return 0;
			break;
		default:
			cout << "Error!!! Try again." << endl;
			//break;
			cin >> choice;
		}
	}
	
	return 0;
}