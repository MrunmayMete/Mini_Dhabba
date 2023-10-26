
void stand_to_sit(int steps) {
  for (int i = 0; i < steps; i++) {
    setServoAngle(RB1_PIN, a);
    setServoAngle(RB2_PIN, b);
    setServoAngle(RB3_PIN, c);
    setServoAngle(LB1_PIN, j - 10);
    setServoAngle(LB2_PIN, k);
    setServoAngle(LB3_PIN, l);
    setServoAngle(RF1_PIN, d - 50);
    setServoAngle(RF2_PIN, e + 45);
    setServoAngle(RF3_PIN, f);
    setServoAngle(LF1_PIN, g + 60);
    setServoAngle(LF2_PIN, h - 5);
    setServoAngle(LF3_PIN, i);
    delay(500);
    setServoAngle(RB1_PIN, a -60);
    setServoAngle(RB2_PIN, b + 40);
    setServoAngle(RB3_PIN, c);
    setServoAngle(RF1_PIN, d - 50);
    setServoAngle(RF2_PIN, e + 45);
    setServoAngle(RF3_PIN, f);
    setServoAngle(LF1_PIN, g + 60);
    setServoAngle(LF2_PIN, h - 5);
    setServoAngle(LF3_PIN, i);
    setServoAngle(LB1_PIN, j + 50);
    setServoAngle(LB2_PIN, k - 40);
    setServoAngle(LB3_PIN, l);
    delay(5000);
  }
}

void halfSit(int steps) {
  for (int i = 0; i < steps; i++) {
    setServoAngle(RB1_PIN, a);
    setServoAngle(RB2_PIN, b);
    setServoAngle(RB3_PIN, c);
    setServoAngle(LB1_PIN, j +10);
    setServoAngle(LB2_PIN, k);
    setServoAngle(LB3_PIN, l );
    setServoAngle(RF1_PIN, d - 50);
    setServoAngle(RF2_PIN, e + 45);
    setServoAngle(RF3_PIN, f);
    setServoAngle(LF1_PIN, g + 60);
    setServoAngle(LF2_PIN, h + 5);
    setServoAngle(LF3_PIN, i);
    delay(10000);
  }
}

void sit_to_stand(int steps) {
  for (int i = 0; i < steps; i++) {
    setServoAngle(RB1_PIN, a);
    setServoAngle(RB2_PIN, b);
    setServoAngle(RB3_PIN, c);
    setServoAngle(LB1_PIN, j - 10);
    setServoAngle(LB2_PIN, k);
    setServoAngle(LB3_PIN, l);
    setServoAngle(RF1_PIN, d);
    setServoAngle(RF2_PIN, e);
    setServoAngle(RF3_PIN, f);
    setServoAngle(LF1_PIN, g - 10);
    setServoAngle(LF2_PIN, h + 5);
    setServoAngle(LF3_PIN, i);
    delay(500);
    setServoAngle(RB1_PIN, a);
    setServoAngle(RB2_PIN, b);
    setServoAngle(RB3_PIN, c);
    setServoAngle(LB1_PIN, j - 10);
    setServoAngle(LB2_PIN, k);
    setServoAngle(LB3_PIN, l);
    setServoAngle(RF1_PIN, d - 50);
    setServoAngle(RF2_PIN, e + 45);
    setServoAngle(RF3_PIN, f);
    setServoAngle(LF1_PIN, g + 60);
    setServoAngle(LF2_PIN, h - 5);
    setServoAngle(LF3_PIN, i);
    delay(5000);
  }
}

void Hardsit(int steps){
  setServoAngle(RB1_PIN, a - 60);
  setServoAngle(RB2_PIN, b + 40);
  setServoAngle(RB3_PIN, c);
  setServoAngle(RF1_PIN, d - 50);
  setServoAngle(RF2_PIN, e + 45);
  setServoAngle(RF3_PIN, f);
  setServoAngle(LF1_PIN, g - 60);
  setServoAngle(LF2_PIN, h - 5);
  setServoAngle(LF3_PIN, i);
  setServoAngle(LB1_PIN, j + 50);
  setServoAngle(LB2_PIN, k - 40);
  setServoAngle(LB3_PIN, l);
  delay(5000);
}