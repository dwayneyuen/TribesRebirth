#pragma once

int MAX_DECALS = 100;

class Decal {
};

class DecalManager {
public:
	struct DecalInfo {
		LPSTR lpszDecal;
		float rSize;
	};

	static int iPrefNumDecals;
	static DecalInfo rgDecalInfo[];
	bool fLoaded;

	DecalManager();
	~DecalManager();
	void reset();
	bool onAdd();
	void addFootprint(TMat3F tmat, DECALTYPE type, float rFootspan);
	bool addToSet(int setId);
};