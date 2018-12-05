#include "Complexclass.h"
#include <iostream>

ComplexClass::ComplexClass(vector <Complex> datos)
{
    data=datos;
}



void ComplexClass::sortByReal()
{
    Complex temp;
    bool changes;
    vector<Complex>::iterator it;
    do {
        changes = false;
        it = data.begin();
        while(it<data.end()){
            cerr<<it->getcomplex();
            for (unsigned i = 0; i<data.size(); i++){
                if (data[i].real>it->real){
                    data.erase(it);
                    data.insert(data.begin()+i, *it);
                    changes = true;
                    break;
                }
            }
            it++;
        }
    }while (changes);
}



void ComplexClass::sortByImaginary()
{
    bool changes;
    vector<Complex>::iterator it;
    do {
        changes = false;
        it = data.begin();
        for (vector <Complex>::iterator current; current!=data.end(); current++){
            if (current->imaginary<it->imaginary){
                it++;
            }else{
                data.insert(current, *it);
                data.erase(it);
                changes = true;
                break;
            }
        }
    }while (changes);
}



ostream& operator<<(ostream & os, const ComplexClass& toShow)
{
    for (const Complex &element: toShow.data){
        element.getcomplex();
    }
    return os;
}



void ComplexClass::showAll()
{
    for (unsigned i=0; i<data.size(); i++){
        cout<<i<<": "<<data[i].getcomplex()<<endl;;
    }

}

void ComplexClass::menu()
{

}
