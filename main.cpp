#include <iostream>
#include <sstream>
#include "SobrecargaVirtual.h"
#include "Complexclass.h"
using namespace std;

void option1();
void option2();



int main()
{



    std::vector<Complex*> complexVector;
    complexVector.push_back(new Complex(1, 8, "Billy"));
    complexVector.push_back(new Complex(6, 3, "Joe"));
    complexVector.push_back(new Complex(9, 5, "Mike"));
    complexVector.push_back(new Complex(3, 0, "Mark"));
    complexVector.push_back(new Complex(8, 4, "Rob"));


//    ComplexClass  C_class (complexVector);
//    C_class.showAll();
//    C_class.sortByReal();
//    C_class.showAll();

//    Menu<Complex> myselector(complexVector, &Complex::name);
//    Complex* ret;

//    ret = myselector.run_selector();
//    if (ret)
//        ret->edit();


//   for (Complex* element: complexVector)
//       cout<<element->getcomplex()<<endl;




   Menu<Complex> editmenu(complexVector, &Complex::edit, Complex::get_the_name());
   editmenu.run();


//    vector<Menu<Complex>::Menu_option> opciones;

//    opciones.push_back(Menu<Complex>::Menu_option('1', &Complex::edit, "See number 1", &complexVector[0]));

//    opciones.push_back(Menu<Complex>::Menu_option('2', &Complex::edit, "See number 2", &complexVector[1]));

//    opciones.push_back(Menu<Complex>::Menu_option('3', &Complex::edit, "See number 3", &complexVector[2]));


//    Menu<Complex> mymenu(opciones, 'q', "MY MENU");

//    mymenu.run();























    //std::vector<Complex*>& ordered = Complex::sortByReal(complexVector);








//    vector<Menu<Complex>::Menu_option> options_get;
//    string index;
//    for (unsigned i=0; i<ordered.size(); i++){
//        index='1'+char(i);

//        options_get.push_back(Menu<Complex>::Menu_option('1'+char(i), &Complex::getcomplex, "Complex "+index,  ordered[i]));
//    }

//    vector<Menu<Complex>::Menu_option> options_edit;
//    for (unsigned i=0; i<ordered.size(); i++){
//        index='1'+char(i);

//        options_edit.push_back(Menu<Complex>::Menu_option('1'+char(i), &Complex::edit, "Complex "+index,  ordered[i]));
//    }




//    Menu<Complex> menu_get(options_get, 'q', "Show Complex");
//    Menu<Complex> menu_edit(options_edit, 'q', "Edit Complex");


//    vector<Menu<Menu<Complex>>::Menu_option> options_main;
//    options_main.push_back(Menu<Menu<Complex>>::Menu_option('1', &Menu<Complex>::run, "GET", &menu_get));
//    options_main.push_back(Menu<Menu<Complex>>::Menu_option('2', &Menu<Complex>::run, "EDIT", &menu_edit));



//    Menu<Menu<Complex>> menu_main(options_main, 'q', "MAIN MENU");
//    menu_main.run();
}


void option1 ()
{
    cout<<"Option 1 selected"<<endl;
}

void option2 ()
{
    cout<<"Option 2 selected"<<endl;
}
