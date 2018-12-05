#include "Complex.h"
#include <iostream>
#include "Menu.h"
#include <limits>



Complex::Complex(int r, int i, const std::string& n)
{
    real=r;
    imaginary=i;
    name =n;
}



Complex::Complex(const Complex &c)
{
    real=c.real;
    imaginary=c.imaginary;
    name=c.name;
}



bool Complex::operator==(const Complex &c)const
{
    return (real==c.real && imaginary==c.imaginary)? true:false;
}



const std::string Complex::getcomplex()const
{
    return (std::to_string(real)+"+"+std::to_string(imaginary)+"i");
//    std::cin.ignore(50, '\n');
//    std::cin.get();
    }



void Complex::edit()
{
    std::vector<Menu<Complex>::Menu_option> options;
    options.push_back(Menu<Complex>::Menu_option('1', &Complex::editReal, "Edit Real Part", this));
    options.push_back(Menu<Complex>::Menu_option('2', &Complex::editImaginary, "Edit Imaginary Part", this));
    Menu<Complex> menu(options, 'q', "EDIT");
    menu.run();
}



void Complex::editReal()
{
    //std::string buffer;
    int real;
    do {
       std::cout<<"Enter the new real part or \'q\' to cancel: ";
       std::cin.clear();
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
       std::cin>>std::ws>>real;
    }while(!std::cin.good());
    this->real=real;
}



void Complex::editImaginary()
{
    //std::string buffer;
    int imaginary;
    do {
       std::cout<<"Enter the new imaginary part or \'q\' to cancel: ";
       std::cin.clear();
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
       std::cin>>std::ws>>imaginary;
       //std::istringstream(buffer)>>imaginary;
    }while(!std::cin.good());
    this->imaginary=imaginary;
}



//std::vector<Complex*>& Complex::sortByReal(std::vector<Complex>& vec)
//{
//    bool cont, push, changes;
//    std::vector<Complex*> *ret = new std::vector<Complex*>;
//    do{
//        changes=push=false;
//        for (unsigned i=0; i<vec.size(); i++){
//            cont=true;
//            for(unsigned x= 0; x<ret->size(); x++){
//                if ( vec[i]==*(ret->operator[](x))){
//                    cont=false;
//                }
//            }

//            if (cont){
//                push=true;
//                for (unsigned j=0; j<vec.size(); j++){
//                    cont = true;
//                    for (unsigned k=0; k<ret->size(); k++){
//                        if (vec[j] == *(ret->operator[](k)))
//                            cont=false;
//                    }
//                    if (cont == true){
//                        if(vec[j].real<vec[i].real){
//                            push=false;
//                        }
//                    }
//                }
//                if(push){
//                    ret->push_back(&vec[i]);
//                    changes = true;
//                }
//            }
//        }
//    }while(changes);

//    return *ret;
//}










//std::vector<Complex*>& Complex::sortByImaginary(std::vector<Complex>& vec)
//{
//    bool cont, push, changes;
//    std::vector<Complex*> *ret = new std::vector<Complex*>;
//    do{
//        changes=push=false;
//        for (unsigned i=0; i<vec.size(); i++){
//            cont=true;
//            for(unsigned x= 0; x<ret->size(); x++){
//                if ( vec[i]==*(ret->operator[](x))){
//                    cont=false;
//                }
//            }

//            if (cont){
//                push=true;
//                for (unsigned j=0; j<vec.size(); j++){
//                    cont = true;
//                    for (unsigned k=0; k<ret->size(); k++){
//                        if (vec[j] == *(ret->operator[](k)))
//                            cont=false;
//                    }
//                    if (cont == true){
//                        if(vec[j].imaginary<vec[i].imaginary){
//                            push=false;
//                        }
//                    }
//                }
//                if(push){
//                    ret->push_back(&vec[i]);
//                    changes = true;
//                }
//            }
//        }
//    }while(changes);

//    return *ret;
//}


//Complex::Menu_option::Menu_option(char opt, const std::string t, Complex& obj, Complex::menu_option_handler moh)
//    :Menu::Menu_option(opt, t){

//    object=&obj;
//    foo=moh;
//}



//void Complex::Menu_option::function()
//{
//    (object->*foo)();
//}



void member_function_wraper(Complex& object, Complex::menu_option_handler func){
    (object.*func)();
}





