#include <iostream>
#include <vector>
#include "vector.hpp"
using namespace std;

int main() {

    cout << "Welcome to Yusuf's Business Sorting Program" << endl;

    vector<string> list;

    string input;

    get_business(input);

    // cout << "Please enter the name of a business: ";
    // getline(cin, input);

    add_business(input, list);

    get_business(input);

    // cout << "Please enter the name of a business: ";
    // getline(cin, input);

    add_business(input, list);

    get_business(input);

    // cout << "Please enter the name of a business: ";
    // getline(cin, input);

    add_business(input, list);

    print(list);

    return 0;

}