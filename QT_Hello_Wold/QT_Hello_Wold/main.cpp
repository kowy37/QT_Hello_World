#include "qt_hello_wold.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QT_Hello_World w;
	w.show();
	return a.exec();
}
