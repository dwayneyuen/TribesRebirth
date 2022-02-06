#pragma once

class GameBase {
public:
	class GameBaseData {
		static bool visibleToSensor;
		static int mapFilter;
		static int teamId;
		static int ownerId;
		static int ctrlClientId;
		static int lastOwnerClientId;
		static int powerCount;	// objects requiring power must have a generator...
		static int powerGenerator;
		static int lastAnimateTime;
		static int lastProcessTime;
		static int datFileId;
		static int datFileName;
		static int timer;
		static int sensorInfoBits;
		static int data;
		static int sensorKey;
		static char* mapName;
		static int fov;
		static char* description;
	};
};