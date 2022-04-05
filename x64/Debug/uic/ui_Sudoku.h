/********************************************************************************
** Form generated from reading UI file 'Sudoku.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKU_H
#define UI_SUDOKU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SudokuClass
{
public:
    QWidget *centralWidget;
    QTableWidget *Table;
    QPushButton *Clear;
    QPushButton *Solve;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *SolveSlow;
    QPushButton *Undo_Solve;
    QPushButton *Stop_Recussion;
    QSlider *horizontalSlider;
    QLabel *OutputLabel1_2;
    QLabel *OutputLabel1_3;
    QLabel *OutputLabel1;
    QLabel *ErrorLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SudokuClass)
    {
        if (SudokuClass->objectName().isEmpty())
            SudokuClass->setObjectName(QString::fromUtf8("SudokuClass"));
        SudokuClass->resize(705, 603);
        SudokuClass->setLayoutDirection(Qt::RightToLeft);
        centralWidget = new QWidget(SudokuClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Table = new QTableWidget(centralWidget);
        if (Table->columnCount() < 9)
            Table->setColumnCount(9);
        if (Table->rowCount() < 9)
            Table->setRowCount(9);
        Table->setObjectName(QString::fromUtf8("Table"));
        Table->setGeometry(QRect(40, 30, 451, 451));
        QFont font;
        font.setPointSize(12);
        Table->setFont(font);
        Table->setMouseTracking(false);
        Table->setFrameShadow(QFrame::Plain);
        Table->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Table->setRowCount(9);
        Table->setColumnCount(9);
        Table->horizontalHeader()->setVisible(false);
        Table->horizontalHeader()->setMinimumSectionSize(10);
        Table->horizontalHeader()->setDefaultSectionSize(50);
        Table->horizontalHeader()->setHighlightSections(false);
        Table->verticalHeader()->setVisible(false);
        Table->verticalHeader()->setMinimumSectionSize(10);
        Table->verticalHeader()->setDefaultSectionSize(50);
        Table->verticalHeader()->setHighlightSections(false);
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(40, 490, 75, 24));
        Solve = new QPushButton(centralWidget);
        Solve->setObjectName(QString::fromUtf8("Solve"));
        Solve->setGeometry(QRect(500, 30, 75, 24));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(40, 170, 451, 21));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(40, 320, 451, 21));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(170, 30, 41, 451));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(3);
        line_3->setFrameShape(QFrame::VLine);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(320, 30, 41, 451));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(3);
        line_4->setFrameShape(QFrame::VLine);
        SolveSlow = new QPushButton(centralWidget);
        SolveSlow->setObjectName(QString::fromUtf8("SolveSlow"));
        SolveSlow->setGeometry(QRect(500, 70, 101, 24));
        Undo_Solve = new QPushButton(centralWidget);
        Undo_Solve->setObjectName(QString::fromUtf8("Undo_Solve"));
        Undo_Solve->setGeometry(QRect(390, 490, 101, 24));
        Stop_Recussion = new QPushButton(centralWidget);
        Stop_Recussion->setObjectName(QString::fromUtf8("Stop_Recussion"));
        Stop_Recussion->setGeometry(QRect(610, 70, 91, 24));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(520, 130, 160, 22));
        horizontalSlider->setLayoutDirection(Qt::RightToLeft);
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(50);
        horizontalSlider->setValue(20);
        horizontalSlider->setOrientation(Qt::Horizontal);
        OutputLabel1_2 = new QLabel(centralWidget);
        OutputLabel1_2->setObjectName(QString::fromUtf8("OutputLabel1_2"));
        OutputLabel1_2->setGeometry(QRect(510, 110, 49, 16));
        OutputLabel1_3 = new QLabel(centralWidget);
        OutputLabel1_3->setObjectName(QString::fromUtf8("OutputLabel1_3"));
        OutputLabel1_3->setGeometry(QRect(660, 110, 49, 16));
        OutputLabel1 = new QLabel(centralWidget);
        OutputLabel1->setObjectName(QString::fromUtf8("OutputLabel1"));
        OutputLabel1->setGeometry(QRect(600, 30, 49, 16));
        OutputLabel1->setLayoutDirection(Qt::LeftToRight);
        ErrorLabel = new QLabel(centralWidget);
        ErrorLabel->setObjectName(QString::fromUtf8("ErrorLabel"));
        ErrorLabel->setGeometry(QRect(150, 490, 211, 51));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        ErrorLabel->setFont(font1);
        SudokuClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SudokuClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 705, 22));
        SudokuClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SudokuClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SudokuClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SudokuClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SudokuClass->setStatusBar(statusBar);

        retranslateUi(SudokuClass);

        QMetaObject::connectSlotsByName(SudokuClass);
    } // setupUi

    void retranslateUi(QMainWindow *SudokuClass)
    {
        SudokuClass->setWindowTitle(QCoreApplication::translate("SudokuClass", "Sudoku", nullptr));
        Clear->setText(QCoreApplication::translate("SudokuClass", "Clear", nullptr));
        Solve->setText(QCoreApplication::translate("SudokuClass", "Solve", nullptr));
        SolveSlow->setText(QCoreApplication::translate("SudokuClass", "Show Recursion", nullptr));
        Undo_Solve->setText(QCoreApplication::translate("SudokuClass", "Undo Solve", nullptr));
        Stop_Recussion->setText(QCoreApplication::translate("SudokuClass", "Stop Recursion", nullptr));
        OutputLabel1_2->setText(QCoreApplication::translate("SudokuClass", "Slowest", nullptr));
        OutputLabel1_3->setText(QCoreApplication::translate("SudokuClass", "Fastest", nullptr));
        OutputLabel1->setText(QString());
        ErrorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SudokuClass: public Ui_SudokuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKU_H
