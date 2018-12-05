#ifndef COMPLEXCLASS_H
#define COMPLEXCLASS_H
#include <vector>
#include "Complex.h"
#include "Menu.h"
using namespace std;

class ComplexClass
{

    vector<Complex> data;

private:

public:
    ComplexClass(vector <Complex> datos = vector<Complex> ());
    void sortByReal();
    void sortByImaginary();
    friend ostream& operator<<(ostream & os, const ComplexClass& toShow);
    void showAll();
    void menu();
};

#endif // COMPLEXCLASS_H
