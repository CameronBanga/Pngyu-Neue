/********************************************************************************
** Form generated from reading UI file 'pngyupreferencesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PNGYUPREFERENCESDIALOG_H
#define UI_PNGYUPREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PngyuPreferencesDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_buttons;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_apply;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_close;
    QWidget *widget_preference_main;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_general;
    QGridLayout *gridLayout_5;
    QWidget *widget_n_jbs;
    QGridLayout *gridLayout_6;
    QSpinBox *spinBox_n_jobs;
    QLabel *label_n_jobs;
    QWidget *widget_pngquant_path;
    QGridLayout *gridLayout_7;
    QComboBox *comboBox_pngquant_path;
    QLabel *label_pngquant_path;
    QToolButton *toolButton_open_pngquant_location;
    QCheckBox *checkBox_force_execute;
    QGroupBox *groupBox_imageoptim_integration;
    QGridLayout *gridLayout_4;
    QLabel *label_imageoptim_path;
    QLineEdit *lineEdit_imageoptim_location;
    QToolButton *toolButton_open_imageoptim_location;
    QComboBox *comboBox_imageoptim_integration;
    QSpacerItem *verticalSpacer;
    QFrame *line;

    void setupUi(QDialog *PngyuPreferencesDialog)
    {
        if (PngyuPreferencesDialog->objectName().isEmpty())
            PngyuPreferencesDialog->setObjectName("PngyuPreferencesDialog");
        PngyuPreferencesDialog->resize(440, 355);
        gridLayout = new QGridLayout(PngyuPreferencesDialog);
        gridLayout->setObjectName("gridLayout");
        widget_buttons = new QWidget(PngyuPreferencesDialog);
        widget_buttons->setObjectName("widget_buttons");
        gridLayout_2 = new QGridLayout(widget_buttons);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, 3, 3, 3);
        pushButton_apply = new QPushButton(widget_buttons);
        pushButton_apply->setObjectName("pushButton_apply");

        gridLayout_2->addWidget(pushButton_apply, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_ok = new QPushButton(widget_buttons);
        pushButton_ok->setObjectName("pushButton_ok");

        gridLayout_2->addWidget(pushButton_ok, 0, 4, 1, 1);

        pushButton_cancel = new QPushButton(widget_buttons);
        pushButton_cancel->setObjectName("pushButton_cancel");

        gridLayout_2->addWidget(pushButton_cancel, 0, 2, 1, 1);

        pushButton_close = new QPushButton(widget_buttons);
        pushButton_close->setObjectName("pushButton_close");

        gridLayout_2->addWidget(pushButton_close, 0, 3, 1, 1);


        gridLayout->addWidget(widget_buttons, 3, 0, 1, 3);

        widget_preference_main = new QWidget(PngyuPreferencesDialog);
        widget_preference_main->setObjectName("widget_preference_main");
        gridLayout_3 = new QGridLayout(widget_preference_main);
        gridLayout_3->setContentsMargins(3, 3, 3, 3);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox_general = new QGroupBox(widget_preference_main);
        groupBox_general->setObjectName("groupBox_general");
        groupBox_general->setFlat(true);
        gridLayout_5 = new QGridLayout(groupBox_general);
        gridLayout_5->setObjectName("gridLayout_5");
        widget_n_jbs = new QWidget(groupBox_general);
        widget_n_jbs->setObjectName("widget_n_jbs");
        gridLayout_6 = new QGridLayout(widget_n_jbs);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName("gridLayout_6");
        spinBox_n_jobs = new QSpinBox(widget_n_jbs);
        spinBox_n_jobs->setObjectName("spinBox_n_jobs");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox_n_jobs->sizePolicy().hasHeightForWidth());
        spinBox_n_jobs->setSizePolicy(sizePolicy);
        spinBox_n_jobs->setMinimum(1);
        spinBox_n_jobs->setMaximum(8);

        gridLayout_6->addWidget(spinBox_n_jobs, 0, 1, 1, 1);

        label_n_jobs = new QLabel(widget_n_jbs);
        label_n_jobs->setObjectName("label_n_jobs");

        gridLayout_6->addWidget(label_n_jobs, 0, 0, 1, 1);


        gridLayout_5->addWidget(widget_n_jbs, 0, 0, 2, 2);

        widget_pngquant_path = new QWidget(groupBox_general);
        widget_pngquant_path->setObjectName("widget_pngquant_path");
        gridLayout_7 = new QGridLayout(widget_pngquant_path);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_7->setObjectName("gridLayout_7");
        comboBox_pngquant_path = new QComboBox(widget_pngquant_path);
        comboBox_pngquant_path->setObjectName("comboBox_pngquant_path");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_pngquant_path->sizePolicy().hasHeightForWidth());
        comboBox_pngquant_path->setSizePolicy(sizePolicy1);
        comboBox_pngquant_path->setEditable(true);

        gridLayout_7->addWidget(comboBox_pngquant_path, 0, 1, 1, 1);

        label_pngquant_path = new QLabel(widget_pngquant_path);
        label_pngquant_path->setObjectName("label_pngquant_path");

        gridLayout_7->addWidget(label_pngquant_path, 0, 0, 1, 1);

        toolButton_open_pngquant_location = new QToolButton(widget_pngquant_path);
        toolButton_open_pngquant_location->setObjectName("toolButton_open_pngquant_location");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/folder.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButton_open_pngquant_location->setIcon(icon);

        gridLayout_7->addWidget(toolButton_open_pngquant_location, 0, 2, 1, 1);


        gridLayout_5->addWidget(widget_pngquant_path, 2, 0, 1, 2);

        checkBox_force_execute = new QCheckBox(groupBox_general);
        checkBox_force_execute->setObjectName("checkBox_force_execute");

        gridLayout_5->addWidget(checkBox_force_execute, 3, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_general, 1, 0, 1, 1);

        groupBox_imageoptim_integration = new QGroupBox(widget_preference_main);
        groupBox_imageoptim_integration->setObjectName("groupBox_imageoptim_integration");
        groupBox_imageoptim_integration->setFlat(true);
        gridLayout_4 = new QGridLayout(groupBox_imageoptim_integration);
        gridLayout_4->setObjectName("gridLayout_4");
        label_imageoptim_path = new QLabel(groupBox_imageoptim_integration);
        label_imageoptim_path->setObjectName("label_imageoptim_path");

        gridLayout_4->addWidget(label_imageoptim_path, 1, 0, 1, 1);

        lineEdit_imageoptim_location = new QLineEdit(groupBox_imageoptim_integration);
        lineEdit_imageoptim_location->setObjectName("lineEdit_imageoptim_location");

        gridLayout_4->addWidget(lineEdit_imageoptim_location, 1, 1, 1, 1);

        toolButton_open_imageoptim_location = new QToolButton(groupBox_imageoptim_integration);
        toolButton_open_imageoptim_location->setObjectName("toolButton_open_imageoptim_location");
        toolButton_open_imageoptim_location->setIcon(icon);

        gridLayout_4->addWidget(toolButton_open_imageoptim_location, 1, 2, 1, 1);

        comboBox_imageoptim_integration = new QComboBox(groupBox_imageoptim_integration);
        comboBox_imageoptim_integration->addItem(QString());
        comboBox_imageoptim_integration->addItem(QString());
        comboBox_imageoptim_integration->addItem(QString());
        comboBox_imageoptim_integration->setObjectName("comboBox_imageoptim_integration");

        gridLayout_4->addWidget(comboBox_imageoptim_integration, 0, 0, 1, 3);


        gridLayout_3->addWidget(groupBox_imageoptim_integration, 2, 0, 1, 1);


        gridLayout->addWidget(widget_preference_main, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 3);

        line = new QFrame(PngyuPreferencesDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 3);


        retranslateUi(PngyuPreferencesDialog);

        QMetaObject::connectSlotsByName(PngyuPreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PngyuPreferencesDialog)
    {
        PngyuPreferencesDialog->setWindowTitle(QCoreApplication::translate("PngyuPreferencesDialog", "Preferences", nullptr));
        pushButton_apply->setText(QCoreApplication::translate("PngyuPreferencesDialog", "&Apply", nullptr));
        pushButton_apply->setStyleSheet(QCoreApplication::translate("PngyuPreferencesDialog", "QPushButton {\n"
"    background-color: #007AFF;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    font-weight: 600;\n"
"    font-size: 13px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056CC;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004499;\n"
"}", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("PngyuPreferencesDialog", "&OK", nullptr));
        pushButton_ok->setStyleSheet(QCoreApplication::translate("PngyuPreferencesDialog", "QPushButton {\n"
"    background-color: #007AFF;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    font-weight: 600;\n"
"    font-size: 13px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056CC;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004499;\n"
"}", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("PngyuPreferencesDialog", "&Cancel", nullptr));
        pushButton_close->setText(QCoreApplication::translate("PngyuPreferencesDialog", "&Close", nullptr));
        pushButton_close->setStyleSheet(QCoreApplication::translate("PngyuPreferencesDialog", "QPushButton {\n"
"    background-color: #007AFF;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    font-weight: 600;\n"
"    font-size: 13px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056CC;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004499;\n"
"}", nullptr));
        groupBox_general->setTitle(QCoreApplication::translate("PngyuPreferencesDialog", "General", nullptr));
        label_n_jobs->setText(QCoreApplication::translate("PngyuPreferencesDialog", "Compress N files at once", nullptr));
        label_pngquant_path->setText(QCoreApplication::translate("PngyuPreferencesDialog", "pngquatnt location", nullptr));
        toolButton_open_pngquant_location->setText(QString());
        checkBox_force_execute->setText(QCoreApplication::translate("PngyuPreferencesDialog", "Force execute even if saved size was negative", nullptr));
        groupBox_imageoptim_integration->setTitle(QCoreApplication::translate("PngyuPreferencesDialog", "ImageOptim integration", nullptr));
        label_imageoptim_path->setText(QCoreApplication::translate("PngyuPreferencesDialog", "Location", nullptr));
        toolButton_open_imageoptim_location->setText(QString());
        comboBox_imageoptim_integration->setItemText(0, QCoreApplication::translate("PngyuPreferencesDialog", "Ask every time", nullptr));
        comboBox_imageoptim_integration->setItemText(1, QCoreApplication::translate("PngyuPreferencesDialog", "Always enabled", nullptr));
        comboBox_imageoptim_integration->setItemText(2, QCoreApplication::translate("PngyuPreferencesDialog", "Always disabled", nullptr));

    } // retranslateUi

};

namespace Ui {
    class PngyuPreferencesDialog: public Ui_PngyuPreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNGYUPREFERENCESDIALOG_H
