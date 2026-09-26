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

    string removeName;
    cout << "\nEnter Name You Want To Remove : ";
    getline(cin, removeName);
    
    auto it = myMap.find(removeName);

    if (it != myMap.end())
    {
        myMap.erase(it);
        cout << "\nStudent Removed\n";
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