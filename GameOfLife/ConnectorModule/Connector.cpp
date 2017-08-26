#include "Connector.h"

namespace ConnectorModule {

void ConnectorModule::Connector::connect(GameModule::GamePtr game, ViewModule::ViewPtr view)
{
	connectViewToModel(game, view);
	connectModelToView(game, view);
}

void Connector::connectViewToModel(GameModule::GamePtr game, ViewModule::ViewPtr view)
{
	QObject::connect(view.get(), &ViewModule::View::step, game.get(), &GameModule::Game::step);
	QObject::connect(view.get(), &ViewModule::View::run, game.get(), &GameModule::Game::run);
	QObject::connect(view.get(), &ViewModule::View::stop, game.get(), &GameModule::Game::stop);
}

void Connector::connectModelToView(GameModule::GamePtr game, ViewModule::ViewPtr view)
{
	QObject::connect(game.get(), &GameModule::Game::updateField, view.get(), &ViewModule::View::updateField);
}

}
