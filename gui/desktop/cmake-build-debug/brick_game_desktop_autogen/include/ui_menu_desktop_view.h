/********************************************************************************
** Form generated from reading UI file 'menu_desktop_view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_DESKTOP_VIEW_H
#define UI_MENU_DESKTOP_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "game_desktop_view.hpp"

QT_BEGIN_NAMESPACE

class Ui_MenuDesktopView
{
public:
    QStackedWidget *stackedWidget;
    QWidget *menu;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *snakeButton;
    QPushButton *tetrisButton;
    QPushButton *exitButton;
    QLabel *label;
    GameDesktopView *game_desktop_view;

    void setupUi(QWidget *MenuDesktopView)
    {
        if (MenuDesktopView->objectName().isEmpty())
            MenuDesktopView->setObjectName(QString::fromUtf8("MenuDesktopView"));
        MenuDesktopView->resize(500, 600);
        MenuDesktopView->setMinimumSize(QSize(500, 600));
        MenuDesktopView->setMaximumSize(QSize(500, 600));
        stackedWidget = new QStackedWidget(MenuDesktopView);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, -1, 500, 600));
        stackedWidget->setMinimumSize(QSize(500, 600));
        stackedWidget->setMaximumSize(QSize(500, 600));
        menu = new QWidget();
        menu->setObjectName(QString::fromUtf8("menu"));
        verticalLayoutWidget = new QWidget(menu);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 290, 221, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        snakeButton = new QPushButton(verticalLayoutWidget);
        snakeButton->setObjectName(QString::fromUtf8("snakeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(snakeButton->sizePolicy().hasHeightForWidth());
        snakeButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(13);
        font.setBold(false);
        snakeButton->setFont(font);

        verticalLayout->addWidget(snakeButton);

        tetrisButton = new QPushButton(verticalLayoutWidget);
        tetrisButton->setObjectName(QString::fromUtf8("tetrisButton"));
        sizePolicy.setHeightForWidth(tetrisButton->sizePolicy().hasHeightForWidth());
        tetrisButton->setSizePolicy(sizePolicy);
        tetrisButton->setFont(font);

        verticalLayout->addWidget(tetrisButton);

        exitButton = new QPushButton(verticalLayoutWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);
        exitButton->setFont(font);

        verticalLayout->addWidget(exitButton);

        label = new QLabel(menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 100, 501, 181));
        QFont font1;
        font1.setPointSize(35);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(menu);
        game_desktop_view = new GameDesktopView();
        game_desktop_view->setObjectName(QString::fromUtf8("game_desktop_view"));
        stackedWidget->addWidget(game_desktop_view);

        retranslateUi(MenuDesktopView);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MenuDesktopView);
    } // setupUi

    void retranslateUi(QWidget *MenuDesktopView)
    {
        MenuDesktopView->setWindowTitle(QCoreApplication::translate("MenuDesktopView", "MenuDesktopView", nullptr));
        snakeButton->setText(QCoreApplication::translate("MenuDesktopView", "SNAKE", nullptr));
        tetrisButton->setText(QCoreApplication::translate("MenuDesktopView", "TETRIS", nullptr));
        exitButton->setText(QCoreApplication::translate("MenuDesktopView", "EXIT", nullptr));
        label->setText(QCoreApplication::translate("MenuDesktopView", "BRICKGAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuDesktopView: public Ui_MenuDesktopView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_DESKTOP_VIEW_H
