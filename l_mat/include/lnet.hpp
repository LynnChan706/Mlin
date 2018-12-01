#ifndef LNET_HPP
#define LNET_HPP
//just a simple mlp module

#include "lmat.hpp"

#define le 2.718281828459

template<typename T>
T lpow(T _x,unsigned i)
{
    T y=1;
    for(int j=0;j<i;j++)
    {
        y*=_x;
    }
    return y;
}

template<typename T>
double lsigmoid(T x)
{
    double y=1/(1+1/(double)lpow(le,x));
    return y;
}

template<typename T>
lynn::lMat<T>& jfunction(lynn::lMat<T>& _mat, double tvalue=0)
{
    for(int i=0; i!= _mat.size_m()._r; ++i)
         for(int j=0; j!=_mat.size_m()._c; ++j)
                 _mat[i][j]= _mat[i][j]>tvalue?1:0;
    return _mat;
}

template <typename T>
class lnode
{
public:
    lnode() {}
};


#endif
