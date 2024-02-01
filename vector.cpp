#include <iostream>
#include <vector>
#include "vector.hpp"
using namespace std;

void get_business(string& input) {
    cout << "Please enter the name of a business: ";
    getline(cin, input);
}


void add_business(string input, vector<string>& list) {
  
    list.push_back(input);

    sort(list.begin(),list.end());

}

void print(vector <string> list) {

    cout << "Your businesses are: " << endl;

    for(int i = 0; i < list.size(); i++) {
        cout << list[i] << endl;
    }
}

void another(string answer) {


    cout << "Another business?";
    cin >> answer;

    if(answer == "yes" || "Yes" || "y" || "Y") {
        //not sure what to do here

    }
    if(answer == "No" || "no" || "n" || "N") {
        cout << "Thanks for choosing Yusuf's Business Sorting Program!" << endl;
        exit(0);
    }

}
