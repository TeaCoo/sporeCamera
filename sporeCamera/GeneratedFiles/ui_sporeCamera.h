/********************************************************************************
** Form generated from reading UI file 'sporeCamera.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPORECAMERA_H
#define UI_SPORECAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sporeCameraClass
{
public:
    QAction *actionsave;
    QAction *actionprint;
    QAction *actionstart;
    QAction *actionover;
    QAction *actionsnap;
    QAction *actionhistory;
    QAction *actionstart_2;
    QAction *actionover_2;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *amount;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_6;
    QWidget *page_2;
    QWidget *page_5;
    QLabel *label_7;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QLabel *label_4;
    QLabel *amount_2;
    QLabel *label_5;
    QWidget *page_4;
    QStackedWidget *stackedWidget_3;
    QWidget *page_6;
    QOpenGLWidget *openGLWidget;
    QWidget *page_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget;
    QOpenGLWidget *openGLWidget_2;
    QOpenGLWidget *openGLWidget_3;
    QOpenGLWidget *openGLWidget_4;
    QOpenGLWidget *openGLWidget_5;
    QOpenGLWidget *openGLWidget_6;
    QOpenGLWidget *openGLWidget_7;
    QOpenGLWidget *openGLWidget_8;
    QOpenGLWidget *openGLWidget_9;
    QOpenGLWidget *openGLWidget_10;
    QOpenGLWidget *openGLWidget_11;
    QOpenGLWidget *openGLWidget_12;
    QOpenGLWidget *openGLWidget_13;
    QOpenGLWidget *openGLWidget_14;
    QOpenGLWidget *openGLWidget_15;
    QOpenGLWidget *openGLWidget_16;
    QOpenGLWidget *openGLWidget_17;
    QOpenGLWidget *openGLWidget_18;
    QOpenGLWidget *openGLWidget_19;
    QOpenGLWidget *openGLWidget_20;
    QOpenGLWidget *openGLWidget_21;
    QOpenGLWidget *openGLWidget_22;
    QOpenGLWidget *openGLWidget_23;
    QOpenGLWidget *openGLWidget_24;
    QOpenGLWidget *openGLWidget_25;
    QOpenGLWidget *openGLWidget_26;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *sporeCameraClass)
    {
        if (sporeCameraClass->objectName().isEmpty())
            sporeCameraClass->setObjectName(QString::fromUtf8("sporeCameraClass"));
        sporeCameraClass->resize(631, 439);
        actionsave = new QAction(sporeCameraClass);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("ico/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsave->setIcon(icon);
        actionprint = new QAction(sporeCameraClass);
        actionprint->setObjectName(QString::fromUtf8("actionprint"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("ico/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionprint->setIcon(icon1);
        actionstart = new QAction(sporeCameraClass);
        actionstart->setObjectName(QString::fromUtf8("actionstart"));
        actionover = new QAction(sporeCameraClass);
        actionover->setObjectName(QString::fromUtf8("actionover"));
        actionover->setEnabled(false);
        actionsnap = new QAction(sporeCameraClass);
        actionsnap->setObjectName(QString::fromUtf8("actionsnap"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("ico/snap.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsnap->setIcon(icon2);
        actionhistory = new QAction(sporeCameraClass);
        actionhistory->setObjectName(QString::fromUtf8("actionhistory"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("ico/picStore.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionhistory->setIcon(icon3);
        actionstart_2 = new QAction(sporeCameraClass);
        actionstart_2->setObjectName(QString::fromUtf8("actionstart_2"));
        actionover_2 = new QAction(sporeCameraClass);
        actionover_2->setObjectName(QString::fromUtf8("actionover_2"));
        actionover_2->setEnabled(false);
        centralWidget = new QWidget(sporeCameraClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(520, 30, 81, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 50, 131, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(550, 80, 51, 16));
        amount = new QLabel(centralWidget);
        amount->setObjectName(QString::fromUtf8("amount"));
        amount->setGeometry(QRect(490, 80, 51, 16));
        amount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, 99, 561, 121));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 20, 481, 91));
        QFont font;
        font.setPointSize(37);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        label_6->setFont(font);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        label_7 = new QLabel(page_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 20, 481, 91));
        label_7->setFont(font);
        stackedWidget->addWidget(page_5);
        stackedWidget_2 = new QStackedWidget(centralWidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(480, 180, 141, 161));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 10, 151, 20));
        label_4->setBaseSize(QSize(0, 0));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        amount_2 = new QLabel(page_3);
        amount_2->setObjectName(QString::fromUtf8("amount_2"));
        amount_2->setGeometry(QRect(20, 40, 51, 16));
        amount_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 40, 41, 16));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget_2->addWidget(page_4);
        stackedWidget_3 = new QStackedWidget(centralWidget);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(0, 0, 471, 341));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        openGLWidget = new QOpenGLWidget(page_6);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(0, 0, 471, 341));
        stackedWidget_3->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        scrollArea = new QScrollArea(page_7);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 471, 341));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 98, 1000));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 1000));
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 461, 451));
        openGLWidget_2 = new QOpenGLWidget(widget);
        openGLWidget_2->setObjectName(QString::fromUtf8("openGLWidget_2"));
        openGLWidget_2->setGeometry(QRect(0, 0, 81, 61));
        openGLWidget_3 = new QOpenGLWidget(widget);
        openGLWidget_3->setObjectName(QString::fromUtf8("openGLWidget_3"));
        openGLWidget_3->setGeometry(QRect(90, 0, 81, 61));
        openGLWidget_4 = new QOpenGLWidget(widget);
        openGLWidget_4->setObjectName(QString::fromUtf8("openGLWidget_4"));
        openGLWidget_4->setGeometry(QRect(180, 0, 81, 61));
        openGLWidget_5 = new QOpenGLWidget(widget);
        openGLWidget_5->setObjectName(QString::fromUtf8("openGLWidget_5"));
        openGLWidget_5->setGeometry(QRect(270, 0, 81, 61));
        openGLWidget_6 = new QOpenGLWidget(widget);
        openGLWidget_6->setObjectName(QString::fromUtf8("openGLWidget_6"));
        openGLWidget_6->setGeometry(QRect(360, 0, 81, 61));
        openGLWidget_7 = new QOpenGLWidget(widget);
        openGLWidget_7->setObjectName(QString::fromUtf8("openGLWidget_7"));
        openGLWidget_7->setGeometry(QRect(90, 70, 81, 61));
        openGLWidget_8 = new QOpenGLWidget(widget);
        openGLWidget_8->setObjectName(QString::fromUtf8("openGLWidget_8"));
        openGLWidget_8->setGeometry(QRect(180, 70, 81, 61));
        openGLWidget_9 = new QOpenGLWidget(widget);
        openGLWidget_9->setObjectName(QString::fromUtf8("openGLWidget_9"));
        openGLWidget_9->setGeometry(QRect(270, 70, 81, 61));
        openGLWidget_10 = new QOpenGLWidget(widget);
        openGLWidget_10->setObjectName(QString::fromUtf8("openGLWidget_10"));
        openGLWidget_10->setGeometry(QRect(0, 70, 81, 61));
        openGLWidget_11 = new QOpenGLWidget(widget);
        openGLWidget_11->setObjectName(QString::fromUtf8("openGLWidget_11"));
        openGLWidget_11->setGeometry(QRect(360, 70, 81, 61));
        openGLWidget_12 = new QOpenGLWidget(widget);
        openGLWidget_12->setObjectName(QString::fromUtf8("openGLWidget_12"));
        openGLWidget_12->setGeometry(QRect(90, 140, 81, 61));
        openGLWidget_13 = new QOpenGLWidget(widget);
        openGLWidget_13->setObjectName(QString::fromUtf8("openGLWidget_13"));
        openGLWidget_13->setGeometry(QRect(180, 140, 81, 61));
        openGLWidget_14 = new QOpenGLWidget(widget);
        openGLWidget_14->setObjectName(QString::fromUtf8("openGLWidget_14"));
        openGLWidget_14->setGeometry(QRect(270, 140, 81, 61));
        openGLWidget_15 = new QOpenGLWidget(widget);
        openGLWidget_15->setObjectName(QString::fromUtf8("openGLWidget_15"));
        openGLWidget_15->setGeometry(QRect(0, 140, 81, 61));
        openGLWidget_16 = new QOpenGLWidget(widget);
        openGLWidget_16->setObjectName(QString::fromUtf8("openGLWidget_16"));
        openGLWidget_16->setGeometry(QRect(360, 140, 81, 61));
        openGLWidget_17 = new QOpenGLWidget(widget);
        openGLWidget_17->setObjectName(QString::fromUtf8("openGLWidget_17"));
        openGLWidget_17->setGeometry(QRect(90, 210, 81, 61));
        openGLWidget_18 = new QOpenGLWidget(widget);
        openGLWidget_18->setObjectName(QString::fromUtf8("openGLWidget_18"));
        openGLWidget_18->setGeometry(QRect(180, 210, 81, 61));
        openGLWidget_19 = new QOpenGLWidget(widget);
        openGLWidget_19->setObjectName(QString::fromUtf8("openGLWidget_19"));
        openGLWidget_19->setGeometry(QRect(270, 210, 81, 61));
        openGLWidget_20 = new QOpenGLWidget(widget);
        openGLWidget_20->setObjectName(QString::fromUtf8("openGLWidget_20"));
        openGLWidget_20->setGeometry(QRect(0, 210, 81, 61));
        openGLWidget_21 = new QOpenGLWidget(widget);
        openGLWidget_21->setObjectName(QString::fromUtf8("openGLWidget_21"));
        openGLWidget_21->setGeometry(QRect(360, 210, 81, 61));
        openGLWidget_22 = new QOpenGLWidget(widget);
        openGLWidget_22->setObjectName(QString::fromUtf8("openGLWidget_22"));
        openGLWidget_22->setGeometry(QRect(90, 280, 81, 61));
        openGLWidget_23 = new QOpenGLWidget(widget);
        openGLWidget_23->setObjectName(QString::fromUtf8("openGLWidget_23"));
        openGLWidget_23->setGeometry(QRect(180, 280, 81, 61));
        openGLWidget_24 = new QOpenGLWidget(widget);
        openGLWidget_24->setObjectName(QString::fromUtf8("openGLWidget_24"));
        openGLWidget_24->setGeometry(QRect(270, 280, 81, 61));
        openGLWidget_25 = new QOpenGLWidget(widget);
        openGLWidget_25->setObjectName(QString::fromUtf8("openGLWidget_25"));
        openGLWidget_25->setGeometry(QRect(0, 280, 81, 61));
        openGLWidget_26 = new QOpenGLWidget(widget);
        openGLWidget_26->setObjectName(QString::fromUtf8("openGLWidget_26"));
        openGLWidget_26->setGeometry(QRect(360, 280, 81, 61));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(page_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(370, 310, 75, 23));
        pushButton->setInputMethodHints(Qt::ImhNone);
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);
        stackedWidget_3->addWidget(page_7);
        sporeCameraClass->setCentralWidget(centralWidget);
        stackedWidget_3->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        amount->raise();
        stackedWidget_2->raise();
        stackedWidget->raise();
        menuBar = new QMenuBar(sporeCameraClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 631, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu_6 = new QMenu(menuBar);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        sporeCameraClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sporeCameraClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        sporeCameraClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sporeCameraClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        sporeCameraClass->setStatusBar(statusBar);
        toolBar = new QToolBar(sporeCameraClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        sporeCameraClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menuBar->addAction(menu_6->menuAction());
        menu->addAction(actionsave);
        menu->addAction(actionprint);
        menu_2->addAction(actionstart);
        menu_2->addAction(actionover);
        menu_3->addAction(actionsnap);
        menu_4->addAction(actionstart_2);
        menu_4->addAction(actionover_2);
        menu_6->addAction(actionhistory);
        mainToolBar->addAction(actionsave);
        mainToolBar->addAction(actionprint);
        mainToolBar->addAction(actionsnap);
        mainToolBar->addAction(actionhistory);

        retranslateUi(sporeCameraClass);
        QObject::connect(actionstart_2, SIGNAL(triggered()), sporeCameraClass, SLOT(menuScan()));
        QObject::connect(pushButton, SIGNAL(clicked()), sporeCameraClass, SLOT(backMain()));
        QObject::connect(actionhistory, SIGNAL(triggered()), sporeCameraClass, SLOT(menuStore()));
        QObject::connect(actionover_2, SIGNAL(triggered()), sporeCameraClass, SLOT(menuScanOver()));
        QObject::connect(actionstart, SIGNAL(triggered()), sporeCameraClass, SLOT(menuCount()));
        QObject::connect(actionover, SIGNAL(triggered()), sporeCameraClass, SLOT(menuCountOver()));

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(1);
        stackedWidget_3->setCurrentIndex(0);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(sporeCameraClass);
    } // setupUi

    void retranslateUi(QMainWindow *sporeCameraClass)
    {
        sporeCameraClass->setWindowTitle(QCoreApplication::translate("sporeCameraClass", "sporeCamera", nullptr));
        actionsave->setText(QCoreApplication::translate("sporeCameraClass", "\344\277\235\345\255\230", nullptr));
        actionprint->setText(QCoreApplication::translate("sporeCameraClass", "\346\211\223\345\215\260", nullptr));
        actionstart->setText(QCoreApplication::translate("sporeCameraClass", "\345\274\200\345\247\213\350\256\241\346\225\260", nullptr));
        actionover->setText(QCoreApplication::translate("sporeCameraClass", "\345\201\234\346\255\242\350\256\241\346\225\260", nullptr));
        actionsnap->setText(QCoreApplication::translate("sporeCameraClass", "\345\210\233\345\273\272\345\277\253\347\205\247", nullptr));
        actionhistory->setText(QCoreApplication::translate("sporeCameraClass", "\345\233\276\345\203\217\345\272\223", nullptr));
        actionstart_2->setText(QCoreApplication::translate("sporeCameraClass", "\345\274\200\345\247\213\350\257\206\345\210\253", nullptr));
        actionover_2->setText(QCoreApplication::translate("sporeCameraClass", "\345\201\234\346\255\242\350\257\206\345\210\253", nullptr));
        label->setText(QCoreApplication::translate("sporeCameraClass", "\350\256\241\346\225\260\347\273\223\346\236\234", nullptr));
        label_2->setText(QCoreApplication::translate("sporeCameraClass", "\346\240\267\345\223\201\345\202\250\350\227\217\345\255\242\345\255\220\346\225\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("sporeCameraClass", "\344\270\252/g", nullptr));
        amount->setText(QCoreApplication::translate("sporeCameraClass", "0", nullptr));
        label_6->setText(QCoreApplication::translate("sporeCameraClass", "<html><head/><body><p><span style=\" color:#ff0000;\">\346\255\243\345\234\250\350\257\206\345\210\253\345\233\276\345\203\217\343\200\202\343\200\202\343\200\202</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("sporeCameraClass", "<html><head/><body><p><span style=\" color:#ff0000;\">\346\255\243\345\234\250\350\257\206\345\210\253\350\256\241\346\225\260\343\200\202\343\200\202\343\200\202</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("sporeCameraClass", "\350\257\245\345\233\276\344\270\255\345\202\250\350\227\217\345\255\242\345\255\220\346\225\260\357\274\232", nullptr));
        amount_2->setText(QCoreApplication::translate("sporeCameraClass", "0", nullptr));
        label_5->setText(QCoreApplication::translate("sporeCameraClass", "\344\270\252/g", nullptr));
        pushButton->setText(QCoreApplication::translate("sporeCameraClass", "\350\277\224\345\233\236", nullptr));
        menu->setTitle(QCoreApplication::translate("sporeCameraClass", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("sporeCameraClass", "\350\256\241\346\225\260", nullptr));
        menu_3->setTitle(QCoreApplication::translate("sporeCameraClass", "\346\215\225\350\216\267", nullptr));
        menu_4->setTitle(QCoreApplication::translate("sporeCameraClass", "\350\257\206\345\210\253", nullptr));
        menu_5->setTitle(QCoreApplication::translate("sporeCameraClass", "\346\265\213\351\207\217", nullptr));
        menu_6->setTitle(QCoreApplication::translate("sporeCameraClass", "\346\237\245\350\257\242", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("sporeCameraClass", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sporeCameraClass: public Ui_sporeCameraClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPORECAMERA_H
