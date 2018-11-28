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
    lMat():_pd(nullptr){}

    lMat(std::initializer_list<std::initializer_list<T>> _d)
    {
        auto it =_d.begin();
        std::vector<std::vector<T>> _fv;
        for(;it!=_d.end();it++)
        {
            std::vector<T> _v=*it;
            _fv.push_back(_v);
        }
        _pd=std::make_shared<std::vector<std::vector<T>>>(_fv);
    }
    lMat(lUint r,lUint c,T d)
    {
        std::vector<T> _b(c,d);
        LogInfo<<"type name "<<typeid(T).name();
        _pd=std::make_shared<std::vector<std::vector<T>>>(r,_b);
    }
    l_v_size_type size() const{ return _pd==nullptr?0:_pd->size();}
    m_size size_m() const{return m_size(_pd->size(),_pd->at(0).size());}

    std::vector<T> & operator[](l_v_size_type idx) {return _pd->at(idx);}
//    template<typename _T>  lMat<double> operator*(lMat<_T> & _m)
//    {
//        lMat<double> _mat(size_m()._c,size_m()._r,0);
//        for(int i=0;i<size_m()._c;i++)
//        {
//            for(int j=0;j<size_m()._r;j++)
//            {
//                _mat[i][j]=_pd->at(i)[j]*_m[i][j];
//            }
//        }
//        return _mat;
//    }

    template<typename _T>  lMat<double> operator*(lMat<_T> & _m)
    {
        if(size_m()._c!=_m.size_m()._r)
        {
            throw "mat multiple error";
        }
        lMat<double> _mat(size_m()._r,_m.size_m()._c,0);
        for(int i=0; i!=_mat.size_m()._r; ++i)
             for(int j=0; j!=_mat.size_m()._c; ++j)
                 for(int k=0; k!=size_m()._c; ++k)
                     _mat[i][j]+=_pd->at(i)[k]*_m[k][j];
        return _mat;
    }
private:
    std::shared_ptr<std::vector<std::vector<T>>> _pd;
};

}

typedef lynn::lMat<int> lMati;
typedef lynn::lMat<double> lMatd;

#endif
