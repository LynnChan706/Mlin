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
    lynn::lMat<int> li_mat({{3,4,5},{2,3,4},{4,5,6},{4,5,6}});
    lynn::lMat<int> li_mat1({{3,4,5},{2,3,4},{4,5,6}});
    LogInfo<<li_mat.size_m()._c<<li_mat.size_m()._r;

//    lynn::lMat<int> li_mat(5,4,3.5);
    lMatd mat_2 =li_mat*li_mat1;
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
