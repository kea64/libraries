#ifndef H2_Drone_Values_h
#define H2_Drone_Values_h

#define QUAD_EN 1
#define TRI_EN 0

#define channel1Pin A3
#define channel2Pin A2
#define channel3Pin A1
#define channel4Pin A0
#define channel1 2
#define channel2 3
#define channel3 4
#define channel4 5
#define channel5 6
#define channel6 7

#define GPS_SATELLITE_MINIMUM 5
#define DIV_BY_MILL 0.001
#define DIV_BY_MICRO 0.000001
#define RAD_TO_DEGREE 57.2958
#define INITIAL_ARM_DELAY 3000

#define DEBUG_EN 1
#define GPS_EN 0
#define AUXILIARY_EN 0
#define ACRO_EN 0

#define altAlpha 0.9
#define compliAlpha 0.97
#define GYROALPHA 0.85
#define ACC_ALPHA 0.25

#define BARO_MODE 3

#define COMPLI_DELAY 200
#define BARO_DELAY 50
#define TEMP_DELAY 2000
#define COMM_DELAY 250
#define CONTROL_DELAY 200
#define MODE_DELAY 20

#define TAIL_SERVO_MAX_DEGREE 70
#define TAIL_SERVO_MIN_DEGREE 120
#define TAIL_SERVO_MAX 1920
#define TAIL_SERVO_MIN 1168
#define TAIL_SERVO_OFFSET 5


//Quadcopter Specific Settings
#if QUAD_EN
#define xMagError 0.96
#define yMagError 1.01
#define zMagError 0.95
#define xMagOffset -23
#define yMagOffset -102
#define zMagOffset 0
#define ROLL_OFFSET 0 
#define PITCH_OFFSET 0 
#define YAW_OFFSET 90
#define ROLL_SENSITIVITY 0.5
#define PITCH_SENSITIVITY 0.5
#define YAW_SENSITIVITY 0.25 //Controls the degree at which CH4 affects yaw
#define ROLL_RATE_MAXIMUM 350
#define PITCH_RATE_MAXIMUM 350
#define YAW_RATE_MAXIMUM 400
#define ROLL_STAB_MAXIMUM 400
#define PITCH_STAB_MAXIMUM 400
#define YAW_STAB_MAXIMUM 300
#define THROTTLE_MAXIMUM 1864
#define THROTTLE_MINIMUM 1136
#define AUTO_THROTTLE_MAXIMUM 1700
#define AUTO_THROTTLE_MINIMUM 1300
#define THROTTLE_CUTOFF 1180
#define GPS_ROLL_MAXIMUM 20
#define GPS_PITCH_MAXIMUM 20
#define ACC_SCALAR 0.93
#define ARM_ENGAGE_THRESHOLD 1250
#define ARM_DISENGAGE_THRESHOLD 1775
#define ARM_THROTTLE_THRESHOLD 1180
#define SERVO_MAXIMUM 2000
#define SERVO_MIDPOINT 1500
#define SERVO_MINIMUM 1000

#define KPRS 1.9
#define KIRS 0
#define KDRS 0
#define KMRS 25

#define KPRR 0.194
#define KIRR 0.862
#define KDRR 0.029
#define KMRR 25

#define KPPS 1.9
#define KIPS 0
#define KDPS 0
#define KMPS 25

#define KPPR 0.194
#define KIPR .862
#define KDPR 0.029
#define KMPR 25

#define KPYS 0
#define KIYS 0
#define KDYS 0
#define KMYS 25

#define KPYR 1
#define KIYR 0
#define KDYR 0
#define KMYR 25

#define KPT 0
#define KIT 0
#define KDT 0
#define KMT 25

#define GPR 0
#define GIR 0
#define GDR 0
#define GMR 25

#define GPP 0
#define GIP 0
#define GDP 0
#define GMP 25

#endif


//Tricopter-Specific Settings
#if TRI_EN
#define xMagError 0.96
#define yMagError 1.01
#define zMagError 0.95
#define xMagOffset -23
#define yMagOffset -102
#define zMagOffset 0
#define ROLL_OFFSET 0 
#define PITCH_OFFSET 0 
#define YAW_OFFSET 90
#define ROLL_SENSITIVITY 0.5
#define PITCH_SENSITIVITY 0.5
#define YAW_SENSITIVITY 0.25 //Controls the degree at which CH4 affects yaw
#define ROLL_RATE_MAXIMUM 350
#define PITCH_RATE_MAXIMUM 350
#define YAW_RATE_MAXIMUM 400
#define ROLL_STAB_MAXIMUM 400
#define PITCH_STAB_MAXIMUM 400
#define YAW_STAB_MAXIMUM 300
#define THROTTLE_MAXIMUM 1864
#define THROTTLE_MINIMUM 1188
#define AUTO_THROTTLE_MAXIMUM 1700
#define AUTO_THROTTLE_MINIMUM 1300
#define THROTTLE_CUTOFF 1250
#define GPS_ROLL_MAXIMUM 20
#define GPS_PITCH_MAXIMUM 20
#define ACC_SCALAR 0.93
#define ARM_ENGAGE_THRESHOLD 1190
#define ARM_DISENGAGE_THRESHOLD 1840
#define ARM_THROTTLE_THRESHOLD 1210
#define SERVO_MAXIMUM 2000
#define SERVO_MIDPOINT 1500
#define SERVO_MINIMUM 1000

#define KPRS 1
#define KIRS 0
#define KDRS 0
#define KMRS 25

#define KPRR 0.7
#define KIRR 0.02
#define KDRR 0.02
#define KMRR 80

#define KPPS 1
#define KIPS 0
#define KDPS 0
#define KMPS 25

#define KPPR 0.7
#define KIPR 0.02
#define KDPR 0.02
#define KMPR 80

#define KPYS 0
#define KIYS 0
#define KDYS 0
#define KMYS 25

#define KPYR 3
#define KIYR 0
#define KDYR 0
#define KMYR 25

#define KPT 0
#define KIT 0
#define KDT 0
#define KMT 25

#define GPR 0
#define GIR 0
#define GDR 0
#define GMR 25

#define GPP 0
#define GIP 0
#define GDP 0
#define GMP 25
#endif



#endif