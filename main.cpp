#include <iostream>
#include <vector>
#include "vector.hpp"
#include <limits>
using namespace std;

int main() {

    cout << "Welcome to Yusuf's Business Sorting Program!" << endl << endl;

    vector<string> list;

    string input;

    string answer;

    do {
    
        get_business(input);

        add_business(input, list);

        print(list);
        
        cin.clear();

        cout << "Another business?  ";
        cin >> answer;
        cout << endl;

        cin.clear();
        std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );

        if(answer == "No" || answer == "no" || answer == "N" || answer == "n"){
            
            cout << "Thanks for choosing Yusuf's Business Sorting Program!" << endl;
            exit(0);
        }

    }
    while (answer == "Yes" || answer == "yes" || answer == "y" || answer == "Y");

    cout << "Thanks for choosing Yusuf's Business Sorting Program!" << endl;

    return 0;

}