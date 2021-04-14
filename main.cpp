#include "sudoku_solver.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sudoku_Solver w;
    w.show();
    return a.exec();
}
