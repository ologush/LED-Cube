struct frame //This structure stores the register data for each frame
{
  uint8_t redPort, redDdr, greenPort, greenDdr;//This is all of the port data for each frame
};
frame frames[] = //This array holds all 128 frames of the pattern
{
  {0x0, 0x8, 0x1, 0x1}, {0x0, 0x8, 0x2, 0x2}, {0x0, 0x8, 0x4, 0x4}, {0x0, 0x8, 0x8, 0x8}, 
  {0x0, 0x4, 0x8, 0x8}, {0x0, 0x2, 0x8, 0x8}, {0x0, 0x1, 0x8, 0x8}, {0x0, 0x1, 0x4, 0x4}, 
  {0x0, 0x1, 0x2, 0x2}, {0x0, 0x1, 0x1, 0x1}, {0x0, 0x2, 0x1, 0x1}, {0x0, 0x4, 0x1, 0x1}, 
  {0x0, 0x4, 0x2, 0x2}, {0x0, 0x4, 0x4, 0x4}, {0x0, 0x2, 0x4, 0x4}, {0x0, 0x2, 0x2, 0x2}, //First
  {0x0, 0x20, 0x2, 0x2}, {0x0, 0x20, 0x4, 0x4}, {0x0, 0x40, 0x4, 0x4}, {0x0, 0x40, 0x2, 0x2}, 
  {0x0, 0x40, 0x1, 0x1}, {0x0, 0x20, 0x1, 0x1}, {0x0, 0x10, 0x1, 0x1}, {0x0, 0x10, 0x2, 0x2},
  {0x0, 0x10, 0x4, 0x4}, {0x0, 0x10, 0x8, 0x8}, {0x0, 0x20, 0x8, 0x8}, {0x0, 0x40, 0x8, 0x8}, 
  {0x0, 0x80, 0x8, 0x8}, {0x0, 0x80, 0x4, 0x4}, {0x0, 0x80, 0x2, 0x2}, {0x0, 0x80, 0x1, 0x1}, //Second
  {0x0, 0x8, 0x10, 0x10}, {0x0, 0x8, 0x20, 0x20}, {0x0, 0x8, 0x40, 0x40}, {0x0, 0x8, 0x80, 0x80},
  {0x0, 0x4, 0x80, 0x80}, {0x0, 0x2, 0x80, 0x80}, {0x0, 0x1, 0x80, 0x80}, {0x0, 0x1, 0x40, 0x40},
  {0x0, 0x1, 0x20, 0x20}, {0x0, 0x1, 0x10, 0x10}, {0x0, 0x2, 0x10, 0x10}, {0x0, 0x4, 0x10, 0x10},
  {0x0, 0x4, 0x20, 0x20}, {0x0, 0x4, 0x40, 0x40}, {0x0, 0x2, 0x40, 0x40}, {0x0, 0x2, 0x20, 0x20}, //Third
  {0x0, 0x20, 0x20, 0x20}, {0x0, 0x20, 0x40, 0x40}, {0x0, 0x40, 0x40, 0x40}, {0x0, 0x40, 0x20, 0x20},
  {0x0, 0x40, 0x10, 0x10}, {0x0, 0x20, 0x10, 0x10}, {0x0, 0x10, 0x10, 0x10}, {0x0, 0x10, 0x20, 0x20},
  {0x0, 0x10, 0x40, 0x40}, {0x0, 0x10, 0x80, 0x80}, {0x0, 0x20, 0x80, 0x80}, {0x0, 0x40, 0x80, 0x80}, 
  {0x0, 0x80, 0x80, 0x80}, {0x0, 0x80, 0x40, 0x40}, {0x0, 0x80, 0x20, 0x20}, {0x0, 0x80, 0x10, 0x10}, //Fourth
  {0x10, 0x10, 0x0, 0x80}, {0x20, 0x20, 0x0, 0x80}, {0x40, 0x40, 0x0, 0x80}, {0x80, 0x80, 0x0, 0x80},
  {0x80, 0x80, 0x0, 0x40}, {0x80, 0x80, 0x0, 0x20}, {0x80, 0x80, 0x0, 0x10}, {0x40, 0x40, 0x0, 0x10},
  {0x20, 0x20, 0x0, 0x10}, {0x10, 0x10, 0x0, 0x10}, {0x10, 0x10, 0x0, 0x20}, {0x10, 0x10, 0x0, 0x40},
  {0x20, 0x20, 0x0, 0x40}, {0x40, 0x40, 0x0, 0x40}, {0x40, 0x40, 0x0, 0x20}, {0x20, 0x20, 0x0, 0x20}, //Fifth
  {0x2, 0x2, 0x0, 0x20},  {0x4, 0x4, 0x0, 0x20}, {0x4, 0x4, 0x0, 0x40}, {0x2, 0x2, 0x0, 0x40},
  {0x1, 0x1, 0x0, 0x40}, {0x1, 0x1, 0x0, 0x20}, {0x1, 0x1, 0x0, 0x10}, {0x2, 0x2, 0x0, 0x10}, 
  {0x4, 0x4, 0x0, 0x10}, {0x8, 0x8, 0x0, 0x10}, {0x8, 0x8, 0x0, 0x20}, {0x8, 0x8, 0x0, 0x40}, 
  {0x8, 0x8, 0x0, 0x80}, {0x4, 0x4, 0x0, 0x80}, {0x2, 0x2, 0x0, 0x80}, {0x1, 0x1, 0x0, 0x80},//Sixth
  {0x10, 0x10, 0x0, 0x8}, {0x20, 0x20, 0x0, 0x8}, {0x40, 0x40, 0x0, 0x8}, {0x80, 0x80, 0x0, 0x8},
  {0x80, 0x80, 0x0, 0x4}, {0x80, 0x80, 0x0, 0x2}, {0x80, 0x80, 0x0, 0x1}, {0x40, 0x40, 0x0, 0x1},
  {0x20, 0x20, 0x0, 0x1}, {0x10, 0x10, 0x0, 0x1}, {0x10, 0x10, 0x0, 0x2}, {0x10, 0x10, 0x0, 0x4},
  {0x20, 0x20, 0x0, 0x4}, {0x40, 0x40, 0x0, 0x4}, {0x40, 0x40, 0x0, 0x2}, {0x20, 0x20, 0x0, 0x2}, //Seventh
  {0x2, 0x2, 0x0, 0x2},  {0x4, 0x4, 0x0, 0x2}, {0x4, 0x4, 0x0, 0x4}, {0x2, 0x2, 0x0, 0x4},
  {0x1, 0x1, 0x0, 0x4}, {0x1, 0x1, 0x0, 0x2}, {0x1, 0x1, 0x0, 0x1}, {0x2, 0x2, 0x0, 0x1},
  {0x4, 0x4, 0x0, 0x1}, {0x8, 0x8, 0x0, 0x1}, {0x8, 0x8, 0x0, 0x2}, {0x8, 0x8, 0x0, 0x4},
  {0x8, 0x8, 0x0, 0x8}, {0x4, 0x4, 0x0, 0x8}, {0x2, 0x2, 0x0, 0x8}, {0x1, 0x1, 0x0, 0x8}//Eigth
};
void setup() {} //Nothing is requried to setup
void loop() {
 for(int i = 0; i < sizeof(frames)/4; i++) //This for loop displays each frame
 {
  DDRD = frames[i].greenDdr;//Setting the DDR registers to the values stored in the frame
  DDRB = frames[i].redDdr;
  PORTD = frames[i].greenPort;//Setting the PORT registers to the values stored in the frame
  PORTB = frames[i].redPort;
  delay(100);
 }
}

