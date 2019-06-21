#include <Servo.h>

// CONSTANTS FOR SERVOS
#define BUBBLE 0
#define DIP 1
#define FAN 2

// SERVOS
const int pin_bubble= 5;
const int pin_dip = 5;
const int _fan = 6;

Servo servo_bubble;
Servo servo_dip;
Servo servo_fan;

int servo_pwm[3];
int servo_pwm_old[3];

void setup() {

  Serial.begin(9600);

  servo_bubble.attach(pin_bubble);
  servo_dip.attach(pin_dip);
  servo_fan.attach(pin_fan);
  
}

void loop() {

      make_bubbles (); // CONDITION, EVENTUALLY WITH DELAY
  
      set_servos();
      servo_pwm_old[LEFT] = servo_pwm[LEFT];
      servo_pwm_old[RIGHT] = servo_pwm[RIGHT];
 
}
