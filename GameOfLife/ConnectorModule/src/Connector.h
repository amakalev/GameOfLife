#pragma once

#include "../IConnector.h"

namespace ConnectorModule
{

class Connector final : public IConnector
{
Q_OBJECT
public: // IConnector
	void connect(GameModule::IGamePtr game, ViewModule::IViewPtr view) override final;

private:
	void connectViewToModel(GameModule::IGamePtr game, ViewModule::IViewPtr view);
	void connectModelToView(GameModule::IGamePtr game, ViewModule::IViewPtr view);

};

} // ConnectorModule
