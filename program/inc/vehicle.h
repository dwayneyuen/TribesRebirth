#pragma once

#include "gamebase.h"

class Vehicle {
	static float prefShapeDetail;
	static float prefVehicleShadowSize;
	bool hasFocus;

	bool onAdd();

	void onRemove();

	void clearMount(void);

	bool initResources(GameBase::GameBaseData* in_data);

	bool mountRender(void);

	bool canMount(GameBase*);

};