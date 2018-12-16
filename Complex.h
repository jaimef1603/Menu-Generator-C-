#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
#include <vector>
#include "Menu.h"

class Complex{

private:
    int real;
    int imaginary;
    std::string name;
public:
    friend class ComplexClass;
    template <typename T> friend class Menu;
    typedef void (Complex::*menu_option_handler)(void);
    Complex(int r=0, int i=0, const std::string& n = std::string());
    Complex(const Complex &c);
    bool operator==(const Complex &c)const;
    const std::string getcomplex()const;
    void edit();
    void editReal();
    void editImaginary();
    void editName();
    static Menu<Complex>::menu_option_member get_the_name();


};







//class Complex::Menu_option: public Menu::Menu_option
//{
//private:
//    Complex* object;
//    Complex::menu_option_handler foo;
//public:
//   Menu_option(char opt, const std::string t, Complex& obj, Complex::menu_option_handler moh);
//   void function();
//};

void member_function_wraper(Complex& object, Complex::Complex::menu_option_handler);
#endif // COMPLEX_H
