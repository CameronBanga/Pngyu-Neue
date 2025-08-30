/********************************************************************************
** Form generated from reading UI file 'pngyuimageoptimintegrationquestiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PNGYUIMAGEOPTIMINTEGRATIONQUESTIONDIALOG_H
#define UI_PNGYUIMAGEOPTIMINTEGRATIONQUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_PngyuImageOptimIntegrationQuestionDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label_message;
    QCheckBox *checkBox_dont_ask_again;

    void setupUi(QDialog *PngyuImageOptimIntegrationQuestionDialog)
    {
        if (PngyuImageOptimIntegrationQuestionDialog->objectName().isEmpty())
            PngyuImageOptimIntegrationQuestionDialog->setObjectName("PngyuImageOptimIntegrationQuestionDialog");
        PngyuImageOptimIntegrationQuestionDialog->resize(297, 107);
        gridLayout = new QGridLayout(PngyuImageOptimIntegrationQuestionDialog);
        gridLayout->setObjectName("gridLayout");
        buttonBox = new QDialogButtonBox(PngyuImageOptimIntegrationQuestionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        label_message = new QLabel(PngyuImageOptimIntegrationQuestionDialog);
        label_message->setObjectName("label_message");

        gridLayout->addWidget(label_message, 0, 0, 1, 1);

        checkBox_dont_ask_again = new QCheckBox(PngyuImageOptimIntegrationQuestionDialog);
        checkBox_dont_ask_again->setObjectName("checkBox_dont_ask_again");

        gridLayout->addWidget(checkBox_dont_ask_again, 2, 0, 1, 1);


        retranslateUi(PngyuImageOptimIntegrationQuestionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PngyuImageOptimIntegrationQuestionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PngyuImageOptimIntegrationQuestionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PngyuImageOptimIntegrationQuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *PngyuImageOptimIntegrationQuestionDialog)
    {
        PngyuImageOptimIntegrationQuestionDialog->setWindowTitle(QCoreApplication::translate("PngyuImageOptimIntegrationQuestionDialog", "Optimize with ImageOptim", nullptr));
        label_message->setText(QCoreApplication::translate("PngyuImageOptimIntegrationQuestionDialog", "Do you want to optimize with ImageOptim?", nullptr));
        checkBox_dont_ask_again->setText(QCoreApplication::translate("PngyuImageOptimIntegrationQuestionDialog", "Don't ask again", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PngyuImageOptimIntegrationQuestionDialog: public Ui_PngyuImageOptimIntegrationQuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNGYUIMAGEOPTIMINTEGRATIONQUESTIONDIALOG_H
