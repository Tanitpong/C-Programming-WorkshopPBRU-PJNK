#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream myfile;
    myfile.open ("example.txt");
    myfile << "Hello world On this file"<<endl;
    myfile.close();
    return 0;
}