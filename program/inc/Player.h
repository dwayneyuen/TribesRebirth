#pragma once

class Player {
public:
	static float prefShapeDetail;
	static float prefPlayerShadowSize;
	static bool prefFreeLook;
	//static const DWORD csm_respawnEffectTime;

	TMat3F* getEyeTransform();
};