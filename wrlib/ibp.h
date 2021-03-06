#ifndef IBP_H_
#define IBP_H_

#define I2C_CAMERA_ADDR 0x32
#define I2C_COMMS_ADDR	0X23
#define I2C_MOTOR_ADDR	0x04

#define IBP_I2C_TIMEOUT 1000

typedef uint8_t ibp_command;
typedef uint8_t ibp_info;

#define CMD_NONE 0
#define COMMS_COMMAND 2

#define MD_VALUES_START 10
#define MD_VALUES_STOP 19

#define MC_VALUES_START 20
#define MC_VALUES_STOP 69

#define MC_VALUES_SPEED_START MC_VALUES_START
#define MC_VALUES_SPEED_STOP 39

#define MC_VALUES_DIR_START (MC_VALUES_START + 20)
#define MC_VALUES_DIR_STOP 59

#define CC_VALUES_START 70
#define CC_VALUES_STOP 79

#define CD_VALUES_START 80
#define CD_VALUES_STOP 89

/*
// Commands for the Motor Board
enum {MC_SPEED_P10 = MC_VALUES_START, MC_SPEED_P20, MC_SPEED_P30, MC_SPEED_P40, MC_SPEED_P50, 
    MC_SPEED_P60, MC_SPEED_P70, MC_SPEED_P80, MC_SPEED_P90, MC_SPEED_100, 
    MC_SPEED_N10,MC_SPEED_N20, MC_SPEED_N30, MC_SPEED_N40, MC_SPEED_N50,
    MC_SPEED_N60, MC_SPEED_N70, MC_SPEED_N80, MC_SPEED_N90, MC_SPEED_N100};

// More Commands for the Motor Board
enum {MC_LEFT_10 = MC_VALUES_DIR_START, MC_LEFT_20, MC_LEFT_30, MC_LEFT_40, MC_LEFT_50, 
    MC_LEFT_60, MC_LEFT_70, MC_LEFT_80, MC_LEFT_90, MC_LEFT_100,
    MC_RIGHT_10, MC_RIGHT_20, MC_RIGHT_30, MC_RIGHT_40, MC_RIGHT_50,
    MC_RIGHT_60, MC_RIGHT_70, MC_RIGHT_80, MC_RIGHT_90, MC_RIGHT_100};
*/

#define MC_FORWARD 20
#define MC_REVERSE 30
#define MC_LEFT 40
#define MC_RIGHT 50

// More Commands for the Motor Board    
enum {MC_WHEELS_STRAIGHT = MC_VALUES_START + 40, MC_STOP_ALL, MC_STOP_MOTOR, MC_IR_OFF, MC_IR_ONZ};

// Public data held by the motor board
enum {MD_SPEED = MD_VALUES_START, MD_CHARGE, MD_FAULT};

// Commands for the camera board
enum {CC_CAPTURE = CC_VALUES_START, CC_SLEEP};

// Public data held by the camera board
enum {CD_PHOTO_READY = CD_VALUES_START, CD_PHOTO_NEXT_LINE, CD_FAULT};

#endif
