#include "QWidget2D.h"

QWidget2D::QWidget2D(QWidget* parent, Qt::WindowFlags f)
	:QWidget2D(vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New().GetPointer(), parent, f)
{

}
QWidget2D::QWidget2D(vtkGenericOpenGLRenderWindow* window, QWidget* parent ,
	Qt::WindowFlags f)
	:QVTKOpenGLNativeWidget(window, parent,f)
{

}

QWidget2D::~QWidget2D()

{
}
