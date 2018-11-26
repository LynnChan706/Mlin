#include <QCoreApplication>
#include "l_mat.hpp"
using namespace lynn;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    LogInfo<<"hello";
    lynn::l_Mat<int> li_mat(5,4,3.5);
    lynn::l_Mat<int> li_mat1(5,4,2.5);
    li_mat[0][0]=7;
    l_Matd mat_2=li_mat*li_mat1;
    LogInfo<<li_mat.size()<<" | "<<li_mat[0][0]<<" end";
    return a.exec();
}
