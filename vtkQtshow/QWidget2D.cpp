#include "QWidget2D.h"
#include <vtkImageViewer2.h>
#include <vtkRenderer.h>
#include <vtkDICOMImageReader.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkInteractorStyleImage.h>
#include <vtkCamera.h>

QWidget2D::QWidget2D(QWidget* parent, Qt::WindowFlags f)
	:QWidget2D(vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New().GetPointer(), parent, f)
{

}
QWidget2D::QWidget2D(vtkGenericOpenGLRenderWindow* window, QWidget* parent ,
	Qt::WindowFlags f)
	:QVTKOpenGLNativeWidget(window, parent,f)
{
	m_render = vtkSmartPointer<vtkRenderer>::New();
	this->renderWindow()->AddRenderer(m_render);
	m_view2 = vtkSmartPointer<vtkImageViewer2>::New();
}

QWidget2D::~QWidget2D()

{
}

void QWidget2D::showDicom()
{
	auto reader = vtkSmartPointer<vtkDICOMImageReader>::New();
	reader->SetDirectoryName(R"(data/groupData)");
	reader->Update();

	m_view2->SetInputData(reader->GetOutput());
	m_view2->SetRenderer(m_render);
	m_view2->SetRenderWindow(this->renderWindow());
	auto inter = vtkSmartPointer<vtkRenderWindowInteractor>::New();
	auto style = vtkSmartPointer<vtkInteractorStyleImage>::New();
	m_view2->SetupInteractor(inter);
	inter->SetInteractorStyle(style);

	m_render->ResetCamera();
	m_view2->Render();
}

void QWidget2D::viewUpdate()
{
	this->renderWindow()->Render();
}
