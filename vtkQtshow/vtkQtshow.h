#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vtkQtshow.h"

class vtkQtshow : public QMainWindow
{
    Q_OBJECT

public:
    vtkQtshow(QWidget *parent = Q_NULLPTR);

private:
    Ui::vtkQtshowClass ui;
};
