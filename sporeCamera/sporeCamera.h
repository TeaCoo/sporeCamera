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
	void menuScan();				//ʶ�����
	void menuStore();				//ͼ���
	void backMain();				//ͼ��ⷵ��
	void menuScanOver();		//ʶ��ֹͣ
	void menuCount();			//����
	void menuCountOver();		//ֹͣ����
};
