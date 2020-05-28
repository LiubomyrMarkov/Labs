#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

void succesfull() {
	cout << "\n���i���\n--------------------------------------------------\n";
}
void deleteData()
{
	ofstream fout("File.txt", ios::trunc);
}
void Show_info() {
	ifstream fin;
	fin.open("File.txt");
	if (!fin.is_open()) {
		cout << "Cannot open file fin" << endl;
	}
	else {
		while (!fin.eof()) {
			string str = "";
			getline(fin, str);
			cout << str << endl;
		}
	}

	fin.close();

}

class Info_Sender {

private:

	string sender_name;
	string sender_surname;
	string sender_city;
	string sender_street;
	string sender_phone;
	int sender_house_num;


public:
	string Get_sender_name() {
		return sender_name;
	}
	string Get_sender_surname() {
		return sender_surname;
	}
	string Get_sender_city() {
		return sender_city;
	}
	string Get_sender_street() {
		return sender_street;
	}
	string Get_sender_phone() {
		return sender_phone;
	}
	int Get_sender_house_num() {
		return sender_house_num;
	}
	void Set_sender_name(string sn) {
		sender_name = sn;
	}
	void Set_sender_surname(string ss) {
		sender_surname = ss;
	}
	void Set_sender_city(string sc) {
		sender_city = sc;
	}
	void Set_sender_street(string ssr) {
		sender_street = ssr;
	}
	void Set_sender_house_num(int shn) {
		sender_house_num = shn;
	}
	void Set_sender_phone(string sp) {
		sender_phone = sp;
	}

};
class Info_Orderer{

private:

	string orderer_name;
	string orderer_surname;
	string orderer_city;
	string orderer_street;
	string orderer_phone;
	int orderer_house_num;


public:
	string Get_orderer_name() {
		return orderer_name;
	}
	string Get_orderer_surname() {
		return orderer_surname;
	}
	string Get_orderer_city() {
		return orderer_city;
	}
	string Get_orderer_street() {
		return orderer_street;
	}
	string Get_orderer_phone() {
		return orderer_phone;
	}
	int Get_orderer_house_num() {
		return orderer_house_num;
	}
	void Set_orderer_name(string on) {
		orderer_name = on;
	}
	void Set_orderer_surname(string os) {
		orderer_surname = os;
	}
	void Set_orderer_city(string oc) {
		orderer_city = oc;
	}
	void Set_orderer_street(string osr) {
		orderer_street = osr;
	}
	void Set_orderer_house_num(int ohn) {
		orderer_house_num = ohn;
	}
	void Set_orderer_phone(string op) {
		orderer_phone = op;
	}

};
class Parcel_info
{
private:
	int weight;
	int x;
	int y;
	int z;
	int distance;
public:

	int Get_weight() {
		return weight;
	}
	int Get_x() {
		return x;
	}
	int Get_y() {
		return y;
	}
	int Get_z() {
		return z;
	}
	int Get_distance() {
		return distance;
	}
	void Set_weight(int value_weight) {
		weight = value_weight;
	}
	void Set_x(int value_x) {
		x = value_x;
	}
	void Set_y(int value_y) {
		y = value_y;
	}
	void Set_z(int value_z) {
		z = value_z;
	}
	void Set_distance(int value_distnace) {
		distance = value_distnace;
	}

};

class Post : public Parcel_info , public Info_Sender, public Info_Orderer
{
	public:
		Post() {
			Set_x(0);
			Set_y(0);
			Set_z(0);
			Set_distance(0);
			Set_weight(0);
			Set_sender_name("");
			Set_sender_surname("");
			Set_sender_city("");
			Set_sender_street("");
			Set_sender_phone("");
			Set_sender_house_num(0);
			Set_orderer_name("");
			Set_orderer_surname("");
			Set_orderer_city("");
			Set_orderer_street("");
			Set_orderer_phone("");
			Set_orderer_house_num(0);
		}

			int s_day ;
			int o_day;
			int o_year;
			int s_year;
			string month;
			string o_month;
			int addtime;
			//////////////////////////////////////		 Parcel info
			void Change_x() {
				
				 long int x;
				cout << "����i�� ������� ������� � �����������: ";
				cin >> x;
				cout << endl;
				if (x <= 0) {
					cout << "�������!\n�i�'���� �������� �����������!\n";
					Change_x();
				}
				else if (x >= 1000) {
					cout << "\n����������� ������� ������� 10�\n";
					Change_x();
				}
				else {
					Set_x(x);
					cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
					int c;
					cin >> c;
					switch (c) {
					case 1: succesfull(); break;
					default: Change_x(); break;
					}
					
				}
				
			}
			void Change_y() {
				long int y;
				cout << "����i�� ������ ������� � �����������: ";
				cin >> y;
				cout << endl;
				if (y <= 0) {
					cout << "�������!\n�i�'���� �������� �����������!\n";
					Change_y();
				}
				else if (y >= 300) {
					cout << "\n����������� ������ ������� 3�\n";
					Change_y();
				}
				else {
					Set_y(y);
					cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
					int c;
					cin >> c;
					switch (c) {
					case 1: succesfull(); break;
					default: Change_y(); break;
					}
				}
			}
			void Change_z() {
				long int z;
				cout << "����i�� ������ ������� � �����������: ";
				cin >> z;
				cout << endl;
				if (z <= 0) {
					cout << "�������!\n�i�'���� �������� �����������!\n";
					Change_z();
				}
				else if (z >= 500) {
					cout << "\n����������� ������ ������� 5�\n";
					Change_z();
				}
				else {
					Set_z(z);
					cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
					int c;
					cin >> c;
					switch (c) {
					case 1: succesfull(); break;
					default: Change_z(); break;
					}
					
				}
			}
			void Change_weight() {
				long int w;
				cout << "����i�� ���� ������� � ��: ";
				cin >> w;
				cout << endl;
				if (w <= 0) {
					cout << "�������!\n�i�'���� �������� �����������!\n";
					Change_weight();
				}
				else if (w >= 5000) {
					cout << "\n����������� ���� ������� 5�(5000��)\n";
					Change_weight();
				}
				else {
					Set_weight(w);
					cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
					int c;
					cin >> c;
					switch (c) {
					case 1:succesfull(); break;
					default: Change_weight(); break;
					}
					
				}
			}
			void Change_distance() {
				long int d;
				cout << "����i�� �i������ �i� �������� ����������� � ��: ";
				cin >> d;
				cout << endl;
				if (d <= 0) {
					cout << "�������!\n�i�'���� �������� �����������!\n";
					Change_distance();
				}
				else {
					Set_distance(d);
					cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
					int c;
					cin >> c;
					switch (c) {
					case 1: succesfull(); break;
					default: Change_distance(); break;
					}
					
				}
			}
			/////////////////////////////////////		Sender info
			
			void Change_sender_name() {
				string d;
				cout << "����i�� ���� i�'�: ";
				cin >> d;
				cout << endl;
				Set_sender_name(d);
				cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
				int c;
				cin >> c;
				switch (c) {
				case 1: succesfull(); break;
				default: Change_sender_name(); break;
				}
				

			}
			void Change_sender_phone() {
				string d;
				cout << "����i�� ��� ����� ��������: ";
				cin >> d;
				cout << endl;
				Set_sender_phone(d);
				cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
				int c;
				cin >> c;
				switch (c) {
				case 1:succesfull(); break;
				default: Change_sender_phone(); break;
				}


			}
			void Change_sender_surname() {
				string d;
				cout << "����i�� ���� ��i�����: ";
				cin >> d;
				cout << endl;
				Set_sender_surname(d);
				cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
				int c;
				cin >> c;
				switch (c) {
				case 1: succesfull(); break;
				default: Change_sender_surname(); break;
				}
				

			}
			void Change_sender_city() {
				string d;
				cout << "����i�� ���� �i���: ";
				cin >> d;
				cout << endl;
				Set_sender_city(d);
				cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
				int c;
				cin >> c;
				switch (c) {
				case 1:succesfull(); break;
				default: Change_sender_city(); break;
				}
				

			}
			void Change_sender_street() {
				string d;
				cout << "����i�� ����� ���� �����i:";
				cin >> d;
				cout << endl;
				Set_sender_street(d);
				cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
				int c;
				cin >> c;
				switch (c) {
				case 1:succesfull(); break;
				default: Change_sender_street(); break;
				}
				

			}
			void Change_sender_house_num() {
				long int d;
				cout << "����i�� ����� ������ �������:";
				cin >> d;
				cout << endl;
				if (d < 0) { 
					cout << "�������!\n�i�'���� �������� �����������!\n";
					Change_sender_house_num();
				}
				else {
					Set_sender_house_num(d);
					cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
					int c;
					cin >> c;
					switch (c) {
					case 1: succesfull(); break;
					default: Change_sender_house_num(); break;
					}
					
				}
			}
			
			//////////////////////////////////////		 Date
			
			void Date() {
				cout << "����i�� ����, �i����, �i� �i�������: ";
				cin >> s_day;
				cin >> month;
				cin >> s_year;
				o_year = s_year;
				o_month = month;

				int b = stoi(month);
				if ((s_day <= 0) || b <= 0 || b > 12) {
					cout << "\n�������!\n";
					Date();
				}
				else {
					
					if (Get_distance() <= 300) {
						addtime = 2;
					}
					else if ((Get_distance() > 300) && Get_distance() <= 600) {
						addtime = 4;
					}
					else if ((Get_distance() > 600) && Get_distance() <= 1000) {
						addtime = 7;
					}
					else {
						addtime = 10;
					}
					
					if (b == 1) {
						int max = 31;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "02";
							}
							else {
								o_day = s_day + addtime;
							}
						}
						else {
							cout << "\n�������!\n";
							Date();
						}
					}
					else if (b == 2) {
						int max = 28;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "03";
							}
							else {
								o_day = s_day + addtime;
							}
						}
						else 
						{
							cout << "\n�������!\n";
							Date();
						}
					}
					else if (b == 3) {
						int max = 31;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "04";
							}
							else {
								o_day = s_day + addtime;
							}
						}
						else
						{
							cout << "\n�������!\n";
							Date();
						}
					}
					else if (b == 4) {
						int max = 30;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "05";
							}
							else {
								o_day = s_day + addtime;
							}
						}
						else
						{
							cout << "\n�������!\n";
							Date();
						}

					}
					else if (b == 5) {
						int max = 31;
						if (s_day <= max) {
						if ((s_day + addtime) > max) {
							o_day = (s_day + addtime) - max;
							o_month = "06";
						}
						else {
							o_day = s_day + addtime;
						}
					}
					else
					{
						cout << "\n�������!\n";
						Date();
					}
					}
					else if (b == 6) {
						int max = 30;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "07";
							}
							else {
								o_day = s_day + addtime;
							}
						}
						else
						{
							cout << "\n�������!\n";
							Date();
						}
					}
					else if (b == 7) {
						int max = 31;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "08";
							}
							else {
								o_day = s_day + addtime;
							}
						}
						else
						{
							cout << "\n�������!\n";
							Date();
						}
					}
					else if (b == 8) {
						int max = 31;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "09";
							}
							else {
								o_day = s_day + addtime;
							}
						}
						else
						{
							cout << "\n�������!\n";
							Date();
						}
					}
					else  if (b == 9) {
						int max = 30;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "10";
							}
							else {
								o_day = s_day + addtime;
							}
						}
						else
						{
							cout << "\n�������!\n";
							Date();
						}
					}
					else if (b == 10) {
						int max = 31;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "11";
							}
							else {
								o_day = s_day + addtime;
							}
						}
						else
						{
							cout << "\n�������!\n";
							Date();
						}

					}
					else if (b == 11) {
						int max = 30;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "12";
							}
							else {
								o_day = s_day + addtime;
							}
						}

						else
						{
							cout << "\n�������!\n";
							Date();
						}

					}
					else if (b == 12) {
						int max = 31;
						if (s_day <= max) {
							if ((s_day + addtime) > max) {
								o_day = (s_day + addtime) - max;
								o_month = "01";
								o_year = s_year + 1;
							}
							else {
								o_day = s_day + addtime;
							}
						}
						else
						{
							cout << "\n�������!\n";
							Date();
						}

					}

					cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
					int c;
					cin >> c;
					switch (c) {
					case 1: succesfull(); break;
					default: Date(); break;
					}
				}
			}

			//////////////////////////////////////		Orderer info
			
			void Change_orderer_name() {
				string d;
				cout << "����i�� i�'� ����������: ";

				cin >> d;
				cout << endl;
				Set_orderer_name(d);
				cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
				int c;
				cin >> c;
				switch (c) {
				case 1:succesfull(); break;
				default: Change_orderer_name(); break;
				}
				

			}
			void Change_orderer_phone() {
				string d;
				cout << "����i�� ����� �������� ����������: ";
				cin >> d;
				cout << endl;
				Set_orderer_phone(d);
				cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
				int c;
				cin >> c;
				switch (c) {
				case 1:succesfull(); break;
				default: Change_orderer_phone(); break;
				}


			}
			void Change_orderer_surname() {
				string d;
				cout << "����i�� ��i����� ����������: ";
				cin >> d;
				cout << endl;
				Set_orderer_surname(d);
				cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
				int c;
				cin >> c;
				switch (c) {
				case 1:succesfull(); break;
				default: Change_orderer_surname(); break;
				}
				

			}
			void Change_orderer_city() {
				string d;
				cout << "����i�� �i��� ����������:";
				cin >> d;
				cout << endl;
				Set_orderer_city(d);
				cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
				int c;
				cin >> c;
				switch (c) {
				case 1:succesfull(); break;
				default: Change_orderer_city(); break;
				}
				

			}
			void Change_orderer_street() {
				string d;
				cout << "����i�� ����� �����i ����������:";
				cin >> d;
				cout << endl;
				Set_orderer_street(d);
				cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
				int c;
				cin >> c;
				switch (c) {
				case 1:succesfull(); break;
				default: Change_orderer_street(); break;
				}
				

			}
			void Change_orderer_house_num() {
				long int d;
				cout << "����i�� ����� ������� ����������:";
				cin >> d;
				cout << endl;
				if (d < 0) {
					cout << "�������!\n�i�'���� �������� �����������!\n";
					Change_orderer_house_num();
				}
				else {
					Set_orderer_house_num(d);
					cout << "���i ������� �i���?\n1- ���\n2 - �i" << endl;
					int c;
					cin >> c;
					switch (c) {
					case 1: succesfull(); break;
					default: Change_orderer_house_num(); break;
					}
					
				}
			}

			/////////////////////////////////////////		Func

		int Price() {
				int price;
				int a;
				if (Get_x() <= 0 || Get_y() <= 0 || Get_z() <= 0 || Get_distance() <= 0 || Get_weight() <= 0
					|| Get_sender_name() == "" || Get_sender_surname() == "" || Get_sender_city() == ""
					|| Get_sender_street() == "" || Get_sender_phone() == "" || Get_sender_house_num() <= 0
					|| Get_orderer_name() == "" || Get_orderer_surname() == "" || Get_orderer_city() == ""
					|| Get_orderer_street() == "" || Get_orderer_phone() == "" || Get_orderer_house_num() <= 0) {
					return 0;
				}
				else
				{
					if (Get_distance() <= 300) {
						a = 40;
					}
					else if ((Get_distance() > 300) && Get_distance() <= 600) {
						a = 90;
					}
					else if ((Get_distance() > 600) && Get_distance() <= 1000) {
						a = 150;
					}
					else {
						a = 250;
					}
					price = a + (Get_weight() / 10);
					return price;
				}

				
		}
		void Create() {
			Change_x();
			system("cls");
			Change_y();
			system("cls");
			Change_z();
			system("cls");
			Change_weight();
			system("cls");
			Change_distance();
			system("cls");
			Change_sender_name();
			system("cls");
			Change_sender_surname();
			system("cls");
			Change_sender_city();
			system("cls");
			Change_sender_street();
			system("cls");
			Change_sender_house_num();
			system("cls");
			Change_sender_phone();
			system("cls");
			Change_orderer_name();
			system("cls");
			Change_orderer_surname();
			system("cls");
			Change_orderer_city();
			system("cls");
			Change_orderer_street();
			system("cls");
			Change_orderer_house_num();
			system("cls");
			Change_orderer_phone();
			system("cls");
			Date();
			
			
		}
		void Print() {
			if (Get_x() <= 0 || Get_y() <= 0 || Get_z() <= 0 || Get_distance() <= 0 || Get_weight() <= 0
				|| Get_sender_name() == "" || Get_sender_surname() == "" || Get_sender_city() == ""
				|| Get_sender_street() == "" || Get_sender_phone() == "" || Get_sender_house_num() <= 0
				|| Get_orderer_name() == "" || Get_orderer_surname() == "" || Get_orderer_city() == ""
				|| Get_orderer_street() == "" || Get_orderer_phone() == "" || Get_orderer_house_num() <= 0)
			{
				cout << "���� ������� ������� ��� ��� ������� ������!\n";
			}
			else 
			{

				cout << "��'�� �������: " << (((Get_x())*(Get_y())*(Get_z())) / 100) << endl;
				cout << "���� �������: " << Get_weight() << " kg" << endl;
				cout << "�i������ ��������: " << Get_distance() << " km" << endl;
				cout << "�I� �i���������: " << Get_sender_name() << " " << Get_sender_surname() << endl;
				cout << "������ �i���������: " << Get_sender_city() << " " << Get_sender_street() << " " << Get_sender_house_num() << endl;
				cout << "����� �������� �i���������: " << Get_sender_phone() << endl;
				cout << "�I� ����������: " << Get_orderer_name() << " " << Get_orderer_surname() << endl;
				cout << "������ ����������: " << Get_orderer_city() << " " << Get_orderer_street() << " " << Get_orderer_house_num() << endl;
				cout << "����� �������� ����������: " << Get_orderer_phone() << endl;

				if (Get_weight() <= 50) {
					cout << "��������� � ����������� �i��i����i �� 50 ��";
				}
				else {
					cout << "��������� � ����������� �i��i����i �i� 50 ��";
				}
				cout << "\n���� �i�������: " << s_day << "." << month << "." << s_year << endl;
				cout << "���� ��������: " << o_day << "." << o_month << "." << o_year << endl;
				cout << "�i�� ��������: " << Price() << " ���." << endl;

				succesfull();
			}
		}
		void SaveData() 
		{
			ofstream fout("File.txt", ofstream::app);

			if (Get_x() <= 0 || Get_y() <= 0 || Get_z() <= 0 || Get_distance() <= 0 || Get_weight() <= 0
				|| Get_sender_name() == "" || Get_sender_surname() == "" || Get_sender_city() == ""
				|| Get_sender_street() == "" || Get_sender_phone() == "" || Get_sender_house_num() <= 0
				|| Get_orderer_name() == "" || Get_orderer_surname() == "" || Get_orderer_city() == ""
				|| Get_orderer_street() == "" || Get_orderer_phone() == "" || Get_orderer_house_num() <= 0) {

				cout << "�� ����� ��������� ���, ���� ����� �������� ������ ���" << endl;
				fout.close();

				cout << "������ ������ ��� ��������?\n1 - ���\n2 - �" << endl;
				int tem;
				cin >> tem;
				switch (tem) {
				case 1:system("cls"); Create(); break;
				case 2:system("cls"); break;
				default:system("cls"); SaveData(); break;
				}
			}
			else  
			{
				
				cout << "�� ����� ������ �������� ������ ���? ϳ��� ������������ ������ �� �� �������" << endl;
				cout << "1 - ϳ��������� ����(��������� �� �������)\n2 - ������ ��� ��������" << endl;
				
				int tem;
				
				cin >> tem;
				switch (tem)
				{
					case 1:
					fout.setf(ios::left);
					fout << "\n--------------------------------------------------------------\n";
					fout.width(50);
					fout << "��'�� �������: " << (((Get_x())*(Get_y())*(Get_z())) / 100) << endl;

					fout.width(50);
					fout << "���� �������: " << Get_weight() << " kg" << endl;

					fout.width(50);
					fout << "�i������ ��������: " << Get_distance() << " km" << endl;

					fout.width(50);
					fout << "�I� �i���������: " << Get_sender_name() << " " << Get_sender_surname() << endl;

					fout.width(50);
					fout << "������ �i���������: " << Get_sender_city() << " " << Get_sender_street() << " " << Get_sender_house_num() << endl;

					fout.width(50);
					fout << "����� �������� �i���������: " << Get_sender_phone() << endl;

					fout.width(50);
					fout << "�I� ����������: " << Get_orderer_name() << " " << Get_orderer_surname() << endl;

					fout.width(50);
					fout << "������ ����������: " << Get_orderer_city() << " " << Get_orderer_street() << " " << Get_orderer_house_num() << endl;

					fout.width(50);
					fout << "����� �������� ����������: " << Get_orderer_phone() << endl;
					if (Get_weight() <= 50) 
					{
						fout << "��������� � ����������� �i��i����i �� 50 ��";
					}

					else 
					{
						fout << "��������� � ����������� �i��i����i �i� 50 ��";
					}

					fout.width(50);
					fout << "\n���� �i�������: " << s_day << "." << month << "." << s_year << endl;

					fout.width(50);
					fout << "���� ��������: " << o_day << "." << o_month << "." << o_year << endl;

					fout.width(50);
					fout << "�i�� ��������: " << Price() << " ���." << endl;
					fout.close();
					break;
					case 2: fout.close(); break;
					default: SaveData(); break;
				}
			}
			
		}
};

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Post a;
	int c;
	bool b = true;
	
	while (b) 
	{

		cout.width(25);
		cout << "����" << endl;
		cout.width(25);
		cout << "****" << endl;
		cout << "0 - ���i�\n1 - �������� �������\n2 - ������� i�������i� ������� �������\n3 - ������� �i�� ������� �������\n4 - ����������� ��i �������\n5 - �������� ������ ���\n9 - �������� i�������i�\n";
		cin >> c;
		cout << endl;
			switch (c)
			{
				case 0:b = false; system("cls"); break;
				case 1:system("cls"); a.Create(); system("cls"); break;
				case 2: system("cls"); a.Print(); break;
				case 3:system("cls"); cout <<"ֳ��: "<< a.Price() << endl; break;
				case 4:system("cls"); Show_info(); break;
				case 5:system("cls"); a.SaveData(); break;
				case 9:system("cls"); deleteData(); break;
				default:
					break;
			}
	}
	system("pause");
	return 0;	
}