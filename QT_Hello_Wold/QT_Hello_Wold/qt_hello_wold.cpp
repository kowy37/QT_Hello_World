#include "qt_hello_wold.h"

QT_Hello_World::QT_Hello_World(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(exit()));
}

QT_Hello_World::~QT_Hello_World()
{

}

void  QT_Hello_World::exit() {
	QApplication::exit();
}