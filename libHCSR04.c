/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
int triggerPin=16;
int echoPin=17;
int main()                                    
{


 
   while(1)                                    
  {
    int Dist = HCSR_cm(triggerPin,echoPin);    // Get cm distance from sensor
                                                 
    print("Distance in cm = %d\n", Dist);      // Display distance
    pause(500);                               // Wait 1/2 second
  }
}
