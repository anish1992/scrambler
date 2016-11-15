////////////////////////////////////////////////////////////////////////
//(annace)002/store
// Title:                converter.cpp
// Problem:   store data into a file then search for it using filters
// Class:                  -
// Date:                  2014
// Author:            Anish Kumaramagalam
//
///////////////////////////////////////////////////////////////////////

#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

/*comments*/
/* end of comments*/
/*
void write (string a, string file)   {
    
    ofstream txt2 (file+".java", ios::out | ios::app);
    txt2 << a <<'\n';
    txt2.close();
}*/


int main()  {
    
    int com = 0;
    string file = "";
    string data = "";
    string newf;
    cout<< "Enter a file name\n";
    cin>> file;
    cout<< "the ans "<< file<<" com "<<com <<"\n";
    
   	return 0;
}
