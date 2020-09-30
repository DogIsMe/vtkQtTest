#include "vtkQtshow.h"

vtkQtshow::vtkQtshow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	testShow();
}

void vtkQtshow::testShow()
{
	ui.widget->showDicom();
}

void vtkQtshow::on_pushButton_clicked()
{
	ui.widget->viewUpdate();
}