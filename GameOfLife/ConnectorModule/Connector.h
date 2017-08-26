#pragma once

#include "GameModule/Game.h"
#include "ViewModule/View.h"

#include <QObject>

#include <memory>

namespace ConnectorModule
{

class Connector final : public QObject
{
Q_OBJECT
public:
	void connect(GameModule::GamePtr game, ViewModule::ViewPtr view);

private:
	void connectViewToModel(GameModule::GamePtr game, ViewModule::ViewPtr view);
	void connectModelToView(GameModule::GamePtr game, ViewModule::ViewPtr view);

};

typedef std::shared_ptr<Connector> ConnectorPtr;

} // ConnectorModule
