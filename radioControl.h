
#include "commonLib.h"


#define TRANSMIT_TIMER 60000
#define PACKET_FIELD_NUM 60
#define PACKET_FIELD_LENGTH 20
#define SERIAL_BAUDRATE 9600


typedef enum{
	HEADER_BEGIN,
	HEADER_ENABLE_FLY_SYSTEM,
	HEADER_CONTROL_MOTION,
	HEADER_HALT_PI,
	HEADER_SETUP_FACTOR,
	HEADER_OlED_DISPLAY,
	HEADER_SETUP_PID,
	HEADER_END
}CONTROL_PACKET_HEADER;

typedef enum{
	ENABLE_FLY_SYSTEM_FIWLD_HEADER,
	ENABLE_FLY_SYSTEM_FIWLD_ISENABLE,
	ENABLE_FLY_SYSTEM_FIWLD_END
}ENABLE_FLY_SYSTEM_FIWLD;

typedef enum{
	CONTROL_MOTION_HEADER,
	CONTROL_MOTION_THROTTLE,
	CONTROL_MOTION_ROLL_SP_SHIFT,
	CONTROL_MOTION_PITCH_SP_SHIFT,
	CONTROL_MOTION_YAW_SHIFT_VALUE,
	CONTROL_MOTION_END
}CONTROL_MOTION_FIWLD;

typedef enum{
	SETUP_FACTOR_HEADER,
	SETUP_FACTOR_PERIOD,
	SETUP_FACTOR_POWER_LEVEL_RANGE,
	SETUP_FACTOR_POWER_LIMIT,
	SETUP_FACTOR_GYRO_LIMIT,
	SETUP_FACTOR_ANGULAR_LIMIT,
	SETUP_FACTOR_ROLL_CAL,
	SETUP_FACTOR_PITCH_CAL,
	SETUP_FACTOR_MOTOR_GAIN_0,
	SETUP_FACTOR_MOTOR_GAIN_1,
	SETUP_FACTOR_MOTOR_GAIN_2,
	SETUP_FACTOR_MOTOR_GAIN_3,
	SETUP_FACTOR_VERTICAL_HOLD_ENABLE,
	SETUP_FACTOR_END
}SETUP_FACTOR_FIWLD;

typedef enum{
	SETUP_PID_HEADER,
	SETUP_PID_ATTITUDE_ROLL_P,
	SETUP_PID_ATTITUDE_ROLL_I,
	SETUP_PID_ATTITUDE_ROLL_I_LIMIT,
	SETUP_PID_ATTITUDE_ROLL_D,
	SETUP_PID_ATTITUDE_PITCH_P,
	SETUP_PID_ATTITUDE_PITCH_I,
	SETUP_PID_ATTITUDE_PITCH_I_LIMIT,
	SETUP_PID_ATTITUDE_PITCH_D,
	SETUP_PID_ATTITUDE_YAW_P,
	SETUP_PID_ATTITUDE_YAW_I,
	SETUP_PID_ATTITUDE_YAW_I_LIMIT,
	SETUP_PID_ATTITUDE_YAW_D,
	SETUP_PID_RATE_ROLL_P,
	SETUP_PID_RATE_ROLL_I,
	SETUP_PID_RATE_ROLL_I_LIMIT,
	SETUP_PID_RATE_ROLL_D,
	SETUP_PID_RATE_PITCH_P,
	SETUP_PID_RATE_PITCH_I,
	SETUP_PID_RATE_PITCH_I_LIMIT,
	SETUP_PID_RATE_PITCH_D,
	SETUP_PID_RATE_YAW_P,
	SETUP_PID_RATE_YAW_I,
	SETUP_PID_RATE_YAW_I_LIMIT,
	SETUP_PID_RATE_YAW_D,
	SETUP_PID_VERTICAL_HEIGHT_P,
	SETUP_PID_VERTICAL_HEIGHT_I,
	SETUP_PID_VERTICAL_HEIGHT_I_LIMIT,
	SETUP_PID_VERTICAL_HEIGHT_D,
	SETUP_PID_VERTICAL_SPEED_P,
	SETUP_PID_VERTICAL_SPEED_I,
	SETUP_PID_VERTICAL_SPEED_I_LIMIT,
	SETUP_PID_VERTICAL_SPEED_D,
	SETUP_PID_END
}SETUP_PID__FIWLD;


bool radioControlInit();

