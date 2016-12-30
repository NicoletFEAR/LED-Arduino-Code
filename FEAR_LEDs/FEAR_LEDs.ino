int bit1;
int bit2;
int bit3;
//000 for disabled
//001 for test mode
//010,011,100 for auto
//101,110,111 for teleop
void setup() {
  // put your setup code here, to run once:
  //use pins 2,3,4 for input and 5-13 for LED strips
  //nothing done for output yet
  bit1 = 0;
  bit2 = 0;
  bit3 = 0;
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  bit1 = digitalRead(2);
  bit2 = digitalRead(3);
  bit3 = digitalRead(4);
  //String bitTotal = "" + bit1 + bit2 + bit3;
  if(bit1 == 0 && bit2 == 0 && bit3 == 0){
    //run disabled code
  }
  if(bit1 == 0 && bit2 == 0 && bit3 == 0){
    //run test code
  }
  //etc.
}
