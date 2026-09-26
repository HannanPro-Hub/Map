#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> myMap;
    
    int newMarks = 0;
    string name;
    int marks;
    int i = 1;

    while (i <= 5)
    {
        cout << "Enter Student " << i << " Name : ";
        getline(cin, name);
        
        cout << "Enter Marks : ";
        cin >> marks;
        
        cin.ignore();    
        cout << endl;

        myMap[name] = marks;
        i++;
    }

    cout << "\nStudents\n";
    for (auto x : myMap)
    {
        cout << x.first << " : " << x.second << endl;
    }

    string findName;
    cout << "\nEnter Name You Want To Find : ";
    getline(cin, findName);
    
    auto it = myMap.find(findName);

    if (it != myMap.end())
    {
        cout << "\nStudent Found\n";
        cout << "\nMarks : " << it->second << "\n";
        cout << "\nEnter New Marks : ";
        cin >> newMarks;
        cout << "\n";
        it -> second = newMarks;
    }
    else
    {
        cout << "Student Not Found\n";
    }


    cout << "\nUpdated Students\n";
    for (auto x : myMap)
    {
        cout << x.first << " : " << x.second << "\n";
    }
    return 0;
}