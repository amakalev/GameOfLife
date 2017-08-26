#pragma once

#include "../GameModule/Types.h"

#include <QMainWindow>

#include <memory>

namespace ViewModule
{

class IView : public QMainWindow
{
Q_OBJECT
public slots:
	virtual void update(const GameModule::Field &field) = 0;

signals:
	void step();
	void run();
	void stop();
};

typedef std::shared_ptr<IView> IViewPtr;

} // ViewModule
