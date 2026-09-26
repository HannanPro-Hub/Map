#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<char, int> myMap;
    
    string word;

    cout << "Enter A Word : ";
    getline(cin, word);

    for (char ch : word)
    {
        myMap[ch]++;
    }

    for (auto x : myMap)
    {
        cout << x.first << " : " << x.second << endl;
    }


    return 0;
}