#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    char word;
    ifstream myfile ("example.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "can't open this file."<<endl;

    return 0;
}