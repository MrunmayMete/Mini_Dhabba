
void turnLeft(int steps) {
  
  // Set angles for the right back leg
  setServoAngle(RB1_PIN, a);  
  setServoAngle(RB2_PIN, b);
  setServoAngle(RB3_PIN, c);

  // Set angles for the left front leg
  // Adjust this angle to achieve the desired turn
  setServoAngle(LF1_PIN, g + 5);
  delay(500);
  setServoAngle(LF3_PIN, i - 20);
  delay(500);
  setServoAngle(LF2_PIN, h + 5);
  delay(500);
  setServoAngle(LF1_PIN, g - 10);
  delay(500);

  // Set angles for the right front leg
  // Adjust this angle to achieve the desired turn
  setServoAngle(RF3_PIN, f);  
  setServoAngle(RF1_PIN, d - 20);
  setServoAngle(RF2_PIN, e);

  delay(500);

  //Defaulting to original position
  setServoAngle(LF3_PIN, i);
  delay(500);
  setServoAngle(RF1_PIN, d);  


  // Set angles for the left back leg
  setServoAngle(LB1_PIN, j -10);
  setServoAngle(LB2_PIN, k);
  setServoAngle(LB3_PIN, l);

  delay(500);  // Adjust the delay time as needed
}

void turnRight(int steps) {
  // Set angles for the right back leg
  setServoAngle(RB1_PIN, a);
  setServoAngle(RB2_PIN, b);
  setServoAngle(RB3_PIN, c);

  // Set angles for the right front leg
  setServoAngle(RF1_PIN, d - 15);
  delay(500);
  setServoAngle(RF2_PIN, e);
  setServoAngle(RF3_PIN, f + 20);   // Adjust this angle to achieve the desired turn
  delay(500);
  setServoAngle(RF1_PIN, d);
  delay(500);

  // Set angles for the left front leg
  setServoAngle(LF1_PIN, g + 5);
  setServoAngle(LF2_PIN, h + 5);
  setServoAngle(LF3_PIN, i);   // Adjust this angle to achieve the desired turn
  delay(500);

  //Defaulting to original position
  setServoAngle(RF3_PIN, f); 
  delay(500);
  setServoAngle(LF1_PIN, g - 10);


  // Set angles for the left back leg
  setServoAngle(LB1_PIN, j - 10);
  setServoAngle(LB2_PIN, k);
  setServoAngle(LB3_PIN, l);

  delay(500);  // Adjust the delay time as needed
}
