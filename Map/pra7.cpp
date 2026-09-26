#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> myMap;
    string name = "";
    int marks = 0;
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

    int passingMarks = 50;

    for (auto x : myMap)
    {
        if (x.second >= passingMarks)
        {
            cout << x.first << " : " << x.second << " - " << "Pass" << endl;
        }
        else
        {
            cout << x.first << " : " << x.second << " - " << "Fail" << endl;
        }
    }
    
    return 0;
}