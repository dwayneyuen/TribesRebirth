#pragma once

class PlayerPSC {
	static float playerFov;
	static float sniperFov;
	static float zoomSpeed;
	const char* validateFov(CMDConsole*, int id, int argc, const char* argv[]);

	PlayerPSC(bool in_isServer);
};

class PlayerMove {
	int forwardAction;
	int backwardAction;
	int leftAction;
	int rightAction;
	bool jetting;
	bool jumpAction;
	bool crouching;
	int turnRot;
	int pitch;
	bool trigger;
	int useItem;

	PlayerMove();
	void reset();
};
