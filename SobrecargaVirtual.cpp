#include "SobrecargaVirtual.h"

template <typename U>void User<U>::print(ostream &os){
    os<<"IS USER";
}


//-------------------------------------------------

template <typename A> void Administrator<A>::tomaparametro(const A& parametro){
    cout<<parametro<<endl;
}


template <typename A> void Administrator<A>::print(ostream &os){
    os<<"IS ADMIN";
}


//-------------------------------------------------

template <typename S>void Student<S>::tomaparametro(const S& parametro){
    cout<<parametro<<endl;
}


template <typename S> void Student<S>::print(ostream &os){
    os<<"IS STUDENT";
}
