
  void check_distance(){
  // Print the distance to the Serial Monitor
  Serial.print("Distance_1: ");
  Serial.print(distance_1);
  Serial.print(" cm");
  
  Serial.print("Distance_2: ");
  Serial.print(distance_2);
  Serial.print(" cm");
  }

  void move_decision(){
  if((distance_1 < 20) == (distance_2 < 20)){
    walkDogBackward(1);
    check_distance();
    delay(150);
  }
  if(distance_1 && distance_2 < 20) {
    if(distance_1 < distance_2){
      turnRight(1);
      check_distance();
      if(distance_1 < distance_2 && 20){
        walkDogBackward(1);
      }
    }
    else{
      turnLeft(1);
      check_distance();
      if(distance_2 < distance_1 && 20){
        walkDogBackward(1);
      }
    }

  }
  if(distance_1 < 20){
    turnRight(2);
    // Hardsit(1);
    check_distance();
    delay(150);
  }
  if(distance_2 < 20){
    turnLeft(2);
    // Hardsit(1);
    check_distance();
    delay(150);
  }
  }
  