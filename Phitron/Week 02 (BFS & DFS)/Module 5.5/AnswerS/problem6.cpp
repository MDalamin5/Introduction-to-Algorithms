#include <iostream>
#include <string>

using namespace std;

char getCapital(const string& str) {
    
    if (str.empty()) {
        return '\0'; 
    }

   
    if (isupper(str[0])) {
        return str[0]; 
    } else {
    
        return getCapital(str.substr(1));
    }
}

int main() {
    string input = "thisStRIng";
    char firstCapital = getCapital(input);
    
    if (firstCapital != '\0') {
        cout << "Input: " << input << endl;
        cout << "Output: " << firstCapital << endl;
    } else {
        cout << "No capital letter found in the input string." << endl;
    }
    
    return 0;
}
