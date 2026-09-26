#include <iostream>
#include <map>
#include <string>
#include <limits>

using namespace std;

map<string, int> myMap;
void clearBuffer()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void add()
{
    string name;
    int marks = 0;

    clearBuffer();
    cout << "Enter Student Name : ";
    getline(cin, name);

    cout << "Enter Student Marks : ";
    cin >> marks;

    myMap[name] = marks;

    cout << "\nStudent Added\n";
}
void search()
{
    string name;
    clearBuffer();
    cout << "Enter Student To Search : ";
    getline(cin, name);

    auto it = myMap.find(name);
    if (it != myMap.end())
    {
        cout << "\nStudent Found\nName : " << it->first << "\nMarks : " << it->second << "\n";
    }
    else
    {
        cout << "\nStudent Not Found\n";
    }
}
void update()
{
    string name = "";
    int newMarks = 0;
    clearBuffer();
    cout << "Enter Student Name To Update Marks : ";
    getline(cin, name);

    auto it = myMap.find(name);

    if (it != myMap.end())
    {
        cout << "Enter New Marks : ";
        cin >> newMarks;

        it->second = newMarks;
        cout << "\nMarks Updated\n";
    }
    else
    {
        cout << "\nStudent Not Found\n";
    }
}
void erase()
{
    if (myMap.empty())
    {
        cout << "\nNo Students To Remove\n";
        return;
    }
    for (auto x : myMap)
    {
        cout << x.first << " : " << x.second << endl;
    }
    string name;
    clearBuffer();
    cout << "Enter Student To Remove : ";
    getline(cin, name);

    auto it = myMap.find(name);
    if (it != myMap.end())
    {
        myMap.erase(it);
        cout << "\nStudent Removed\n";
    }
    else
    {
        cout << "\nStudent Not Found\n";
    }
}
void display()
{
    if (myMap.empty())
    {
        cout << "\nNo Students Available\n";
        return;
    }
    for (auto x : myMap)
    {
        cout << "\n"
             << x.first << " : " << x.second;
    }
}
void leave()
{
    cout << "\nProgram Exited\n";
}

int main()
{
    int choice = 0;
    do
    {
        cout << "========== Student Management Syestem ==========\n1. Add Student\n2. Search Student\n3. Update Marks\n4. Remove Student\n5. Show All Students\n6. Exit\n================================================\nChoice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            search();
            break;
        case 3:
            update();
            break;
        case 4:
            erase();
            break;
        case 5:
            display();
            break;
        case 6:
            leave();
            break;
        default:
            cout << "Invalid Input";
            break;
        }
    } while (choice != 6);

    return 0;
}