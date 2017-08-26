#include "Field.h"

#include <QDebug>
#include <QPainter>

namespace ViewModule
{

Field::Field(QWidget *parent)
 : QWidget(parent)
{
}

void Field::paintEvent(QPaintEvent *)
{
	QPainter painter(this);
	
	painter.setRenderHint(QPainter::Antialiasing);
	painter.setPen(QPen(Qt::black, 1, Qt::SolidLine));
	
}

void Field::mousePressEvent(QMouseEvent *e)
{
}

} // ViewModule
