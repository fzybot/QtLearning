#include "quitwidget.h"
#include <QPushButton>
#include <QApplication>

QuitWidget::QuitWidget(QWidget *parent)
    : QWidget(parent)
{

    QPushButton *quitBtn = new QPushButton("Quit", this);
    connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}

QuitWidget::~QuitWidget()
{
}
