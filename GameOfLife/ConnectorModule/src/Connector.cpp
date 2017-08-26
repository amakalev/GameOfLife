#include "Connector.h"

namespace ConnectorModule {

void ConnectorModule::Connector::connect(GameModule::IGamePtr game, ViewModule::IViewPtr view)
{
	connectViewToModel(game, view);
	connectModelToView(game, view);
}

void Connector::connectViewToModel(GameModule::IGamePtr game, ViewModule::IViewPtr view)
{
	QObject::connect(view.get(), &ViewModule::IView::step, game.get(), &GameModule::IGame::step);
	QObject::connect(view.get(), &ViewModule::IView::run, game.get(), &GameModule::IGame::run);
	QObject::connect(view.get(), &ViewModule::IView::stop, game.get(), &GameModule::IGame::stop);
}

void Connector::connectModelToView(GameModule::IGamePtr game, ViewModule::IViewPtr view)
{
	QObject::connect(game.get(), &GameModule::IGame::update, view.get(), &ViewModule::IView::update);
}

}
