#pragma once

#include "../IGame.h"
#include "../Types.h"

#include <QObject>

namespace GameModule {

class Game final : public IGame
{
Q_OBJECT
public:
	Game();
	~Game();

public slots: // IGame
	void step() override final;
	void run() override final;
	void stop() override final;
	void setState(const Cell &cell) override final;
};

}
