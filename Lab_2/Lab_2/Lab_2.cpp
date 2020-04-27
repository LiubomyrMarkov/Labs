#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;

void write(string Disk__Name, int Disk__Size, int Disk__Percent, int size)
{
	ofstream file("laba.txt", ios_base::app);
	file << endl << Disk__Name << " " << Disk__Size << " " << Disk__Percent << " " << size;
	file.close();
}

void read()
{
	string Buf;
	ifstream file("laba.txt");
	cout << setw(10) << "Disk name:" << setw(15) << "Disk size" << setw(20) << "Disk percent" << setw(20) << "Disk occupation" << endl;
	while (!file.eof())
	{
		file >> Buf;
		cout << setw(10) << Buf;
		file >> Buf;
		cout << setw(15) << Buf;
		file >> Buf;
		cout << setw(20) << Buf;
		file >> Buf;
		cout << setw(20) << Buf << endl;
	}
	cout << endl;
	file.close();
}

int main()
{
	string Disk__Name;
	int Disk__Size, choose, size;
	double  Disk__Percent;
	do
	{
		cout << "Add information(0)\nRead information(1)\nExit(3)\n";
		cin >> choose;
		switch (choose)
		{
		case 0:
			system("cls");
			cout << "Enter disk name: ";
			cin >> Disk__Name;
			cout << "Enter disk size MB: ";
			cin >> Disk__Size;
			cout << "Enter disk percent occupation: ";
			cin >> Disk__Percent;
			size = Disk__Size * 8192 * ((100 - Disk__Percent) / 100);
			write(Disk__Name, Disk__Size, Disk__Percent, size);
			cout << endl;
			break;
		case 1:
			system("cls");
			read();
			break;
		case 3:
			system("cls");
			return 0;
		default:
			system("cls");
			cout << "Enter corect!!!" << endl;
			continue;
		}
	} while (true);
	system("pause");
	return 0;
}
