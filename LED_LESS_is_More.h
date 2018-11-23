//Each method depicts a different capital letter
//
//Class Set up by Sama Zaki

#include "letters.h"
//Lauren Mangibin - methods: setStandardColor,


void letterA(){
 
  //Show letter
  leds[2] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[13] = CRGB:: Blue;
  leds[20] = CRGB:: Blue;
  leds[24] = CRGB:: Blue;
  FastLED.delay(1000);
  //Remove letter
  leds[2] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[13] = CRGB:: Black;
  leds[20] = CRGB:: Black;
  leds[24] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterB(){
  //Show letter
  leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[16] = CRGB:: Blue;
  leds[21] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  leds[23] = CRGB:: Blue;
  FastLED.delay(1000);
  //Remove letter
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[16] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  leds[23] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterC(){
  leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[21] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  leds[23] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[8]  = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  leds[23] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterD(){
  leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[13] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[16] = CRGB:: Blue;
  leds[21] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[13] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[16] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterE(){
  leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[21] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  leds[23] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  leds[23] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterF(){
  leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[21] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterG(){
  leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[17] = CRGB:: Blue;
  leds[16] = CRGB:: Blue;
  leds[21] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  leds[23] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[17] = CRGB:: Black;
  leds[16] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  leds[23] = CRGB:: Black;
  FastLED.delay(1000);
 
}
void letterH(){
  leds[1] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[13] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[16] = CRGB:: Blue;
  leds[21] = CRGB:: Blue;
  leds[23] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[13] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[16] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[23] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterI(){
  leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[7] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[17] = CRGB:: Blue;
  leds[21] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  leds[23] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[7] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[17] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  leds[23] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterJ(){
  leds[0]= CRGB:: Blue;
  leds[1]= CRGB:: Blue;
  leds[2]= CRGB:: Blue;
  leds[3]= CRGB:: Blue;
  leds[4]= CRGB:: Blue;
  leds[7]= CRGB:: Blue;
  leds[12]= CRGB:: Blue;
  leds[17]= CRGB:: Blue;
  leds[21]= CRGB:: Blue;
  leds[22]= CRGB:: Blue;
  leds[19]= CRGB:: Blue;
  FastLED.delay(1000);
  leds[0] = CRGB:: Black;
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[4] = CRGB:: Black;
  leds[7] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[17] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  leds[19] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterK(){
  leds[1]= CRGB:: Blue;
  leds[6]= CRGB:: Blue;
  leds[8]= CRGB:: Blue;
  leds[11]= CRGB:: Blue;
  leds[12]= CRGB:: Blue;
  leds[18]= CRGB:: Blue;
  leds[16]= CRGB:: Blue;
  leds[21]= CRGB:: Blue;
  leds[23]= CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[16] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[23] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterL(){
  leds[1]= CRGB:: Blue;
  leds[8]= CRGB:: Blue;
  leds[11]= CRGB:: Blue;
  leds[18]= CRGB:: Blue;
  leds[21]= CRGB:: Blue;
  leds[22]= CRGB:: Blue;
  leds[23]= CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  leds[23] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterM(){
  leds[0] = CRGB:: Blue;
  leds[4] = CRGB:: Blue;
  leds[9] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[5] = CRGB:: Blue;
 leds[10] = CRGB:: Blue;
leds[12] = CRGB:: Blue;
leds[14] = CRGB:: Blue;
leds[19] = CRGB:: Blue;
leds[15] = CRGB:: Blue;
leds[20] = CRGB:: Blue;
leds[24] = CRGB:: Blue;
  FastLED.delay(1000);
  //Remove letter
  leds[0] = CRGB:: Black;
  leds[4] = CRGB:: Black;
  leds[9] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[5] = CRGB:: Black;
  leds[10] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[14] = CRGB:: Black;
  leds[19] = CRGB:: Black;
  leds[15] = CRGB:: Black;
  leds[20] = CRGB:: Black;
  leds[24] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterN(){
 leds[0] = CRGB:: Blue;
  leds[4] = CRGB:: Blue;
  leds[9] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[5] = CRGB:: Blue;
  leds[10] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[14] = CRGB:: Blue;
  leds[19] = CRGB:: Blue;
  leds[16] = CRGB:: Blue;
leds[15] = CRGB:: Blue;
leds[20] = CRGB:: Blue;
leds[24] = CRGB:: Blue;
FastLED.delay(1000);
  leds[0] = CRGB:: Black;
  leds[4] = CRGB:: Black;
  leds[9] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[5] = CRGB:: Black;
  leds[10] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[14] = CRGB:: Black;
  leds[19] = CRGB:: Black;
  leds[16] = CRGB:: Black;
leds[15] = CRGB:: Black;
leds[20] = CRGB:: Black;
leds[24] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterO(){
leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[9] = CRGB:: Blue;
  leds[5] = CRGB:: Blue;
  leds[10] = CRGB:: Blue;
  leds[14] = CRGB:: Blue;
  leds[19] = CRGB:: Blue;
  leds[15] = CRGB:: Blue;
  leds[21] = CRGB:: Blue;
leds[22] = CRGB:: Blue;
leds[23] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[9] = CRGB:: Black;
  leds[5] = CRGB:: Black;
  leds[10] = CRGB:: Black;
  leds[14] = CRGB:: Black;
  leds[19] = CRGB:: Black;
  leds[15] = CRGB:: Black;
  leds[21] = CRGB:: Black;
leds[22] = CRGB:: Black;
leds[23] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterP(){
leds[8] = CRGB:: Blue;
  leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[9] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[10] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[19] = CRGB:: Blue;
  leds[20] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[8] = CRGB:: Black;
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[9] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[10] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[19] = CRGB:: Black;
  leds[20] = CRGB:: Black;
  FastLED.delay(1000);

}
void letterQ(){
leds[2] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[13] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[17] = CRGB:: Blue;
  leds[16] = CRGB:: Blue;
leds[22] = CRGB:: Blue;
leds[23] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[2] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[13] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[17] = CRGB:: Black;
  leds[16] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  leds[23] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterR(){
leds[0]= CRGB:: Blue;
leds[1]= CRGB:: Blue;
leds[2]= CRGB:: Blue;
leds[9]= CRGB:: Blue;
leds[6]= CRGB:: Blue;
leds[10]= CRGB:: Blue;
leds[11]= CRGB:: Blue;
leds[12]= CRGB:: Blue;
leds[19]= CRGB:: Blue;
leds[16]= CRGB:: Blue;
leds[20]= CRGB:: Blue;
leds[23]= CRGB:: Blue;
FastLED.delay(1000);
leds[0] = CRGB:: Black;
leds[1] = CRGB:: Black;
leds[2] = CRGB:: Black;
leds[9] = CRGB:: Black;
leds[6] = CRGB:: Black;
leds[10] = CRGB:: Black;
leds[11] = CRGB:: Black;
leds[12] = CRGB:: Black;
leds[19] = CRGB:: Black;
leds[16] = CRGB:: Black;
leds[20] = CRGB:: Black;
leds[23] = CRGB:: Black;
FastLED.delay(1000);
}

void letterS(){
leds[1]= CRGB:: Blue;
leds[2]= CRGB:: Blue;
leds[3]= CRGB:: Blue;
leds[8]= CRGB:: Blue;
leds[11]= CRGB:: Blue;
leds[12]= CRGB:: Blue;
leds[13]= CRGB:: Blue;
leds[16]= CRGB:: Blue;
leds[21]= CRGB:: Blue;
leds[22]= CRGB:: Blue;
leds[23]= CRGB:: Blue;
FastLED.delay(1000);
leds[1] = CRGB:: Black;
leds[2] = CRGB:: Black;
leds[3] = CRGB:: Black;
leds[8] = CRGB:: Black;
leds[11] = CRGB:: Black;
leds[12] = CRGB:: Black;
leds[13] = CRGB:: Black;
leds[16] = CRGB:: Black;
leds[21] = CRGB:: Black;
leds[22] = CRGB:: Black;
leds[23] = CRGB:: Black;
FastLED.delay(1000);

}
void letterT(){
  leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[7] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[17] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[7] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[17] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterU(){
  leds[1] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[13] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[16] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[1] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[13] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[16] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterV(){
  leds[0] = CRGB:: Blue;
  leds[4] = CRGB:: Blue;
  leds[11] = CRGB:: Blue;
  leds[13] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[16] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[0] = CRGB:: Black;
  leds[4] = CRGB:: Black;
  leds[11] = CRGB:: Black;
  leds[13] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[16] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterW(){
  leds[0] = CRGB:: Blue;
  leds[4] = CRGB:: Blue;
  leds[9] = CRGB:: Blue;
  leds[5] = CRGB:: Blue;
  leds[10] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[14] = CRGB:: Blue;
  leds[19] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[16] = CRGB:: Blue;
  leds[15] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  leds[24] = CRGB::Blue;
  FastLED.delay(1000);
  leds[0] = CRGB:: Black;
  leds[4] = CRGB:: Black;
  leds[9] = CRGB:: Black;
  leds[5] = CRGB:: Black;
  leds[10] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[14] = CRGB:: Black;
  leds[19] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[16] = CRGB:: Black;
  leds[15] = CRGB::Black;
  leds[20] = CRGB::Black;
  leds[24] = CRGB::Black;
  FastLED.delay(1000);
}
void letterX(){
  leds[0] = CRGB:: Blue;
  leds[4] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[16] = CRGB:: Blue;
  leds[20] = CRGB:: Blue;
  leds[24] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[0] = CRGB:: Black;
  leds[4] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[16] = CRGB:: Black;
  leds[20] = CRGB:: Black;
  leds[24] = CRGB:: Black;
  FastLED.delay(1000);

}
void letterY(){
  leds[0] = CRGB:: Blue;
  leds[4] = CRGB:: Blue;
  leds[8] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[17] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[0] = CRGB:: Black;
  leds[4] = CRGB:: Black;
  leds[8] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[17] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  FastLED.delay(1000);
}
void letterZ(){
  leds[0] = CRGB:: Blue;
  leds[1] = CRGB:: Blue;
  leds[2] = CRGB:: Blue;
  leds[3] = CRGB:: Blue;
  leds[4] = CRGB:: Blue;
  leds[6] = CRGB:: Blue;
  leds[12] = CRGB:: Blue;
  leds[18] = CRGB:: Blue;
  leds[20] = CRGB:: Blue;
  leds[21] = CRGB:: Blue;
  leds[22] = CRGB:: Blue;
  leds[23] = CRGB:: Blue;
  leds[24] = CRGB:: Blue;
  FastLED.delay(1000);
  leds[0] = CRGB:: Black;
  leds[1] = CRGB:: Black;
  leds[2] = CRGB:: Black;
  leds[3] = CRGB:: Black;
  leds[4] = CRGB:: Black;
  leds[6] = CRGB:: Black;
  leds[12] = CRGB:: Black;
  leds[18] = CRGB:: Black;
  leds[20] = CRGB:: Black;
  leds[21] = CRGB:: Black;
  leds[22] = CRGB:: Black;
  leds[23] = CRGB:: Black;
  leds[24] = CRGB:: Black;
  FastLED.delay(1000);
}


Project framework class
//the code below goes in the loop() method
Serial.println("Enter a letter:: "); //Prompt User for input
  while (Serial.available()==0) {         
  FastLED.delay(50);
  FastLED.delay(50);	//Wait for user input
 
  }
  letter=Serial.readString();             	//Read user input into letter

  letter.toUpperCase();

if(letter == ‘A’){
	letterA();
  }
  else if(letter == ‘B’){
	letterB();
  }
  else if(letter == ‘C’){
	letterC();
  }
  else if(letter == ‘D’){
	letterD();
  }
  else if(letter == ‘E’){
	letterE();
  }
  else if(letter == ‘F’){
	letterF();
  }
  else if(letter == ‘G’){
	letterG();
  }
  else if(letter == ‘H’){
	letterH();
  }
  else if(letter == ‘I’){
	letterI();
  }
  else if(letter == ‘J’){
	letterJ();
  }
  else if(letter == ‘K’){
	letterK();
  }
  else if(letter == ‘L’){
	letterL();
  }
  else if(letter == ‘M’){
	letterM();
  }
  else if(letter == ‘N’){
	letterN();
  }
  else if(letter == ‘O’){
	letterB();
  }
  else if(letter == ‘P’){
	letterP();
  }
  else if(letter == ‘Q’){
	letterQ();
  }
  else if(letter == ‘R’){
	letterR();
  }
  else if(letter == ‘S’){
	letterS();
  }
  else if(letter == ‘T’){
	letterT();
  }
  else if(letter == ‘U’){
	letterU();
  }
  else if(letter == ‘V’){
	letterV();
  }
  else if(letter == ‘W’){
	letterW();
  }
  else if(letter == ‘X’){
	letterX();
  }
  else if(letter == ‘Y’){
	letterY();
  }
  else if(letter == ‘Z’){
	letterZ();
  }
  }