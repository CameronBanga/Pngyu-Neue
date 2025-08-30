/********************************************************************************
** Form generated from reading UI file 'pngyupreviewwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PNGYUPREVIEWWINDOW_H
#define UI_PNGYUPREVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "basicimageview.h"
#include "spinnerwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PngyuPreviewWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget_background_select;
    QGridLayout *gridLayout_3;
    QToolButton *toolButton_background_checkerboard;
    QToolButton *toolButton_background_black;
    QToolButton *toolButton_background_white;
    QCheckBox *checkBox_show_original;
    QSpacerItem *horizontalSpacer;
    BasicImageView *imageview;
    QPushButton *pushButton_original_size;
    QWidget *widget_zoom;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_zoomout;
    QToolButton *toolButton_zoomin;
    SpinnerWidget *spinner;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup_background_select;

    void setupUi(QMainWindow *PngyuPreviewWindow)
    {
        if (PngyuPreviewWindow->objectName().isEmpty())
            PngyuPreviewWindow->setObjectName("PngyuPreviewWindow");
        PngyuPreviewWindow->resize(417, 302);
        PngyuPreviewWindow->setStyleSheet(QString::fromUtf8("\n"
"/*left*/\n"
"QToolButton#toolButton_background_checkerboard,\n"
"QToolButton#toolButton_zoomout\n"
"{\n"
"  border-style: outset;\n"
"  border : 1px solid rgb(127,127,127,127);\n"
"  border-top-left-radius : 6px;\n"
"  border-bottom-left-radius: 6px;\n"
"  padding: 3px;\n"
"  background : qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0,\n"
"    stop:0 rgba(127, 127, 127, 64), stop:1 rgba(255, 255, 255, 100));\n"
"}\n"
"\n"
"/*middle*/\n"
"QToolButton#toolButton_background_black\n"
"{\n"
"  border-style: outset;\n"
"  border : 1px solid rgb(127,127,127,127);\n"
"  border-radius : 0px;\n"
"  padding: 3px;\n"
"  background : qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0,\n"
"    stop:0 rgba(127, 127, 127, 64), stop:1 rgba(255, 255, 255, 100));\n"
"}\n"
"\n"
"/*right*/\n"
"QToolButton#toolButton_background_white,\n"
"QToolButton#toolButton_zoomin\n"
"{\n"
"  border-style: outset;\n"
"  border : 1px solid rgb(127,127,127,127);\n"
"  border-top-right-radius : 6px;\n"
"  border-bottom-right-radiu"
                        "s: 6px;\n"
"  padding: 3px;\n"
"  background : qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0,\n"
"    stop:0 rgba(127, 127, 127, 64), stop:1 rgba(255, 255, 255, 100));\n"
"}\n"
"\n"
"QToolButton#toolButton_background_checkerboard::checked,\n"
"QToolButton#toolButton_background_black::checked,\n"
"QToolButton#toolButton_background_white::checked,\n"
"QToolButton#toolButton_zoomin::checked,\n"
"QToolButton#toolButton_zoomout::checked\n"
"{\n"
"  border : 1px solid rgb(100,100,100,127);\n"
"  border-style: inset;\n"
"  padding-top : 4px;\n"
"  padding-left : 4px;\n"
"  padding-bottom : 2px;\n"
"  padding-right : 2px;\n"
"  background : qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0,\n"
"    stop:1 rgba(40, 40, 40, 64), stop:0 rgba(127, 127, 127, 64));\n"
"}\n"
"\n"
"QToolButton#toolButton_background_checkerboard::pressed,\n"
"QToolButton#toolButton_background_black::pressed,\n"
"QToolButton#toolButton_background_white::pressed,\n"
"QToolButton#toolButton_zoomin::pressed,\n"
"QToolButton#toolButto"
                        "n_zoomout::pressed\n"
"{ \n"
"  border : 1px solid rgb(80,80,80,127);\n"
"  border-style: inset;\n"
"  padding-top : 4px;\n"
"  padding-left : 4px;\n"
"  padding-bottom : 2px;\n"
"  padding-right : 2px;\n"
"  background : qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0,\n"
"    stop:1 rgba(30, 30, 30, 64), stop:0 rgba(100, 100, 100, 64));\n"
"}\n"
""));
        centralwidget = new QWidget(PngyuPreviewWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName("gridLayout");
        widget_background_select = new QWidget(centralwidget);
        widget_background_select->setObjectName("widget_background_select");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_background_select->sizePolicy().hasHeightForWidth());
        widget_background_select->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(widget_background_select);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName("gridLayout_3");
        toolButton_background_checkerboard = new QToolButton(widget_background_select);
        buttonGroup_background_select = new QButtonGroup(PngyuPreviewWindow);
        buttonGroup_background_select->setObjectName("buttonGroup_background_select");
        buttonGroup_background_select->addButton(toolButton_background_checkerboard);
        toolButton_background_checkerboard->setObjectName("toolButton_background_checkerboard");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/background/checkerboard.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButton_background_checkerboard->setIcon(icon);
        toolButton_background_checkerboard->setIconSize(QSize(20, 20));
        toolButton_background_checkerboard->setCheckable(true);
        toolButton_background_checkerboard->setChecked(true);

        gridLayout_3->addWidget(toolButton_background_checkerboard, 0, 0, 1, 1);

        toolButton_background_black = new QToolButton(widget_background_select);
        buttonGroup_background_select->addButton(toolButton_background_black);
        toolButton_background_black->setObjectName("toolButton_background_black");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/background/black.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButton_background_black->setIcon(icon1);
        toolButton_background_black->setIconSize(QSize(20, 20));
        toolButton_background_black->setCheckable(true);

        gridLayout_3->addWidget(toolButton_background_black, 0, 1, 1, 1);

        toolButton_background_white = new QToolButton(widget_background_select);
        buttonGroup_background_select->addButton(toolButton_background_white);
        toolButton_background_white->setObjectName("toolButton_background_white");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/background/white.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButton_background_white->setIcon(icon2);
        toolButton_background_white->setIconSize(QSize(20, 20));
        toolButton_background_white->setCheckable(true);

        gridLayout_3->addWidget(toolButton_background_white, 0, 2, 1, 1);


        gridLayout->addWidget(widget_background_select, 0, 6, 1, 1);

        checkBox_show_original = new QCheckBox(centralwidget);
        checkBox_show_original->setObjectName("checkBox_show_original");

        gridLayout->addWidget(checkBox_show_original, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        imageview = new BasicImageView(centralwidget);
        imageview->setObjectName("imageview");

        gridLayout->addWidget(imageview, 1, 0, 1, 7);

        pushButton_original_size = new QPushButton(centralwidget);
        pushButton_original_size->setObjectName("pushButton_original_size");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_original_size->sizePolicy().hasHeightForWidth());
        pushButton_original_size->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_original_size, 2, 6, 1, 1);

        widget_zoom = new QWidget(centralwidget);
        widget_zoom->setObjectName("widget_zoom");
        sizePolicy.setHeightForWidth(widget_zoom->sizePolicy().hasHeightForWidth());
        widget_zoom->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget_zoom);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName("horizontalLayout");
        toolButton_zoomout = new QToolButton(widget_zoom);
        toolButton_zoomout->setObjectName("toolButton_zoomout");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/zoomout.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButton_zoomout->setIcon(icon3);
        toolButton_zoomout->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(toolButton_zoomout);

        toolButton_zoomin = new QToolButton(widget_zoom);
        toolButton_zoomin->setObjectName("toolButton_zoomin");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/zoomin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButton_zoomin->setIcon(icon4);
        toolButton_zoomin->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(toolButton_zoomin);


        gridLayout->addWidget(widget_zoom, 0, 3, 1, 1);

        spinner = new SpinnerWidget(centralwidget);
        spinner->setObjectName("spinner");
        spinner->setMinimumSize(QSize(25, 25));
        spinner->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(spinner, 0, 1, 1, 1);

        PngyuPreviewWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(PngyuPreviewWindow);
        statusbar->setObjectName("statusbar");
        PngyuPreviewWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(checkBox_show_original, toolButton_zoomout);
        QWidget::setTabOrder(toolButton_zoomout, toolButton_zoomin);
        QWidget::setTabOrder(toolButton_zoomin, toolButton_background_checkerboard);
        QWidget::setTabOrder(toolButton_background_checkerboard, toolButton_background_black);
        QWidget::setTabOrder(toolButton_background_black, toolButton_background_white);
        QWidget::setTabOrder(toolButton_background_white, imageview);
        QWidget::setTabOrder(imageview, pushButton_original_size);

        retranslateUi(PngyuPreviewWindow);

        QMetaObject::connectSlotsByName(PngyuPreviewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PngyuPreviewWindow)
    {
        PngyuPreviewWindow->setWindowTitle(QCoreApplication::translate("PngyuPreviewWindow", "Preview", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_background_checkerboard->setToolTip(QCoreApplication::translate("PngyuPreviewWindow", "Set checker board pattern background", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_background_checkerboard->setText(QString());
#if QT_CONFIG(tooltip)
        toolButton_background_black->setToolTip(QCoreApplication::translate("PngyuPreviewWindow", "Set black pattern background", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_background_black->setText(QString());
#if QT_CONFIG(tooltip)
        toolButton_background_white->setToolTip(QCoreApplication::translate("PngyuPreviewWindow", "Set white pattern background", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_background_white->setText(QString());
        checkBox_show_original->setText(QCoreApplication::translate("PngyuPreviewWindow", "Show Original", nullptr));
        pushButton_original_size->setText(QCoreApplication::translate("PngyuPreviewWindow", "Original Size (100%)", nullptr));
        toolButton_zoomout->setText(QString());
        toolButton_zoomin->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PngyuPreviewWindow: public Ui_PngyuPreviewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNGYUPREVIEWWINDOW_H
