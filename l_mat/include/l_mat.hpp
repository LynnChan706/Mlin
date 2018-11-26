/*////////////////////////////////////////////////////////////////////////////
 *A simple matrix named l_mat
 *
 *
 *
//lynn chan */

#include <vector>
#include <memory>
#include <qdebug.h>
#include <QDateTime>
#define LogInfo  qDebug()<<"["<<(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")).toStdString().c_str() <<  "]" << __LINE__<<__FUNCTION__<<" : "

typedef unsigned int l_uint;

using namespace std;
namespace lynn {

struct m_size
{
    m_size(l_uint r,l_uint c) {_r=r;_c=c;}
    l_uint _r;
    l_uint _c;
};


template<typename T>class l_Mat
{
public:
    typedef T value_type;
    typedef typename std::vector<T>::size_type l_size_type;
    typedef typename std::vector<std::vector<T>>::size_type l_v_size_type;
    l_Mat();
    l_Mat(l_uint r,l_uint c,T d)
    {
        std::vector<T> _b(c,d);
        _pd=std::make_shared<std::vector<std::vector<T>>>(r,_b);
    }
    l_v_size_type size() const {return _pd->size();}
    m_size size_m() const{return m_size(_pd->size(),_pd->at(0)->size());}

    std::vector<T> & operator[](l_v_size_type idx) {return _pd->at(idx);}
    l_Mat<double> operator*(l_Mat<T> & _m)
    {
        l_Mat<double> _mat(size_m()._c,size_m()._r,0);
        return _mat;
    }


private:
    std::shared_ptr<std::vector<std::vector<T>>> _pd;

};

}

typedef lynn::l_Mat<int> l_Mati;
typedef lynn::l_Mat<double> l_Matd;
