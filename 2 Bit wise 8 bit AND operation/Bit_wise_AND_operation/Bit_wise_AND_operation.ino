//This code is for the 8 bit AND operation.
//Made by - Uttam Basu
//For more example- https://github.com/UttamBasu
//Follow me on LinkedIn - https://www.linkedin.com/in/uttam-basu/

// a = 11010111
// b = 10111001
// c = 10010001   (AND Result)

uint8_t a = 215;              //8 bit unsigned integer        //11010111
uint8_t b = 185;              //8 bit unsigned integer        //10111001        

void setup()
{
  Serial.begin(9600);

  uint8_t c = a & b;          //AND Operation

  Serial.println(a);          //It will print the integer value of a = 215
  Serial.println(a, BIN);     //It will print the binary value of a = 11010111

  Serial.println(b);          //It will print the integer value of b = 185
  Serial.println(b, BIN);     //It will print the binary value of b = 10111001

  Serial.println(c);          //It will print the integer value of c = 145
  Serial.println(c, BIN);     //It will print the binary value of c = 10010001
}

void loop()
{

}
