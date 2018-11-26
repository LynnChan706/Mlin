#include <QCoreApplication>
#include "lmat.hpp"

using namespace lynn;

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    lynn::lMat<int> li_mat(5,4,3.5);
    lynn::lMat<int> li_mat1(5,4,2.5);
    li_mat[0][0]=7;
    lMatd mat_2=li_mat*li_mat1;
    LogInfo<<li_mat.size()<<" | "<<li_mat[0][0]<<" end";
    while (cin.get()) {
        LogInfo<<"quit";
        return 0;
    }
//    return a.exec();
}
