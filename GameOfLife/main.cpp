#include "GameModule/IGame.h"
#include "GameModule/src/Game.h"
#include "ViewModule/IView.h"
#include "ViewModule/src/View.h"
#include "ConnectorModule/IConnector.h"
#include "ConnectorModule/src/Connector.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ViewModule::IViewPtr view = std::make_shared<ViewModule::View>();
	GameModule::IGamePtr game = std::make_shared<GameModule::Game>();
	ConnectorModule::IConnectorPtr connector = std::make_shared<ConnectorModule::Connector>();

	connector->connect(game, view);

	view->show();

	return a.exec();
}
