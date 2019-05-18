#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <cstdlib>

Model::Model() : modelListener(0), rpm(0)
{
}

void Model::tick()
{
	rpm++;
	if (rpm > 120)
		rpm = 0;
	modelListener->rpmChanged();
}

int Model::getRpm()
{
	return rpm;
}
