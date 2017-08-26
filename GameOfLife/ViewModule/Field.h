#pragma once

#include <QWidget>

#include <memory>

namespace ViewModule
{

class Field : public QWidget
{
Q_OBJECT
public:
	explicit Field(QWidget *parent = 0);

private:
	void paintEvent(QPaintEvent *);
	void mousePressEvent(QMouseEvent *e);
};

} // ViewModule
