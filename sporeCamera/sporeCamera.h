#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sporeCamera.h"

class sporeCamera : public QMainWindow
{
	Q_OBJECT

public:
	sporeCamera(QWidget *parent = Q_NULLPTR);

private:
	Ui::sporeCameraClass ui;

private slots:
	void menuScan();				//识别计数
	void menuStore();				//图像库
	void backMain();				//图像库返回
	void menuScanOver();		//识别停止
	void menuCount();			//计数
	void menuCountOver();		//停止计数
};
