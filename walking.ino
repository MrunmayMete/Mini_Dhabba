
void walkDogForward(int steps) {
  for (int i = 0; i < steps; i++) {
    // Diagonal 1
      setServoAngle(RF1_PIN, d - 15);
      setServoAngle(LB1_PIN, j + 5);
      delay(300);
      setServoAngle(RF2_PIN, e -15);
      setServoAngle(LB2_PIN, k + 15);
      delay(300);
      setServoAngle(RF1_PIN, d + 10);
      setServoAngle(LB1_PIN, j - 10);
      delay(300);
      setServoAngle(RF2_PIN, e + 15);
      setServoAngle(LB2_PIN, k - 15);
      delay(300);

    //Diagonal 2
      setServoAngle(LF1_PIN, g + 10);
      setServoAngle(RB1_PIN, a - 15);
      delay(300);
      setServoAngle(LF2_PIN, h + 20);
      setServoAngle(RB2_PIN, b - 15);
      delay(300);
      setServoAngle(LF1_PIN, g - 10);
      setServoAngle(RB1_PIN, a);
      delay(300);
      setServoAngle(LF2_PIN, h - 10);
      setServoAngle(RB2_PIN, b + 15);
      delay(300);

    // Reset leg positions to stand position
    // hardStand(500);
  }
}


void walkDogBackward(int steps) {
  for (int i = 0; i < steps; i++) {
// Diagonal 1
      setServoAngle(RF1_PIN, d - 15);
      setServoAngle(LB1_PIN, j + 5);
      delay(100);
      setServoAngle(RF2_PIN, e + 15);
      setServoAngle(LB2_PIN, k - 15);
      delay(100);
      setServoAngle(RF1_PIN, d);
      setServoAngle(LB1_PIN, j - 10);
      // delay( 250);
      setServoAngle(RF2_PIN, e - 30);
      setServoAngle(LB2_PIN, k + 15);
      delay(100);


  //Diagonal 2
      setServoAngle(LF1_PIN, g + 5);
      setServoAngle(RB1_PIN, a - 15);
      delay(100);
      setServoAngle(LF2_PIN, h - 15);
      setServoAngle(RB2_PIN, b + 15);
      delay(100);
      setServoAngle(LF1_PIN, g - 10);
      setServoAngle(RB1_PIN, a);
      delay(100);
      setServoAngle(LF2_PIN, h + 20);
      setServoAngle(RB2_PIN, b - 15);
      delay(100);

    // Reset leg positions to stand position
    // hardStand(500);
  }
}