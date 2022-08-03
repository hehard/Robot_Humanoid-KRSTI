#include "HCPCA9685.h"
#define  I2CAdd 0x40

HCPCA9685 HCPCA9685(I2CAdd);
int pos = 0;

void setup()
{ 
  Serial.begin(9600);
  HCPCA9685.Init(SERVO_MODE); 
  HCPCA9685.Sleep(false);

//  Tangan Kiri
  HCPCA9685.Servo(0, 360);
  HCPCA9685.Servo(1, 360);
  HCPCA9685.Servo(2, 180);
  HCPCA9685.Servo(3, 180);

// Tangan Kanan
  HCPCA9685.Servo(4, 0);
  HCPCA9685.Servo(5, 30);
  HCPCA9685.Servo(6, 180);
  HCPCA9685.Servo(7, 180);

//  Kaki Kiri kanan
  HCPCA9685.Servo(12, 166);
  HCPCA9685.Servo(13, 180);
  HCPCA9685.Servo(14, 133);
  HCPCA9685.Servo(15, 190);

//  for (pos = 270; pos >= 180; pos -= 3) { 
//    HCPCA9685.Servo(5, pos);              
//    delay(30);                       
//  }

    // Tangan Kanan
    // Bela Negara
    delay(2000);
    for (pos = 0; pos <= 150; pos += 3){ 
    HCPCA9685.Servo(4, pos);      
    delay(25);
    }
    for (pos = 30; pos <= 50; pos += 3){ 
    HCPCA9685.Servo(5, pos);      
    delay(25);
    }
    for (pos = 180; pos <= 360; pos += 3){ 
    HCPCA9685.Servo(6, pos);      
    delay(25);
    }
    for (pos = 50; pos >= 16; pos -= 3){ 
    HCPCA9685.Servo(5, pos);      
    delay(25);
    }

    // Hormat
    delay(2000);
    for (pos = 16; pos <= 50; pos += 3){ 
    HCPCA9685.Servo(5, pos);      
    delay(25);
    }
    for (pos = 150; pos <= 300; pos += 3){ 
    HCPCA9685.Servo(4, pos);      
    delay(25);
    }

    // Tegak
    delay(2000);
    for (pos = 360; pos >= 180; pos -= 3){ 
    HCPCA9685.Servo(6, pos);      
    delay(25);
    }
    for (pos = 300; pos >= 0; pos -= 3){ 
    HCPCA9685.Servo(4, pos);      
    delay(25);
    }
    for (pos = 50; pos >= 30; pos -= 3){ 
    HCPCA9685.Servo(5, pos);      
    delay(25);
    }

    // Halo
    delay(2000);
    for (pos = 30; pos <= 210; pos += 3){ 
    HCPCA9685.Servo(5, pos);      
    delay(25);
    }
    for (pos = 180; pos <= 360; pos += 3){ 
    HCPCA9685.Servo(7, pos);      
    delay(25);
    }
}

void loop()
{
  for (pos = 180; pos >= 0; pos -= 4) { 
    HCPCA9685.Servo(6, pos);           
    delay(15);                     
  }
  for (pos = 0; pos <= 150; pos += 4) { 
    // in steps of 1 degree
    HCPCA9685.Servo(6, pos);;             
    delay(15);                       
  }
}
