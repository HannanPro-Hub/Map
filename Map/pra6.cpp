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

    int highestMarks = 0;
    string topStudent = "";

    for (auto x : myMap)
    {
        if (x.second > highestMarks)
        {
            highestMarks = x.second;
            topStudent = x.first;
        }
    }

    cout << "\nHighest Marks Student : " << topStudent;
    cout << "\nMarks : " << highestMarks;


    return 0;
}