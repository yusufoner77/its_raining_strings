#include <iostream>
#include <vector>
#include "vector.hpp"
using namespace std;

void get_business(string& input) {

    cout << "Please enter the name of a business:  ";
    getline(cin, input);
    cout << endl;

}


void add_business(string input, vector<string>& list) {
  
    list.push_back(input);

    sort(list.begin(),list.end());

}

void print(vector <string> list) {

    cout << "Your businesses are:" << endl << endl;

    for(int i = 0; i < list.size(); i++) {
        cout << list[i] << endl;
    }

    cout << endl;
}
