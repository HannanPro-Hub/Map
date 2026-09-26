#include<iostream>
#include<map>
#include<string>

using namespace std;

int main ()
{
    map <string,int> myMap;

    string name;
    int marks;
    int i = 1;
    while(i <= 5)
    {
        cout << "Enter Student " << i << " Name : ";
        cin.ignore();
        getline(cin,name);
        
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
    return 0;
}