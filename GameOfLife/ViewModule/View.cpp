#include "View.h"

#include <QVBoxLayout>

namespace ViewModule
{

View::View(QWidget *parent) 
 : QMainWindow(parent)
 , field_(new Field())
{
	setMinimumSize(QSize(640, 480));

	setCentralWidget(field_);
}

View::~View()
{}

void View::updateField(const GameModule::Field &field)
{
	
}

} // ViewModule
