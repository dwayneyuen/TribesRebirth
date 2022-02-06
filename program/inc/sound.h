#pragma once

#include "soundFX.h"

class SoundProfileData {
public:
	static Profile profile;
/*	static float prefShapeDetail;
	static float prefPlayerShadowSize;
	*/static bool prefFreeLook;
	//static const DWORD csm_respawnEffectTime;

	void pack(BitStream* bstream);
	void preload(ResourceManager *, bool, char errorBuffer[256]);
};