//This code is for the 8 bit OR operation.
//Made by - Uttam Basu
//For more example- https://github.com/UttamBasu
//Follow me on LinkedIn - https://www.linkedin.com/in/uttam-basu/

// a = 11010101
// b = 10011001
// c = 11011101   (OR Result)

uint8_t a = 213;              //8 bit unsigned integer        //11010101
uint8_t b = 153;              //8 bit unsigned integer        //10011001        

void setup()
{
  Serial.begin(9600);

  uint8_t c = a | b;          //OR Operation

  Serial.println(a);          //It will print the integer value of a = 213
  Serial.println(a, BIN);     //It will print the binary value of a = 11010101

  Serial.println(b);          //It will print the integer value of b = 153
  Serial.println(b, BIN);     //It will print the binary value of b = 10011001

  Serial.println(c);          //It will print the integer value of c = 221
  Serial.println(c, BIN);     //It will print the binary value of c = 11011101
}

void loop()
{

}
