class Sensor {
	class SensorData {

	public:
		SensorData();
		bool fCastLOS;
		int iRange;
		int iDopplerVelocity;
		bool supression;
		bool supressable;
		bool pinger;
	};
};