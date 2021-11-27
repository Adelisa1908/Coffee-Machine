#include <iostream>

using namespace std;

int main()
{
    string type_of_coffee;
    string size_of_coffee;
    int no_of_cups;
    double cost_of_coffee;

    cout << "Hello, please enter the type of coffee, that you want (espresso, cappuccino, latte): " << endl;
    type:cin >> type_of_coffee;
    if (type_of_coffee == "espresso")
        cost_of_coffee += 1;
    else if (type_of_coffee == "cappuccino")
        cost_of_coffee += 1.20;
    else if (type_of_coffee == "latte")
        cost_of_coffee += 1.60;
    else {
        cout << "Invalid input, try again." << endl;
        goto type;
    }

    cout << "Please enter the size of the cup (small, medium, large): " << endl;
    size:cin >> size_of_coffee;
    if (size_of_coffee == "small")
        cost_of_coffee += 0.5;
    else if (size_of_coffee == "medium")
        cost_of_coffee += 1;
    else if (size_of_coffee == "large")
        cost_of_coffee += 1.50;
    else {
        cout << "Invalid input, try again." << endl;
        goto size;
    }


    cout << "Please enter number of cups: " << endl;
    cin >> no_of_cups;
    cost_of_coffee *= no_of_cups;

    cout << "Your bill is " << cost_of_coffee << "KM" << endl;

    return 0;
}
