#include<iostream>
#include<map>
#include<string>

using namespace std;

int main ()
{
    map <string,int> myMap;

    string productName;
    int productPrice;
    int i = 1;
    while(i <= 5)
    {
        cout << "Enter Product " << i << " Name : ";
        cin.ignore();
        getline(cin,productName);
        
        cout << "Enter Price : ";
        cin >> productPrice;

        cout << endl;
        
        myMap[productName] = productPrice;
        i++;
    }

    cout << "\n===== Products =====\n";
    for (auto x : myMap)
    {
        cout << x.first << " : " << x.second << endl;
    }

    string findProduct;
    int newPrice;
    cout << "\nEnter Product : ";
    cin >> findProduct;

    auto it = myMap.find(findProduct);

    if (it != myMap.end())
    {
        cout << "\nProduct Found\n";
        cout << "Enter Its New Price : ";
        cin >> newPrice;
        it -> second = newPrice;
    }
    else
    {
        cout << "\nProduct Not Found\n";
    }

    cout << "\n===== Updated Price =====\n";
    for (auto x : myMap)
    {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}