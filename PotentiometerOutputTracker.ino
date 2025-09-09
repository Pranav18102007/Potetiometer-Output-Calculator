float volt; 
const int LEDs = 5;
int ledpins[LEDs]= {2,3,4,5,6};
void setup()
{ 
  for(int i=0;i<LEDs;i++){
    pinMode(ledpins[i],OUTPUT);   //Sets the pinmodes of leds to output
    }
            
  Serial.begin(9600); 
  
}

void loop()
{
  int Read=analogRead(A5);
  
  //Formula to convert the duty cycle to volts
  volt=(5./1023.)*(Read);
  
  //Displays volts in serial monitor
  Serial.println(volt);
  
  for(int i=0;i<LEDs;i++){
    if(i<volt){
    digitalWrite(ledpins[i],HIGH);
    }
    else{
    digitalWrite(ledpins[i],LOW);
    
    }
  }
  }
  