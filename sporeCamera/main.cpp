#include "sporeCamera.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	sporeCamera w;
	w.show();
	return a.exec();
}
