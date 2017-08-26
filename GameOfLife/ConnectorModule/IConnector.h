#pragma once

#include "../GameModule/IGame.h"
#include "../ViewModule/IView.h"

#include <QObject>

#include <memory>

namespace ConnectorModule
{

class IConnector : public QObject
{
Q_OBJECT
public:
	virtual void connect(GameModule::IGamePtr game, ViewModule::IViewPtr view) = 0;
};

typedef std::shared_ptr<IConnector> IConnectorPtr;

} // ConnectorModule
