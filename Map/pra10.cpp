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
void addProduct()
{
    string productName;
    int stockQuantity;

    clearBuffer();
    cout << "Enter Product Name : ";
    getline(cin, productName);

    cout << "Enter Stock Quantity : ";
    cin >> stockQuantity;

    myMap[productName] = stockQuantity;

    cout << "\nProduct Added\n";
}
void searchProduct()
{
    string productName;
    clearBuffer();
    cout << "Enter Product To Search : ";
    getline(cin, productName);

    auto it = myMap.find(productName);
    if (it != myMap.end())
    {
        cout << "\nProduct Found\nProduct Name : " << it->first << "\nStock Quantity : " << it->second << "\n";
    }
    else
    {
        cout << "\nProduct Not Found\n";
    }
}
void updateStock()
{
    string productName;
    int stockQuantity;
    clearBuffer();
    cout << "Enter Product Name To Update Stock : ";
    getline(cin, productName);

    auto it = myMap.find(productName);

    if (it != myMap.end())
    {
        cout << "Enter New Stock Quantity : ";
        cin >> stockQuantity;

        it->second = stockQuantity;
        cout << "\nStock Updated\n";
    }
    else
    {
        cout << "\nProduct Not Found\n";
    }
}
void removeProduct()
{
    if (myMap.empty())
    {
        cout << "\nNo Product Available\n";
        return;
    }
    for (auto x : myMap)
    {
        cout << x.first << " : " << x.second << endl;
    }
    string productName;
    clearBuffer();
    cout << "Enter Product To Remove : ";
    getline(cin, productName);

    auto it = myMap.find(productName);
    if (it != myMap.end())
    {
        myMap.erase(it);
        cout << "\nProduct Removed\n";
    }
    else
    {
        cout << "\nProduct Not Found\n";
    }
}
void displayProducts()
{
    if (myMap.empty())
    {
        cout << "\nNo Product Available\n";
        return;
    }
    for (auto x : myMap)
    {
        cout << "\nProduct : " << x.first << " -  Stock Quantity : " << x.second << "\n";
    }
}
void totalProducts()
{
    cout << "\nTotal Products Stored : " << myMap.size() << "\n";
}
void leaveStore()
{
    cout << "\nStore Exited\n";
}

int main()
{
    int choice = 0;
    do
    {
        cout << "========== Inventory Syestem ==========\n1. Add Product\n2. Search Product\n3. Update Stock\n4. Remove Product\n5. Show All Products\n6. Show Total Products\n7. Exit\n=======================================\nChoice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addProduct();
            break;
        case 2:
            searchProduct();
            break;
        case 3:
            updateStock();
            break;
        case 4:
            removeProduct();
            break;
        case 5:
            displayProducts();
            break;
        case 6:
            totalProducts();
            break;
        case 7:
            leaveStore();
            break;
        default:
            cout << "Invalid Input";
            break;
        }
    } while (choice != 7);

    return 0;
}