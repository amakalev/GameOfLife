#pragma once

#include "../IView.h"
#include "../../GameModule/Types.h"

namespace ViewModule
{

class View final : public IView
{
Q_OBJECT
public:
	View();

public slots: // IView
	void update(const GameModule::Field &field) override final;

};

} // ViewModule
