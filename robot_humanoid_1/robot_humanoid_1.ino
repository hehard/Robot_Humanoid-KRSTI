#include "HCPCA9685.h"
#define  I2CAdd 0x40

HCPCA9685 HCPCA9685(I2CAdd);
int pos = 0;

void setup()
{ 
  Serial.begin(9600);
  HCPCA9685.Init(SERVO_MODE); 
  HCPCA9685.Sleep(false);

  HCPCA9685.Servo(0, 0);
  HCPCA9685.Servo(1, 220);
  HCPCA9685.Servo(2, 50);
  HCPCA9685.Servo(3, 360);

  HCPCA9685.Servo(8, 360);
  HCPCA9685.Servo(9, 270);
  HCPCA9685.Servo(10, 180);
  HCPCA9685.Servo(11, 180);
  
  HCPCA9685.Servo(12, 180);
  HCPCA9685.Servo(13, 180);
  HCPCA9685.Servo(14, 180);
  HCPCA9685.Servo(15, 180);

//  for (pos = 270; pos >= 180; pos -= 3) { 
//    HCPCA9685.Servo(5, pos);              
//    delay(30);                       
//  }

    delay(2000);
    for (pos = 360; pos >= 90; pos -= 3){ 
    HCPCA9685.Servo(3, pos);      
    delay(25);
    }
    for (pos = 0; pos <= 200; pos += 3){ 
    HCPCA9685.Servo(0, pos);      
    delay(25);
    }
    for (pos = 220; pos <= 420; pos += 3){ 
    HCPCA9685.Servo(1, pos);      
    delay(25);
    }
    for (pos = 50; pos <= 65; pos += 1){ 
    HCPCA9685.Servo(2, pos);      
    delay(25);
    }
    
    
    delay(2000);
    
    for (pos = 65; pos >= 60; pos -= 1){ 
    HCPCA9685.Servo(2, pos);      
    delay(25);
    }
    for (pos = 420; pos >= 350; pos -= 3){ 
    HCPCA9685.Servo(1, pos);      
    delay(25);
    }
    for (pos = 200; pos <= 330; pos += 3){ 
    HCPCA9685.Servo(0, pos);      
    delay(25);
    }

    delay(2000);

    for (pos = 350; pos >= 220; pos -= 3){ 
    HCPCA9685.Servo(1, pos);      
    delay(25);
    }
    for (pos = 330; pos >= 0; pos -= 3){ 
    HCPCA9685.Servo(0, pos);      
    delay(25);
    }

    delay(2000);

    for (pos = 65; pos <= 240; pos += 3){ 
    HCPCA9685.Servo(2, pos);      
    delay(15);
    }
    for (pos = 220; pos >= 0; pos -= 3){ 
    HCPCA9685.Servo(1, pos);      
    delay(25);
    }
    for (pos = 360; pos >= 270; pos -= 3){ 
    HCPCA9685.Servo(3, pos);      
    delay(25);
    }
    
}
 
void loop()
{
  
  for (pos = 150; pos >= 0; pos -= 4) { 
    HCPCA9685.Servo(1, pos);           
    delay(15);                     
  }
  for (pos = 0; pos <= 150; pos += 4) { 
    // in steps of 1 degree
    HCPCA9685.Servo(1, pos);;             
    delay(15);                       
  }
}
