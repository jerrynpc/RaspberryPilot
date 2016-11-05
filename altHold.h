
typedef enum{
	ALTHOLD_MODULE_NONE,
	ALTHOLD_MODULE_VL53L0X,
	ALTHOLD_MODULE_MS5611
}ALTHOLD_MODULE_TYPE;

bool initAltHold();
bool getAltHoldIsReady();
bool getEnableAltHold();
void setEnableAltHold(bool v);
