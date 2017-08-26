#pragma once

#include "GameModule/Types.h"

#include "Field.h"

#include <QMainWindow>

namespace ViewModule
{

class View final : public QMainWindow
{
Q_OBJECT
public:
	explicit View(QWidget *parent = 0);
	~View();

public slots:
	void updateField(const GameModule::Field &field);

signals:
	void step();
	void run();
	void stop();

private:
	Field *field_;
};

typedef std::shared_ptr<View> ViewPtr;

} // ViewModule
