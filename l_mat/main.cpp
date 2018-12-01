#include <QCoreApplication>
#include "lmat.hpp"
#include "lnet.hpp"
using namespace lynn;

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

//    LogInfo<<lsigmoid<int>(1);
//    LogInfo<<lpow<int>(2,3);
//    auto strtest={{3,4,5},{2,3,4},{4,5,6}};
//    int j=1;
//     LogInfo<<strtest<<j;
    lMati x({{1},{1}});
    lMati W({{1,1},{1,1}});
    lMati c({{0},{-1}});
    lMati w({{1,-2}});

    lMatd n1=W*x+c;
    lMatd n2=jfunction(n1);
    lMatd y=w*n2;
    LogInfo<<"y: "<<y[0][0];
//    lynn::lMat<int> li_mat1({{3,4,5},{2,3,4},{4,5,6}});
//    lynn::lMat<int> li_mat2({{1,1,1},{1,1,1},{1,1,1}});
//    LogInfo<<li_mat.size_m()._c<<li_mat.size_m()._r;

//    lynn::lMat<int> li_mat(5,4,3.5);
//    lMati mat_2 = jfunction(li_mat);
//    lMati mat_3 =li_mat1+li_mat2;
//    li_mat[0][0]=7;
//    lMatd mat_2=li_mat*li_mat1;
//    LogInfo<<li_mat.size()<<" | "<<li_mat[0][0]<<" end";
//    while (cin.get()) {
//        LogInfo<<"quit";
//        return 0;
//    }
//    return a.exec();
    LogInfo<<"end";
}
