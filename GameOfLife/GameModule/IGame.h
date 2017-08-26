#pragma once

#include "Types.h"

#include <QObject>

namespace GameModule
{

class IGame : public QObject
{
Q_OBJECT
public:
	virtual ~IGame() {}

public slots:
	virtual void step() = 0;
	virtual void run() = 0;
	virtual void stop() = 0;
	virtual void setState(const Cell &cell) = 0;

signals:
	void update(const Field &field);
};

typedef std::shared_ptr<IGame> IGamePtr;

} // GameModule
