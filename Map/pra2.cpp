#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> myMap;

    string name;
    int marks;
    int i = 1;

    cin.ignore();    
    while (i <= 5)
    {
        cout << "Enter Student " << i << " Name : ";
        getline(cin, name);

        cout << "Enter Marks : ";
        cin >> marks;

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
    cout << "Enter Name You Want To Find : ";
    cin.ignore();
    getline(cin, findName);
    auto it = myMap.find(findName);

    if (it != myMap.end())
    {
        cout << "Student Found\n";
        cout << "Marks : " << it->second;
    }
    else
    {
        cout << "Student Not Found";
    }

    
    return 0;
}