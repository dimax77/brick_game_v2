/********************************************************************************
** Form generated from reading UI file 'game_desktop_view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_DESKTOP_VIEW_H
#define UI_GAME_DESKTOP_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameDesktopView
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *CurrLevel;
    QLabel *label_7;
    QLabel *CurrScore;
    QLabel *BestScore;
    QLabel *label_9;
    QLabel *Speed;
    QLabel *label_10;

    void setupUi(QWidget *GameDesktopView)
    {
        if (GameDesktopView->objectName().isEmpty())
            GameDesktopView->setObjectName(QString::fromUtf8("GameDesktopView"));
        GameDesktopView->resize(500, 600);
        GameDesktopView->setMinimumSize(QSize(500, 600));
        GameDesktopView->setMaximumSize(QSize(500, 600));
        gridLayoutWidget_2 = new QWidget(GameDesktopView);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(310, 0, 191, 118));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        CurrLevel = new QLabel(gridLayoutWidget_2);
        CurrLevel->setObjectName(QString::fromUtf8("CurrLevel"));
        QFont font1;
        font1.setPointSize(14);
        CurrLevel->setFont(font1);
        CurrLevel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(CurrLevel, 0, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        CurrScore = new QLabel(gridLayoutWidget_2);
        CurrScore->setObjectName(QString::fromUtf8("CurrScore"));
        CurrScore->setFont(font1);
        CurrScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(CurrScore, 1, 1, 1, 1);

        BestScore = new QLabel(gridLayoutWidget_2);
        BestScore->setObjectName(QString::fromUtf8("BestScore"));
        QFont font2;
        font2.setPointSize(14);
        font2.setKerning(true);
        BestScore->setFont(font2);
        BestScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(BestScore, 2, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        Speed = new QLabel(gridLayoutWidget_2);
        Speed->setObjectName(QString::fromUtf8("Speed"));
        Speed->setFont(font2);
        Speed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Speed, 3, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        gridLayout->setColumnStretch(0, 4);
        gridLayout->setColumnStretch(1, 5);

        retranslateUi(GameDesktopView);

        QMetaObject::connectSlotsByName(GameDesktopView);
    } // setupUi

    void retranslateUi(QWidget *GameDesktopView)
    {
        GameDesktopView->setWindowTitle(QCoreApplication::translate("GameDesktopView", "Form", nullptr));
        label_8->setText(QCoreApplication::translate("GameDesktopView", "SCORE:", nullptr));
        CurrLevel->setText(QString());
        label_7->setText(QCoreApplication::translate("GameDesktopView", "LEVEL:", nullptr));
        CurrScore->setText(QString());
        BestScore->setText(QString());
        label_9->setText(QCoreApplication::translate("GameDesktopView", "BEST SCORE:", nullptr));
        Speed->setText(QString());
        label_10->setText(QCoreApplication::translate("GameDesktopView", "SPEED:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameDesktopView: public Ui_GameDesktopView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_DESKTOP_VIEW_H
