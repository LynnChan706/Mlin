/*////////////////////////////////////////////////////////////////////////////
 *A simple matrix named l_mat
//lynn chan */
#ifndef LMAT_HPP
#define LAMT_HPP

#include <vector>
#include <memory>
#include "gdefine.h"

typedef unsigned int lUint;

//using namespace std;
namespace lynn {

struct m_size
{
    m_size(lUint r,lUint c) {_r=r;_c=c;}
    lUint _r;
    lUint _c;
};


template<typename T>class lMat
{
public:
    typedef T value_type;
    typedef typename std::vector<T>::size_type l_size_type;
    typedef typename std::vector<std::vector<T> >::size_type l_v_size_type;
    lMat();
    lMat(lUint r,lUint c,T d)
    {
        std::vector<T> _b(c,d);
        LogInfo<<"type name "<<typeid(T).name();
        _pd=std::make_shared<std::vector<std::vector<T> > >(r,_b);
    }
    l_v_size_type size() const {return _pd->size();}
    m_size size_m() const{return m_size(_pd->size(),_pd->at(0).size());}

    std::vector<T> & operator[](l_v_size_type idx) {return _pd->at(idx);}
    lMat<double> operator*(lMat<T> & _m)
    {
        lMat<double> _mat(size_m()._c,size_m()._r,0);
        return _mat;
    }

private:
    std::shared_ptr<std::vector<std::vector<T> > > _pd;

};

}

typedef lynn::lMat<int> lMati;
typedef lynn::lMat<double> lMatd;

#endif
