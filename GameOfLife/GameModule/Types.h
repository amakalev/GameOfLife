#pragma once

#include <vector>
#include <memory>

namespace GameModule {

struct Cell
{
	size_t x;
	size_t y;
};


typedef std::vector<std::vector<Cell>> Field;

} // GameModule
