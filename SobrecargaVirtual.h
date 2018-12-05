#ifndef SOBRECARGAVIRTUAL_H
#define SOBRECARGAVIRTUAL_H
#include<iostream>

using namespace std;

template<typename U>
class User{
protected:
    virtual void print(ostream &os);
public:
    virtual ~User(){}
    virtual void tomaparametro(const U &parametro)=0;
    friend ostream& operator<<(ostream& os, User* us){
        us->print(os);
        return os;
    }
};



template<typename A>
class Administrator: public User<A>{
public:
     void tomaparametro(const A& parametro);
private:

    void print(ostream &os);
};



template<typename S>
class Student: public User<S>{
public:
    void tomaparametro(const S& parametro);
private:
    void print(ostream& os);
};


#endif // SOBRECARGAVIRTUAL_H
