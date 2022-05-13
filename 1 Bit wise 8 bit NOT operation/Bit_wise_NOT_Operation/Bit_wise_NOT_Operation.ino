//This code is for the 8 bit NOT operation.
//Made by - Uttam Basu
//For more example- https://github.com/UttamBasu
//Follow me on LinkedIn - https://www.linkedin.com/in/uttam-basu/


uint8_t a = 170;              //8 bit unsigned integer        //1010 1010

void setup()
{
  Serial.begin(9600);
  uint8_t y = ~a;             //Inverting the all bit.
  Serial.println(a);          //It will print the integer value of a = 170
  Serial.println(a, BIN);     //It will print the binary value of a = 1010 1010

  Serial.println(y);          //It will print the integer value of y = 85
  Serial.println(y, BIN);     //It will print the binary value o y = 0101 0101
}

void loop()
{

}
