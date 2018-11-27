#ifndef LNET_HPP
#define LNET_HPP
//just a simple mlp module

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


template <typename T>
class lnode
{
public:
    lnode() {}
};


#endif
