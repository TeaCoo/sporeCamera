#include "sporeCamera.h"

sporeCamera::sporeCamera(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.pushButton->setVisible(false);
}

void sporeCamera::menuScan()
{
	ui.stackedWidget->setCurrentIndex(0);
	ui.stackedWidget_2->setCurrentIndex(0);
	ui.mainToolBar->setEnabled(false);
	ui.menu->setEnabled(false);
	ui.menu_2->setEnabled(false);
	ui.menu_3->setEnabled(false);
	ui.menu_5->setEnabled(false);
	ui.menu_6->setEnabled(false);
	ui.actionstart_2->setEnabled(false);
	ui.actionover_2->setEnabled(true);
}

void sporeCamera::backMain()
{
	ui.stackedWidget_3->setCurrentIndex(0);
	ui.pushButton->hide();
}

void sporeCamera::menuStore()
{
	ui.stackedWidget_3->setCurrentIndex(1);
	ui.pushButton->show();
}

void sporeCamera::menuScanOver()
{
	ui.stackedWidget->setCurrentIndex(1);
	ui.stackedWidget_2->setCurrentIndex(1);
	ui.mainToolBar->setEnabled(true);
	ui.menu->setEnabled(true);
	ui.menu_2->setEnabled(true);
	ui.menu_3->setEnabled(true);
	ui.menu_5->setEnabled(true);
	ui.menu_6->setEnabled(true);
	ui.actionstart_2->setEnabled(true);
	ui.actionover_2->setEnabled(false);
}

void sporeCamera::menuCount()
{
	ui.stackedWidget->setCurrentIndex(2);
	ui.stackedWidget_2->setCurrentIndex(2);
	ui.mainToolBar->setEnabled(false);
	ui.menu->setEnabled(false);
	ui.menu_3->setEnabled(false);
	ui.menu_4->setEnabled(false);
	ui.menu_5->setEnabled(false);
	ui.menu_6->setEnabled(false);
	ui.actionstart->setEnabled(false);
	ui.actionover->setEnabled(true);
}

void sporeCamera::menuCountOver()
{
	ui.stackedWidget->setCurrentIndex(1);
	ui.stackedWidget_2->setCurrentIndex(1);
	ui.mainToolBar->setEnabled(true);
	ui.menu->setEnabled(true);
	ui.menu_3->setEnabled(true);
	ui.menu_4->setEnabled(true);
	ui.menu_5->setEnabled(true);
	ui.menu_6->setEnabled(true);
	ui.actionstart->setEnabled(true);
	ui.actionover->setEnabled(false);
}