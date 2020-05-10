#include <string>
#include <iostream>
using namespace std;


class CHuman
{
private:
    string
        currNm;
    int age,
        countOfSkills,
        nameCount,
        priceForSkill,
        desiredSalary;

public:
    void setInform()
    {
        cout << "------------------" << endl;

        cout << "Enter current name of human: " << endl;

        cin >> currNm;

        cout << "Enter current age of human: " << endl;
        cin >> age;

        cout << "Enter count of skills: " << endl;
        cin >> countOfSkills;

        cout << "Enter price for 1 skill (grn): " << endl;
        cin >> priceForSkill;

        cout << "Salary: " << priceForSkill * countOfSkills << "grn/day" << endl;

        cout << "Desired salary: " << endl;
        cin >> desiredSalary;

        cout << "------------------" << endl;
        cout << "To earn this money " << desiredSalary << "grn" << currNm << " need to work " << desiredSalary / (priceForSkill * countOfSkills) <<
            " days" << endl;

    }

    void getInform()
    {
        cout << "------------------" << endl;
        cout << "Information about human:" << endl;

        cout << "Current name: " << currNm << endl <<
            "Age: " << age << endl <<
            "Count of skills: " << countOfSkills << endl <<
            "Price for 1 skill (grn): " << priceForSkill << endl <<
            "Salary: " << priceForSkill * countOfSkills << " grn/day " << endl <<
            "Desired salary: " << desiredSalary << endl <<
            "To earn this money " << desiredSalary << "grn" << currNm << " need to work " << desiredSalary / (priceForSkill * countOfSkills) << " days" << endl;


    }


    void changeAge()
    {
        int choice;
        cout << "------------------" << endl;
        cout << "Age: " << age << endl <<
            "How would you like to change it ?" << endl <<
            "Enter new age of human:" << endl;
        cin >> choice;
        age = choice;
    }

    void changeCountOfSkills()
    {
        int choice2;
        cout << "------------------" << endl;
        cout << "Count of skills: " << countOfSkills << endl <<
            "How would you like to change it ?" << endl <<
            "Enter new count of skills:" << endl;
        cin >> choice2;
        countOfSkills = choice2;
    }

    void changePriceForSkill()
    {
        int choice3;
        cout << "------------------" << endl;
        cout << "Price for 1 skill (grn): " << priceForSkill << endl <<
            "How would you like to change it ?" << endl <<
            "Enter new price for skill:" << endl;
        cin >> choice3;
        priceForSkill = choice3;
    }

    void changeDesiredSalary()
    {
        int choice4;
        cout << "------------------" << endl;
        cout << "Desired salary: " << desiredSalary << endl <<
            "How would you like to change it ?" << endl <<
            "Enter new desired salary:" << endl;
        cin >> choice4;
        desiredSalary = choice4;
    }

    void appMenu()
    {
        int choice;
        while (true)
        {
            cout << "------------------" << endl <<
                "What do you want to do ?" << endl <<
                "1 - add data" << endl <<
                "2 - get data" << endl <<
                "3 - change age" << endl <<
                "4 - change count of skills" << endl <<
                "5 - change price of skill" << endl <<
                "6 - change desired salary" << endl <<
                "7 - close the app " << endl;

            cout << "------------------" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1: setInform(); break;
            case 2: getInform(); break;
            case 3: changeAge(); break;
            case 4: changeCountOfSkills(); break;
            case 5: changePriceForSkill();
            case 6: changeDesiredSalary();
            case 7:  break;
            default: cout << "Wrong input !" << endl;
            }

            if (choice == 7)
                break;
        }
    }

};
int main()
{
    setlocale(LC_ALL, "ukr");
    CHuman obj;
    obj.appMenu();
    return 0;
}
