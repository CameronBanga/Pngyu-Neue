/********************************************************************************
** Form generated from reading UI file 'pngyumainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PNGYUMAINWINDOW_H
#define UI_PNGYUMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "spinnerwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PngyuMainWindow
{
public:
    QAction *action_preferences;
    QAction *action_quit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_16;
    QPushButton *pushButton_exec;
    QPushButton *pushButton_stop_exec;
    QWidget *widget_executing;
    QHBoxLayout *horizontalLayout_5;
    SpinnerWidget *spinner_exec;
    QLabel *label_executing;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_output_option;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_output_option_custom;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_output_filename;
    QGridLayout *gridLayout_10;
    QComboBox *comboBox_output_filename_mode;
    QWidget *widget_custom_output_filename;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_custom_filename;
    QFrame *frame_output_filename;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_output_file_prefix;
    QLabel *label_outoput_original_name;
    QLineEdit *lineEdit_output_file_suffix;
    QGroupBox *groupBox_output_option_other;
    QGridLayout *gridLayout_11;
    QCheckBox *checkBox_overwrite;
    QGroupBox *groupBox_output_directory_mode;
    QGridLayout *gridLayout_9;
    QWidget *widget_other_output_directory;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_output_other_directory;
    QLineEdit *lineEdit_output_directory;
    QToolButton *toolButton_open_output_directory;
    QRadioButton *radioButton_output_same_directory;
    QWidget *widget_output_option_mode;
    QGridLayout *gridLayout_20;
    QToolButton *toolButton_output_option_custom;
    QToolButton *toolButton_output_option_overwrite_original;
    QLabel *label_homepage;
    QGroupBox *groupBox_compress_option;
    QGridLayout *gridLayout_12;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_preview;
    QWidget *widget_compress_option_custom_options;
    QGridLayout *gridLayout_19;
    QWidget *widget_compress_option_sliders;
    QGridLayout *gridLayout_15;
    QFrame *frame_colors;
    QGridLayout *gridLayout_6;
    QSpinBox *spinBox_colors;
    QSlider *horizontalSlider_colors;
    QLabel *label_colors;
    QFrame *frame_speed;
    QGridLayout *gridLayout_5;
    QLabel *label_compress_high_quality;
    QSlider *horizontalSlider_compress_speed;
    QLabel *label_compress_high_speed;
    QWidget *widget_compress_option_check_boxes;
    QGridLayout *gridLayout_17;
    QFrame *frame_dithered;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox_dithered;
    QWidget *widget_compress_option_mode;
    QGridLayout *gridLayout_18;
    QToolButton *toolButton_compress_option_default;
    QToolButton *toolButton_compress_option_custom;
    QWidget *widget_compress_option_row_1;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_filelist;
    QGridLayout *gridLayout_8;
    QToolButton *toolButton_add_file;
    QPushButton *pushButton_filelist_clear;
    QWidget *widget_file_appending;
    QHBoxLayout *horizontalLayout_4;
    SpinnerWidget *spinner_file_append;
    QLabel *label_file_appending;
    QPushButton *pushButton_stop_file_appending;
    QTableWidget *tableWidget_filelist;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QMenu *menuPngyu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup_compres_option_mode;
    QButtonGroup *buttonGroup_output_option_mode;
    QButtonGroup *buttonGroup_output_directory_mode;

    void setupUi(QMainWindow *PngyuMainWindow)
    {
        if (PngyuMainWindow->objectName().isEmpty())
            PngyuMainWindow->setObjectName("PngyuMainWindow");
        PngyuMainWindow->resize(800, 673);
        PngyuMainWindow->setMinimumSize(QSize(935, 750));
        PngyuMainWindow->setAcceptDrops(true);
        PngyuMainWindow->setStyleSheet(QString::fromUtf8("/* Modern macOS buttons */\n"
"QPushButton {\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 10px 16px;\n"
"    font-size: 13px;\n"
"    font-weight: 500;\n"
"    background-color: palette(button);\n"
"    color: palette(button-text);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: palette(midlight);\n"
"}\n"
"\n"
"QPushButton#pushButton_exec {\n"
"    background-color: #007AFF;\n"
"    color: white;\n"
"    font-weight: 600;\n"
"    padding: 12px 24px;\n"
"}\n"
"\n"
"QPushButton#pushButton_exec:hover {\n"
"    background-color: #0051D5;\n"
"}\n"
"\n"
"QPushButton#pushButton_stop_exec {\n"
"    background-color: #FF3B30;\n"
"    color: white;\n"
"    font-weight: 600;\n"
"    padding: 12px 24px;\n"
"}\n"
"\n"
"QPushButton#pushButton_preview {\n"
"    background-color: #007AFF;\n"
"    color: white;\n"
"    font-weight: 600;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"\n"
"QFrame#frame_speed,\n"
"QFrame#frame_dithered,\n"
"QFrame#frame_colors,\n"
"QFrame#frame_output_filename,\n"
""
                        "QFrame#frame_ie6\n"
"{\n"
"    border: 1px solid rgba(127,127,127,63);\n"
"    border-radius: 5px;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"/* Modern segmented controls */\n"
"QToolButton {\n"
"    border: 1px solid palette(mid);\n"
"    padding: 8px 16px;\n"
"    background-color: palette(button);\n"
"    color: palette(button-text);\n"
"    font-size: 13px;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    background-color: #007AFF;\n"
"    color: white;\n"
"    border-color: #007AFF;\n"
"}\n"
"\n"
"QToolButton:hover:!checked {\n"
"    background-color: palette(midlight);\n"
"}\n"
"\n"
"QToolButton#toolButton_compress_option_default,\n"
"QToolButton#toolButton_output_option_overwrite_original {\n"
"    border-top-left-radius: 8px;\n"
"    border-bottom-left-radius: 8px;\n"
"    border-right: none;\n"
"}\n"
"\n"
"/*middle*/\n"
"QToolButton#toolButton_background_black\n"
"{\n"
"  border-style: outset;\n"
"  border : 1px solid rgb(127,127,127,127);\n"
"  border-radius : 0px;\n"
"  padding: 3px;"
                        "\n"
"  background : qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0,\n"
"    stop:0 rgba(127, 127, 127, 64), stop:1 rgba(255, 255, 255, 100));\n"
"}\n"
"\n"
"QToolButton#toolButton_compress_option_custom,\n"
"QToolButton#toolButton_output_option_custom {\n"
"    border-top-right-radius: 8px;\n"
"    border-bottom-right-radius: 8px;\n"
"    border-left: none;\n"
"}\n"
"\n"
"/* Modern table styling */\n"
"QTableWidget {\n"
"    background-color: palette(base);\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    selection-background-color: palette(highlight);\n"
"    selection-color: palette(highlighted-text);\n"
"    font-size: 13px;\n"
"    alternate-background-color: palette(alternate-base);\n"
"    gridline-color: palette(mid);\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 10px 8px;\n"
"    border: none;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: palette(button);\n"
"    color: palette(button-text);\n"
"    padding: 10px 8px;\n"
"    border: none;\n"
"    border-right"
                        ": 1px solid rgba(128, 128, 128, 0.3);\n"
"    font-weight: 600;\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QHeaderView::section:last {\n"
"    border-right: none;\n"
"}\n"
"\n"
"/* Modern text fields */\n"
"QLineEdit {\n"
"    border: 1px solid rgba(0, 0, 0, 0.1);\n"
"    border-radius: 8px;\n"
"    padding: 8px 12px;\n"
"    background-color: palette(base);\n"
"    color: palette(text);\n"
"    font-size: 13px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007AFF;\n"
"    border-width: 2px;\n"
"}\n"
"\n"
"QLineEdit[drp_enabled=\"true\"] {\n"
"    background-color: #007AFF;\n"
"    color: white;\n"
"    border-color: #007AFF;\n"
"}\n"
"\n"
"/* Modern labels */\n"
"QLabel {\n"
"    color: palette(text);\n"
"    font-size: 13px;\n"
"}\n"
"\n"
"QLabel#label_drop_here {\n"
"    background-color: palette(base);\n"
"    color: palette(mid);\n"
"    font-size: 15px;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"/* Status colors */\n"
"QLabel#label_current_saved_size {\n"
"    color: palette(mid);\n"
"    font-size:"
                        " 12px;\n"
"}\n"
"\n"
"QLabel#label_current_saved_size[color_positive=\"true\"] {\n"
"    color: #30D158;\n"
"}\n"
"\n"
"QLabel#label_current_saved_size[color_negative=\"true\"] {\n"
"    color: #FF453A;\n"
"}\n"
"\n"
"/* Modern frames */\n"
"QFrame#frame_speed,\n"
"QFrame#frame_dithered,\n"
"QFrame#frame_colors,\n"
"QFrame#frame_output_filename,\n"
"QFrame#frame_ie6 {\n"
"    border: 1px solid rgba(0, 0, 0, 0.08);\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    background-color: rgba(0, 0, 0, 0.02);\n"
"}\n"
"\n"
"/* Add file button - specific styling to override general QToolButton */\n"
"QToolButton#toolButton_add_file {\n"
"    border: 1px solid rgba(0, 0, 0, 0.1) !important;\n"
"    border-radius: 6px !important;\n"
"    background-color: palette(button) !important;\n"
"    color: #007AFF !important;\n"
"    font-weight: 600 !important;\n"
"    font-size: 16px !important;\n"
"    padding: 2px !important;\n"
"}\n"
"\n"
"QToolButton#toolButton_add_file:hover {\n"
"    background-color: palette(mid"
                        "light) !important;\n"
"    color: #0051D5 !important;\n"
"}\n"
"\n"
"QToolButton#toolButton_add_file:pressed {\n"
"    background-color: palette(mid) !important;\n"
"    color: #003D82 !important;\n"
"}\n"
"\n"
"QToolButton#toolButton_add_file:checked {\n"
"    background-color: palette(button) !important;\n"
"    color: #007AFF !important;\n"
"}\n"
"\n"
"/* Clear button - adaptive light/dark mode styling */\n"
"QPushButton#pushButton_filelist_clear {\n"
"    border: 1px solid palette(mid);\n"
"    border-radius: 6px;\n"
"    background-color: palette(button);\n"
"    color: palette(button-text);\n"
"    padding: 4px 8px;\n"
"}\n"
"\n"
"QPushButton#pushButton_filelist_clear:hover {\n"
"    background-color: palette(midlight);\n"
"    border-color: palette(dark);\n"
"}\n"
"\n"
"QPushButton#pushButton_filelist_clear:pressed {\n"
"    background-color: palette(mid);\n"
"    color: palette(bright-text);\n"
"}"));
        action_preferences = new QAction(PngyuMainWindow);
        action_preferences->setObjectName("action_preferences");
        action_quit = new QAction(PngyuMainWindow);
        action_quit->setObjectName("action_quit");
        centralWidget = new QWidget(PngyuMainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(20, 20, 20, 20);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(centralWidget);
        widget->setObjectName("widget");
        gridLayout_16 = new QGridLayout(widget);
        gridLayout_16->setSpacing(4);
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        gridLayout_16->setObjectName("gridLayout_16");
        pushButton_exec = new QPushButton(widget);
        pushButton_exec->setObjectName("pushButton_exec");
        pushButton_exec->setMinimumSize(QSize(180, 40));
        pushButton_exec->setMaximumSize(QSize(180, 16777215));

        gridLayout_16->addWidget(pushButton_exec, 0, 6, 1, 1);

        pushButton_stop_exec = new QPushButton(widget);
        pushButton_stop_exec->setObjectName("pushButton_stop_exec");
        pushButton_stop_exec->setMinimumSize(QSize(180, 40));
        pushButton_stop_exec->setMaximumSize(QSize(180, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/stop.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_stop_exec->setIcon(icon);

        gridLayout_16->addWidget(pushButton_stop_exec, 0, 5, 1, 1);

        widget_executing = new QWidget(widget);
        widget_executing->setObjectName("widget_executing");
        horizontalLayout_5 = new QHBoxLayout(widget_executing);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        spinner_exec = new SpinnerWidget(widget_executing);
        spinner_exec->setObjectName("spinner_exec");
        spinner_exec->setMinimumSize(QSize(20, 20));
        spinner_exec->setMaximumSize(QSize(20, 20));

        horizontalLayout_5->addWidget(spinner_exec);

        label_executing = new QLabel(widget_executing);
        label_executing->setObjectName("label_executing");

        horizontalLayout_5->addWidget(label_executing);


        gridLayout_16->addWidget(widget_executing, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        pushButton_stop_exec->raise();
        pushButton_exec->raise();
        widget_executing->raise();

        gridLayout->addWidget(widget, 7, 0, 1, 5);

        groupBox_output_option = new QGroupBox(centralWidget);
        groupBox_output_option->setObjectName("groupBox_output_option");
        gridLayout_2 = new QGridLayout(groupBox_output_option);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(6, 4, 6, 4);
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        widget_output_option_custom = new QWidget(groupBox_output_option);
        widget_output_option_custom->setObjectName("widget_output_option_custom");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_output_option_custom->sizePolicy().hasHeightForWidth());
        widget_output_option_custom->setSizePolicy(sizePolicy);
        gridLayout_13 = new QGridLayout(widget_output_option_custom);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        gridLayout_13->setObjectName("gridLayout_13");
        gridLayout_13->setVerticalSpacing(4);
        groupBox_output_filename = new QGroupBox(widget_output_option_custom);
        groupBox_output_filename->setObjectName("groupBox_output_filename");
        groupBox_output_filename->setFlat(true);
        gridLayout_10 = new QGridLayout(groupBox_output_filename);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(6, 6, 6, 6);
        gridLayout_10->setObjectName("gridLayout_10");
        comboBox_output_filename_mode = new QComboBox(groupBox_output_filename);
        comboBox_output_filename_mode->addItem(QString());
        comboBox_output_filename_mode->addItem(QString());
        comboBox_output_filename_mode->setObjectName("comboBox_output_filename_mode");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_output_filename_mode->sizePolicy().hasHeightForWidth());
        comboBox_output_filename_mode->setSizePolicy(sizePolicy1);

        gridLayout_10->addWidget(comboBox_output_filename_mode, 0, 0, 1, 3);

        widget_custom_output_filename = new QWidget(groupBox_output_filename);
        widget_custom_output_filename->setObjectName("widget_custom_output_filename");
        horizontalLayout_3 = new QHBoxLayout(widget_custom_output_filename);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_custom_filename = new QLabel(widget_custom_output_filename);
        label_custom_filename->setObjectName("label_custom_filename");

        horizontalLayout_3->addWidget(label_custom_filename);

        frame_output_filename = new QFrame(widget_custom_output_filename);
        frame_output_filename->setObjectName("frame_output_filename");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_output_filename->sizePolicy().hasHeightForWidth());
        frame_output_filename->setSizePolicy(sizePolicy2);
        frame_output_filename->setFrameShape(QFrame::Panel);
        frame_output_filename->setFrameShadow(QFrame::Sunken);
        gridLayout_3 = new QGridLayout(frame_output_filename);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(2, 2, 2, 2);
        gridLayout_3->setObjectName("gridLayout_3");
        lineEdit_output_file_prefix = new QLineEdit(frame_output_filename);
        lineEdit_output_file_prefix->setObjectName("lineEdit_output_file_prefix");
        lineEdit_output_file_prefix->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(lineEdit_output_file_prefix, 0, 2, 1, 1);

        label_outoput_original_name = new QLabel(frame_output_filename);
        label_outoput_original_name->setObjectName("label_outoput_original_name");

        gridLayout_3->addWidget(label_outoput_original_name, 0, 3, 1, 1);

        lineEdit_output_file_suffix = new QLineEdit(frame_output_filename);
        lineEdit_output_file_suffix->setObjectName("lineEdit_output_file_suffix");

        gridLayout_3->addWidget(lineEdit_output_file_suffix, 0, 4, 1, 1);


        horizontalLayout_3->addWidget(frame_output_filename);


        gridLayout_10->addWidget(widget_custom_output_filename, 1, 0, 1, 3);


        gridLayout_13->addWidget(groupBox_output_filename, 1, 0, 1, 1);

        groupBox_output_option_other = new QGroupBox(widget_output_option_custom);
        groupBox_output_option_other->setObjectName("groupBox_output_option_other");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_output_option_other->sizePolicy().hasHeightForWidth());
        groupBox_output_option_other->setSizePolicy(sizePolicy3);
        groupBox_output_option_other->setFlat(true);
        gridLayout_11 = new QGridLayout(groupBox_output_option_other);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(6, 6, 6, 6);
        gridLayout_11->setObjectName("gridLayout_11");
        checkBox_overwrite = new QCheckBox(groupBox_output_option_other);
        checkBox_overwrite->setObjectName("checkBox_overwrite");

        gridLayout_11->addWidget(checkBox_overwrite, 0, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_output_option_other, 1, 1, 1, 1);

        groupBox_output_directory_mode = new QGroupBox(widget_output_option_custom);
        groupBox_output_directory_mode->setObjectName("groupBox_output_directory_mode");
        groupBox_output_directory_mode->setFlat(true);
        gridLayout_9 = new QGridLayout(groupBox_output_directory_mode);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(6, 6, 6, 6);
        gridLayout_9->setObjectName("gridLayout_9");
        widget_other_output_directory = new QWidget(groupBox_output_directory_mode);
        widget_other_output_directory->setObjectName("widget_other_output_directory");
        horizontalLayout_2 = new QHBoxLayout(widget_other_output_directory);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButton_output_other_directory = new QRadioButton(widget_other_output_directory);
        buttonGroup_output_directory_mode = new QButtonGroup(PngyuMainWindow);
        buttonGroup_output_directory_mode->setObjectName("buttonGroup_output_directory_mode");
        buttonGroup_output_directory_mode->addButton(radioButton_output_other_directory);
        radioButton_output_other_directory->setObjectName("radioButton_output_other_directory");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(radioButton_output_other_directory->sizePolicy().hasHeightForWidth());
        radioButton_output_other_directory->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(radioButton_output_other_directory);

        lineEdit_output_directory = new QLineEdit(widget_other_output_directory);
        lineEdit_output_directory->setObjectName("lineEdit_output_directory");

        horizontalLayout_2->addWidget(lineEdit_output_directory);

        toolButton_open_output_directory = new QToolButton(widget_other_output_directory);
        toolButton_open_output_directory->setObjectName("toolButton_open_output_directory");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/folder.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButton_open_output_directory->setIcon(icon1);

        horizontalLayout_2->addWidget(toolButton_open_output_directory);


        gridLayout_9->addWidget(widget_other_output_directory, 1, 1, 1, 1);

        radioButton_output_same_directory = new QRadioButton(groupBox_output_directory_mode);
        buttonGroup_output_directory_mode->addButton(radioButton_output_same_directory);
        radioButton_output_same_directory->setObjectName("radioButton_output_same_directory");
        sizePolicy4.setHeightForWidth(radioButton_output_same_directory->sizePolicy().hasHeightForWidth());
        radioButton_output_same_directory->setSizePolicy(sizePolicy4);
        radioButton_output_same_directory->setChecked(true);

        gridLayout_9->addWidget(radioButton_output_same_directory, 1, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_output_directory_mode, 0, 0, 1, 2);


        gridLayout_2->addWidget(widget_output_option_custom, 1, 0, 2, 2);

        widget_output_option_mode = new QWidget(groupBox_output_option);
        widget_output_option_mode->setObjectName("widget_output_option_mode");
        sizePolicy3.setHeightForWidth(widget_output_option_mode->sizePolicy().hasHeightForWidth());
        widget_output_option_mode->setSizePolicy(sizePolicy3);
        gridLayout_20 = new QGridLayout(widget_output_option_mode);
        gridLayout_20->setSpacing(0);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName("gridLayout_20");
        gridLayout_20->setContentsMargins(0, 0, -1, 0);
        toolButton_output_option_custom = new QToolButton(widget_output_option_mode);
        buttonGroup_output_option_mode = new QButtonGroup(PngyuMainWindow);
        buttonGroup_output_option_mode->setObjectName("buttonGroup_output_option_mode");
        buttonGroup_output_option_mode->addButton(toolButton_output_option_custom);
        toolButton_output_option_custom->setObjectName("toolButton_output_option_custom");
        toolButton_output_option_custom->setMinimumSize(QSize(100, 0));
        toolButton_output_option_custom->setCheckable(true);

        gridLayout_20->addWidget(toolButton_output_option_custom, 0, 1, 1, 1);

        toolButton_output_option_overwrite_original = new QToolButton(widget_output_option_mode);
        buttonGroup_output_option_mode->addButton(toolButton_output_option_overwrite_original);
        toolButton_output_option_overwrite_original->setObjectName("toolButton_output_option_overwrite_original");
        toolButton_output_option_overwrite_original->setMinimumSize(QSize(120, 0));
        toolButton_output_option_overwrite_original->setCheckable(true);
        toolButton_output_option_overwrite_original->setChecked(true);

        gridLayout_20->addWidget(toolButton_output_option_overwrite_original, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_output_option_mode, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_output_option, 5, 0, 1, 5);

        label_homepage = new QLabel(centralWidget);
        label_homepage->setObjectName("label_homepage");
        sizePolicy3.setHeightForWidth(label_homepage->sizePolicy().hasHeightForWidth());
        label_homepage->setSizePolicy(sizePolicy3);
        label_homepage->setTextFormat(Qt::RichText);
        label_homepage->setOpenExternalLinks(true);

        gridLayout->addWidget(label_homepage, 9, 4, 1, 1);

        groupBox_compress_option = new QGroupBox(centralWidget);
        groupBox_compress_option->setObjectName("groupBox_compress_option");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_compress_option->sizePolicy().hasHeightForWidth());
        groupBox_compress_option->setSizePolicy(sizePolicy5);
        gridLayout_12 = new QGridLayout(groupBox_compress_option);
        gridLayout_12->setSpacing(4);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_12->setContentsMargins(6, 4, 6, 4);
        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        pushButton_preview = new QPushButton(groupBox_compress_option);
        pushButton_preview->setObjectName("pushButton_preview");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton_preview->sizePolicy().hasHeightForWidth());
        pushButton_preview->setSizePolicy(sizePolicy6);
        pushButton_preview->setMinimumSize(QSize(160, 40));
        pushButton_preview->setIconSize(QSize(20, 20));
        pushButton_preview->setCheckable(true);

        gridLayout_12->addWidget(pushButton_preview, 1, 2, 1, 2);

        widget_compress_option_custom_options = new QWidget(groupBox_compress_option);
        widget_compress_option_custom_options->setObjectName("widget_compress_option_custom_options");
        sizePolicy5.setHeightForWidth(widget_compress_option_custom_options->sizePolicy().hasHeightForWidth());
        widget_compress_option_custom_options->setSizePolicy(sizePolicy5);
        gridLayout_19 = new QGridLayout(widget_compress_option_custom_options);
        gridLayout_19->setSpacing(4);
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        gridLayout_19->setObjectName("gridLayout_19");
        widget_compress_option_sliders = new QWidget(widget_compress_option_custom_options);
        widget_compress_option_sliders->setObjectName("widget_compress_option_sliders");
        gridLayout_15 = new QGridLayout(widget_compress_option_sliders);
        gridLayout_15->setSpacing(4);
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        gridLayout_15->setObjectName("gridLayout_15");
        frame_colors = new QFrame(widget_compress_option_sliders);
        frame_colors->setObjectName("frame_colors");
        frame_colors->setFrameShape(QFrame::Panel);
        frame_colors->setFrameShadow(QFrame::Sunken);
        gridLayout_6 = new QGridLayout(frame_colors);
        gridLayout_6->setSpacing(4);
        gridLayout_6->setContentsMargins(4, 4, 4, 4);
        gridLayout_6->setObjectName("gridLayout_6");
        spinBox_colors = new QSpinBox(frame_colors);
        spinBox_colors->setObjectName("spinBox_colors");
        spinBox_colors->setMinimum(2);
        spinBox_colors->setMaximum(256);
        spinBox_colors->setValue(256);

        gridLayout_6->addWidget(spinBox_colors, 1, 2, 1, 1);

        horizontalSlider_colors = new QSlider(frame_colors);
        horizontalSlider_colors->setObjectName("horizontalSlider_colors");
        horizontalSlider_colors->setMinimum(0);
        horizontalSlider_colors->setMaximum(7);
        horizontalSlider_colors->setValue(7);
        horizontalSlider_colors->setOrientation(Qt::Horizontal);
        horizontalSlider_colors->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_colors->setTickInterval(1);

        gridLayout_6->addWidget(horizontalSlider_colors, 1, 1, 1, 1);

        label_colors = new QLabel(frame_colors);
        label_colors->setObjectName("label_colors");

        gridLayout_6->addWidget(label_colors, 1, 0, 1, 1);


        gridLayout_15->addWidget(frame_colors, 0, 0, 1, 1);

        frame_speed = new QFrame(widget_compress_option_sliders);
        frame_speed->setObjectName("frame_speed");
        frame_speed->setFrameShape(QFrame::Panel);
        frame_speed->setFrameShadow(QFrame::Sunken);
        gridLayout_5 = new QGridLayout(frame_speed);
        gridLayout_5->setSpacing(3);
        gridLayout_5->setContentsMargins(4, 4, 4, 4);
        gridLayout_5->setObjectName("gridLayout_5");
        label_compress_high_quality = new QLabel(frame_speed);
        label_compress_high_quality->setObjectName("label_compress_high_quality");

        gridLayout_5->addWidget(label_compress_high_quality, 0, 0, 1, 1);

        horizontalSlider_compress_speed = new QSlider(frame_speed);
        horizontalSlider_compress_speed->setObjectName("horizontalSlider_compress_speed");
        horizontalSlider_compress_speed->setMinimum(1);
        horizontalSlider_compress_speed->setMaximum(10);
        horizontalSlider_compress_speed->setValue(3);
        horizontalSlider_compress_speed->setOrientation(Qt::Horizontal);
        horizontalSlider_compress_speed->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_compress_speed->setTickInterval(1);

        gridLayout_5->addWidget(horizontalSlider_compress_speed, 0, 1, 1, 1);

        label_compress_high_speed = new QLabel(frame_speed);
        label_compress_high_speed->setObjectName("label_compress_high_speed");

        gridLayout_5->addWidget(label_compress_high_speed, 0, 2, 1, 1);


        gridLayout_15->addWidget(frame_speed, 0, 1, 1, 1);


        gridLayout_19->addWidget(widget_compress_option_sliders, 0, 0, 1, 2);

        widget_compress_option_check_boxes = new QWidget(widget_compress_option_custom_options);
        widget_compress_option_check_boxes->setObjectName("widget_compress_option_check_boxes");
        gridLayout_17 = new QGridLayout(widget_compress_option_check_boxes);
        gridLayout_17->setSpacing(4);
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        gridLayout_17->setObjectName("gridLayout_17");
        frame_dithered = new QFrame(widget_compress_option_check_boxes);
        frame_dithered->setObjectName("frame_dithered");
        frame_dithered->setFrameShape(QFrame::Panel);
        frame_dithered->setFrameShadow(QFrame::Sunken);
        gridLayout_4 = new QGridLayout(frame_dithered);
        gridLayout_4->setSpacing(4);
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        gridLayout_4->setObjectName("gridLayout_4");
        checkBox_dithered = new QCheckBox(frame_dithered);
        checkBox_dithered->setObjectName("checkBox_dithered");
        checkBox_dithered->setChecked(true);

        gridLayout_4->addWidget(checkBox_dithered, 0, 1, 1, 1);


        gridLayout_17->addWidget(frame_dithered, 0, 0, 1, 1);


        gridLayout_19->addWidget(widget_compress_option_check_boxes, 1, 0, 1, 2);


        gridLayout_12->addWidget(widget_compress_option_custom_options, 4, 0, 2, 4);

        widget_compress_option_mode = new QWidget(groupBox_compress_option);
        widget_compress_option_mode->setObjectName("widget_compress_option_mode");
        sizePolicy3.setHeightForWidth(widget_compress_option_mode->sizePolicy().hasHeightForWidth());
        widget_compress_option_mode->setSizePolicy(sizePolicy3);
        gridLayout_18 = new QGridLayout(widget_compress_option_mode);
        gridLayout_18->setSpacing(0);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName("gridLayout_18");
        gridLayout_18->setContentsMargins(0, 0, -1, 0);
        toolButton_compress_option_default = new QToolButton(widget_compress_option_mode);
        buttonGroup_compres_option_mode = new QButtonGroup(PngyuMainWindow);
        buttonGroup_compres_option_mode->setObjectName("buttonGroup_compres_option_mode");
        buttonGroup_compres_option_mode->addButton(toolButton_compress_option_default);
        toolButton_compress_option_default->setObjectName("toolButton_compress_option_default");
        toolButton_compress_option_default->setMinimumSize(QSize(100, 0));
        toolButton_compress_option_default->setCheckable(true);
        toolButton_compress_option_default->setChecked(true);

        gridLayout_18->addWidget(toolButton_compress_option_default, 0, 0, 1, 1);

        toolButton_compress_option_custom = new QToolButton(widget_compress_option_mode);
        buttonGroup_compres_option_mode->addButton(toolButton_compress_option_custom);
        toolButton_compress_option_custom->setObjectName("toolButton_compress_option_custom");
        toolButton_compress_option_custom->setMinimumSize(QSize(100, 0));
        toolButton_compress_option_custom->setCheckable(true);

        gridLayout_18->addWidget(toolButton_compress_option_custom, 0, 1, 1, 1);


        gridLayout_12->addWidget(widget_compress_option_mode, 1, 0, 2, 1);

        widget_compress_option_row_1 = new QWidget(groupBox_compress_option);
        widget_compress_option_row_1->setObjectName("widget_compress_option_row_1");
        horizontalLayout = new QHBoxLayout(widget_compress_option_row_1);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName("horizontalLayout");

        gridLayout_12->addWidget(widget_compress_option_row_1, 0, 0, 1, 4);


        gridLayout->addWidget(groupBox_compress_option, 0, 0, 1, 5);

        groupBox_filelist = new QGroupBox(centralWidget);
        groupBox_filelist->setObjectName("groupBox_filelist");
        groupBox_filelist->setFlat(true);
        gridLayout_8 = new QGridLayout(groupBox_filelist);
        gridLayout_8->setSpacing(4);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(6, 6, 6, 3);
        toolButton_add_file = new QToolButton(groupBox_filelist);
        toolButton_add_file->setObjectName("toolButton_add_file");
        toolButton_add_file->setMinimumSize(QSize(28, 28));
        toolButton_add_file->setMaximumSize(QSize(28, 28));
        QFont font;
        font.setPointSize(16);
        toolButton_add_file->setFont(font);

        gridLayout_8->addWidget(toolButton_add_file, 3, 0, 1, 1);

        pushButton_filelist_clear = new QPushButton(groupBox_filelist);
        pushButton_filelist_clear->setObjectName("pushButton_filelist_clear");
        sizePolicy4.setHeightForWidth(pushButton_filelist_clear->sizePolicy().hasHeightForWidth());
        pushButton_filelist_clear->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setPointSize(13);
        pushButton_filelist_clear->setFont(font1);

        gridLayout_8->addWidget(pushButton_filelist_clear, 3, 4, 1, 1);

        widget_file_appending = new QWidget(groupBox_filelist);
        widget_file_appending->setObjectName("widget_file_appending");
        horizontalLayout_4 = new QHBoxLayout(widget_file_appending);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        spinner_file_append = new SpinnerWidget(widget_file_appending);
        spinner_file_append->setObjectName("spinner_file_append");
        spinner_file_append->setMinimumSize(QSize(15, 15));
        spinner_file_append->setMaximumSize(QSize(15, 15));

        horizontalLayout_4->addWidget(spinner_file_append);

        label_file_appending = new QLabel(widget_file_appending);
        label_file_appending->setObjectName("label_file_appending");

        horizontalLayout_4->addWidget(label_file_appending);

        pushButton_stop_file_appending = new QPushButton(widget_file_appending);
        pushButton_stop_file_appending->setObjectName("pushButton_stop_file_appending");
        sizePolicy4.setHeightForWidth(pushButton_stop_file_appending->sizePolicy().hasHeightForWidth());
        pushButton_stop_file_appending->setSizePolicy(sizePolicy4);
        pushButton_stop_file_appending->setIcon(icon);

        horizontalLayout_4->addWidget(pushButton_stop_file_appending);


        gridLayout_8->addWidget(widget_file_appending, 3, 1, 1, 1);

        tableWidget_filelist = new QTableWidget(groupBox_filelist);
        tableWidget_filelist->setObjectName("tableWidget_filelist");
        tableWidget_filelist->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_filelist->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_filelist->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_filelist->setShowGrid(false);
        tableWidget_filelist->setSortingEnabled(true);
        tableWidget_filelist->verticalHeader()->setVisible(false);
        tableWidget_filelist->verticalHeader()->setDefaultSectionSize(20);

        gridLayout_8->addWidget(tableWidget_filelist, 1, 0, 1, 5);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer, 3, 3, 1, 1);


        gridLayout->addWidget(groupBox_filelist, 4, 0, 1, 5);

        PngyuMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PngyuMainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 689, 22));
        menuPngyu = new QMenu(menuBar);
        menuPngyu->setObjectName("menuPngyu");
        PngyuMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PngyuMainWindow);
        mainToolBar->setObjectName("mainToolBar");
        PngyuMainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PngyuMainWindow);
        statusBar->setObjectName("statusBar");
        PngyuMainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(toolButton_compress_option_default, toolButton_compress_option_custom);
        QWidget::setTabOrder(toolButton_compress_option_custom, pushButton_preview);
        QWidget::setTabOrder(pushButton_preview, horizontalSlider_colors);
        QWidget::setTabOrder(horizontalSlider_colors, spinBox_colors);
        QWidget::setTabOrder(spinBox_colors, horizontalSlider_compress_speed);
        QWidget::setTabOrder(horizontalSlider_compress_speed, checkBox_dithered);
        QWidget::setTabOrder(checkBox_dithered, tableWidget_filelist);
        QWidget::setTabOrder(tableWidget_filelist, toolButton_add_file);
        QWidget::setTabOrder(toolButton_add_file, pushButton_filelist_clear);
        QWidget::setTabOrder(pushButton_filelist_clear, toolButton_output_option_overwrite_original);
        QWidget::setTabOrder(toolButton_output_option_overwrite_original, toolButton_output_option_custom);
        QWidget::setTabOrder(toolButton_output_option_custom, radioButton_output_same_directory);
        QWidget::setTabOrder(radioButton_output_same_directory, radioButton_output_other_directory);
        QWidget::setTabOrder(radioButton_output_other_directory, lineEdit_output_directory);
        QWidget::setTabOrder(lineEdit_output_directory, toolButton_open_output_directory);
        QWidget::setTabOrder(toolButton_open_output_directory, comboBox_output_filename_mode);
        QWidget::setTabOrder(comboBox_output_filename_mode, lineEdit_output_file_prefix);
        QWidget::setTabOrder(lineEdit_output_file_prefix, lineEdit_output_file_suffix);
        QWidget::setTabOrder(lineEdit_output_file_suffix, checkBox_overwrite);

        menuBar->addAction(menuPngyu->menuAction());
        menuPngyu->addAction(action_preferences);
        menuPngyu->addAction(action_quit);

        retranslateUi(PngyuMainWindow);

        QMetaObject::connectSlotsByName(PngyuMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PngyuMainWindow)
    {
        PngyuMainWindow->setWindowTitle(QCoreApplication::translate("PngyuMainWindow", "Pngyu Neue - PNG & JPEG Optimizer", nullptr));
        action_preferences->setText(QCoreApplication::translate("PngyuMainWindow", "&Preferences", nullptr));
        action_quit->setText(QCoreApplication::translate("PngyuMainWindow", "&Quit", nullptr));
        pushButton_exec->setText(QCoreApplication::translate("PngyuMainWindow", "Compress Start", nullptr));
        pushButton_stop_exec->setText(QCoreApplication::translate("PngyuMainWindow", "Compress Stop", nullptr));
        label_executing->setText(QCoreApplication::translate("PngyuMainWindow", "Now Compressing...", nullptr));
        groupBox_output_option->setTitle(QCoreApplication::translate("PngyuMainWindow", "Output Option", nullptr));
        groupBox_output_filename->setTitle(QCoreApplication::translate("PngyuMainWindow", "Output Filename", nullptr));
        comboBox_output_filename_mode->setItemText(0, QCoreApplication::translate("PngyuMainWindow", "[Original].png/.jpg", nullptr));
        comboBox_output_filename_mode->setItemText(1, QCoreApplication::translate("PngyuMainWindow", "Custom Filename", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_output_filename_mode->setToolTip(QCoreApplication::translate("PngyuMainWindow", "Output filename mode", nullptr));
#endif // QT_CONFIG(tooltip)
        label_custom_filename->setText(QCoreApplication::translate("PngyuMainWindow", "Filename :", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_output_file_prefix->setToolTip(QCoreApplication::translate("PngyuMainWindow", "Input cumtom filename prefix", nullptr));
#endif // QT_CONFIG(tooltip)
        label_outoput_original_name->setText(QCoreApplication::translate("PngyuMainWindow", "+ [Original Name] +", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_output_file_suffix->setToolTip(QCoreApplication::translate("PngyuMainWindow", "Input cumtom filename suffix", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_output_file_suffix->setText(QCoreApplication::translate("PngyuMainWindow", ".png", nullptr));
        groupBox_output_option_other->setTitle(QString());
        checkBox_overwrite->setText(QCoreApplication::translate("PngyuMainWindow", "Overwrite", nullptr));
        groupBox_output_directory_mode->setTitle(QCoreApplication::translate("PngyuMainWindow", "Output Directory", nullptr));
#if QT_CONFIG(tooltip)
        radioButton_output_other_directory->setToolTip(QCoreApplication::translate("PngyuMainWindow", "Save to specified other directory", nullptr));
#endif // QT_CONFIG(tooltip)
        radioButton_output_other_directory->setText(QCoreApplication::translate("PngyuMainWindow", "Other Directory", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_output_directory->setToolTip(QCoreApplication::translate("PngyuMainWindow", "Input output directory or drop it here ...", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_output_directory->setPlaceholderText(QCoreApplication::translate("PngyuMainWindow", "Input output directory or drop it here ...", nullptr));
        toolButton_open_output_directory->setText(QString());
#if QT_CONFIG(tooltip)
        radioButton_output_same_directory->setToolTip(QCoreApplication::translate("PngyuMainWindow", "Save to same as directory that original file exists", nullptr));
#endif // QT_CONFIG(tooltip)
        radioButton_output_same_directory->setText(QCoreApplication::translate("PngyuMainWindow", "Same Directory", nullptr));
        toolButton_output_option_custom->setText(QCoreApplication::translate("PngyuMainWindow", "Custom", nullptr));
        toolButton_output_option_overwrite_original->setText(QCoreApplication::translate("PngyuMainWindow", "Overwrite the original", nullptr));
        label_homepage->setText(QCoreApplication::translate("PngyuMainWindow", "<a href=\"http://nukesaq88.github.io/Pngyu/\" style=\"color: darkgray;\">Home Page</a>", nullptr));
        groupBox_compress_option->setTitle(QCoreApplication::translate("PngyuMainWindow", "Compress Option", nullptr));
        pushButton_preview->setText(QCoreApplication::translate("PngyuMainWindow", "Preview", nullptr));
        label_colors->setText(QCoreApplication::translate("PngyuMainWindow", "Colors (PNG)", nullptr));
        label_compress_high_quality->setText(QCoreApplication::translate("PngyuMainWindow", "High Quality", nullptr));
        label_compress_high_speed->setText(QCoreApplication::translate("PngyuMainWindow", "High Speed", nullptr));
        checkBox_dithered->setText(QCoreApplication::translate("PngyuMainWindow", "Dithered", nullptr));
        toolButton_compress_option_default->setText(QCoreApplication::translate("PngyuMainWindow", "Default", nullptr));
        toolButton_compress_option_custom->setText(QCoreApplication::translate("PngyuMainWindow", "Custom", nullptr));
        groupBox_filelist->setTitle(QCoreApplication::translate("PngyuMainWindow", "Files", nullptr));
        toolButton_add_file->setText(QCoreApplication::translate("PngyuMainWindow", "+", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_filelist_clear->setToolTip(QCoreApplication::translate("PngyuMainWindow", "Clear all files", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_filelist_clear->setText(QCoreApplication::translate("PngyuMainWindow", "\342\234\225 Clear", nullptr));
        label_file_appending->setText(QCoreApplication::translate("PngyuMainWindow", "Adding files...", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_stop_file_appending->setToolTip(QCoreApplication::translate("PngyuMainWindow", "Stop searcing", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_stop_file_appending->setText(QCoreApplication::translate("PngyuMainWindow", "Stop", nullptr));
        menuPngyu->setTitle(QCoreApplication::translate("PngyuMainWindow", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PngyuMainWindow: public Ui_PngyuMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNGYUMAINWINDOW_H
