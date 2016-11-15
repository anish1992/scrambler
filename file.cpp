#include<iostream>
#include<fstream>
using namespace std;

int main(void)  {

    ofstream io (".progress.dat", ios::out);
        io<<"\n";
    io.close();
}