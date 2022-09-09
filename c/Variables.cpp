#include <iostream>
using namespace std;
int main()
{
    int ageOfMale=78;
    char gender = 'm';
    float height= 5.1;
    double salary=1989382;
    bool olderThan18 = true;

    cout << "size of int is " << sizeof(int) <<" bytes\n";
    cout << "int minimum value is " << INT_MIN << endl;
    cout << "int maximum value is " << INT_MAX << endl;
    cout << "size of char is " << sizeof(char) <<" bytes\n";
    cout << "char minimum value is " << CHAR_MIN << endl;     
    cout << "char maximum value is " << CHAR_MAX << endl;
    cout << "size of boolean is " << sizeof(bool) <<" bytes\n";
     
    cout << "size of float is " << sizeof(float) <<" bytes\n";
    cout << "size of double is " << sizeof(double) <<" bytes\n";
     



}