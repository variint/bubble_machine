void set_servos() {
  servoBubble.writeMicroseconds(servo_pwm[BUBBLE]);
  servoDip.writeMicroseconds(servo_pwm[DIP]);
  servoFan.writeMicroseconds(servo_pwm[FAN]);
}

void make_bubbles () {
  servo_pwm[BUBBLE] = 1550;
  servo_pwm[DIP] = 1400;
  servo_pwm[FAN] = 1550;
}

void make_dip (){
  
}

void make_turn (){
  
}
