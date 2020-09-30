#pragma once

#include <QVTKOpenGLNativeWidget.h>
#include <vtkGenericOpenGLRenderWindow.h>

class QWidget2D
	:public QVTKOpenGLNativeWidget
{
	Q_OBJECT
public:
	QWidget2D(QWidget* parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	QWidget2D(vtkGenericOpenGLRenderWindow* window, QWidget* parent = nullptr,
		Qt::WindowFlags f = Qt::WindowFlags());
	~QWidget2D() override;
};

