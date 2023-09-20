void setServoAngle(int servoPin, int angle) {
  // Map the desired angle (0 to 180) to the servo's actual pulse width (500 to 2400)
  int pulseWidth = map(angle, 0, 180, 500, 2400);
  servos[servoPin - 2].writeMicroseconds(pulseWidth);
}
