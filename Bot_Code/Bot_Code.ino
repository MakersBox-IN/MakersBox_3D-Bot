#include <Servo.h> 
 
Servo servo_head;
Servo servo_left;
Servo servo_right;
 
int pos = 0;  
 
void setup() {  
} 
 
void loop() 
{ 
  full_head_turn();
  delay(1000);
  wave_right();
  delay(1000);
  full_head_turn();
  delay(1000);
  wave_left();
  delay(2000);
}

void full_head_turn() 
{ 
  servo_head.attach(9);
  
  for(pos = 10; pos <= 180; pos += 1) // goes from 10 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    servo_head.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  
  for(pos = 180; pos>=120; pos-=1)     // goes from 180 degrees to 120 degrees 
  {                                
    servo_head.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
  
    servo_head.detach();
}

void wave_right()
{
  servo_right.attach(11);
  
  for(pos = 180; pos>=30; pos-=1)     // goes from 180 degrees to 30 degrees 
  {                                
    servo_right.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
  
  for(pos = 30; pos <= 180; pos += 1) // goes from 30 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    servo_right.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  
  for(pos = 180; pos>=30; pos-=1)     // goes from 180 degrees to 30 degrees 
  {                                
    servo_right.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
  
    servo_right.detach();
}

void wave_left()
{
  servo_left.attach(10);
  
  for(pos = 10; pos <= 170; pos += 1) // goes from 10 degrees to 170 degrees 
  {                                  // in steps of 1 degree 
    servo_left.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  
  for(pos = 170; pos>=10; pos-=1)     // goes from 170 degrees to 10 degrees 
  {                                
    servo_left.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
  
  for(pos = 10; pos <= 170; pos += 1) // goes from 10 degrees to 170 degrees 
  {                                  // in steps of 1 degree 
    servo_left.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  
    servo_left.detach();
}
