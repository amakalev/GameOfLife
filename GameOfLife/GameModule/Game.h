#pragma once

#include "Types.h"

#include <QObject>

#include <memory>

namespace GameModule {

class Game final : public QObject
{
Q_OBJECT
public:
	Game();
	~Game();

public slots:
	void step();
	void run();
	void stop();
	void setState(const Cell &cell);

signals:
	void updateField(const Field &field);
};

typedef std::shared_ptr<Game> GamePtr;

}
