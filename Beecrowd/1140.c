#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;



int main(void){
    string str;
    char fl;
    bool flag = false;    
    getline(std::cin, str);

    while(str.compare("*") != 0){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        flag = false;
        istringstream ss(str);

        vector<string> tokens;
        string token;

        fl = str[0];

        while (ss >> token) {
            if(fl == token[0])
                flag = true;
            else
            {
                flag = false;
                break;   
            }
            
        }

        if(flag)
            cout << "RES: Y" << endl;
        else
            cout << "RES: N" << endl;
    
       getline(std::cin, str);
    }
    return 0;
}