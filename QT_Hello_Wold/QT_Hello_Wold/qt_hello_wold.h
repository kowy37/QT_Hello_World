#ifndef QT_HELLO_WOLD_H
#define QT_HELLO_WOLD_H

#include <QtWidgets/QMainWindow>
#include "ui_qt_hello_wold.h"

class QT_Hello_World : public QMainWindow
{
	Q_OBJECT

public:
	QT_Hello_World(QWidget *parent = 0);
	~QT_Hello_World();

private:
	Ui::QT_Hello_WoldClass ui;
	private slots:
	void exit();
};

#endif // QT_HELLO_WOLD_H
