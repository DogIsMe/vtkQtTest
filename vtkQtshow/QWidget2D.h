#pragma once

#include <QVTKOpenGLNativeWidget.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkSmartPointer.h>

class vtkActor;
class vtkRenderer;
class vtkImageViewer2;
class QWidget2D
	:public QVTKOpenGLNativeWidget
{
	Q_OBJECT
public:
	QWidget2D(QWidget* parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	QWidget2D(vtkGenericOpenGLRenderWindow* window, QWidget* parent = nullptr,
		Qt::WindowFlags f = Qt::WindowFlags());
	~QWidget2D() override;

	void showDicom();
	void viewUpdate();
private:
	vtkSmartPointer<vtkActor> m_actor;
	vtkSmartPointer<vtkRenderer> m_render;
	vtkSmartPointer<vtkImageViewer2> m_view2;
};

