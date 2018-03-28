/*
    SparkFun Tinker Kit
    Circuit 1: Blink an LED
    
    Turns an LED connected to pin 13 on and off. Repeats forever.
    
    This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
    This code is completely free for any use.
    
    View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/activity-guide-for-sparkfun-tinker-kit/
    Download code at: https://github.com/sparkfun/SparkFun_Tinker_Kit_Code
    */
    
    void setup()
    {
      pinMode(13, OUTPUT);
    }
    
    void loop()
    {
      digitalWrite(13, HIGH);   // Turn on the LED
      delay(2000);              // Wait for one second
      digitalWrite(13, LOW);    // Turn off the LED  
      delay(2000);              // Wait for one second
    }
    /* 
     / Try changing the 2000 in the above delay() functions to
     / different numbers and see how it affects the timing. Smaller
     / values will make the loop run faster. (Why?)
     /
     / Other challenges:
     /   * Decrease the delay to 10 ms. Can you still see it blink?
     /         Find the smallest delay that you can still see a blink. What is this frequency?
     /   * Modify the code above to resemble a heartbeat.  
     */
