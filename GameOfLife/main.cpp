#include "GameModule/Game.h"
#include "ViewModule/View.h"
#include "ConnectorModule/Connector.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ViewModule::ViewPtr view = std::make_shared<ViewModule::View>();
	GameModule::GamePtr game = std::make_shared<GameModule::Game>();
	ConnectorModule::ConnectorPtr connector = std::make_shared<ConnectorModule::Connector>();

	connector->connect(game, view);

	view->show();

	return a.exec();
}
