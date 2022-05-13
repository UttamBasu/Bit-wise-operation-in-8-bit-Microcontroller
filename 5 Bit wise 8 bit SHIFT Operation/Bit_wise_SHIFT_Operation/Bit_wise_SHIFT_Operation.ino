//This code is for the SHIFT operation of 8 bit data.
//Made by - Uttam Basu
//For more example- https://github.com/UttamBasu
//Follow me on LinkedIn - https://www.linkedin.com/in/uttam-basu/

// a = 11010101
// b = 00011001
// c = 11001100

uint8_t a = 213;              //8 bit unsigned integer        //11010101
uint8_t b = 25;               //8 bit unsigned integer        //00011001
uint8_t c = 204;              //8 bit unsigned integer        //11001100

void setup()
{
  Serial.begin(9600);

  //1 bit left shift of the variable a. It will put 0 on blank space
  uint8_t x = a << 1;                             //1 bit left shift of a         1101 0101 -> 1010 1011
  //1 bit Circular left shift of the variable a.
  uint8_t p = (a << 1) | (a >> (8 - 1));


  //4 bit right shift. It will put 0 on blank space
  uint8_t y = b >> 4;                             //4 bit right shift of b        0001 1001 -> 0000 0001
  //4 bit circular right shift
  uint8_t q = (b >> 4) | (b << (8 - 4));


  //2 bit left shift. It will put 0 on blank space
  uint8_t z = c << 2;                             //2 bit left shift a c          1100 1100 -> 0011 0000
  //2 bit circular left shift
  uint8_t r = (c << 2) | (b >> (8 - 2));


  //now print the all value
  Serial.println(a);          //It will print the integer value of a = 213
  Serial.println(a, BIN);     //It will print the binary value of a = 1101 0101
  Serial.println(x);          //It will print the integer value of x = 170
  Serial.println(x, BIN);     //It will print the binary value of x = 1010 1011
  Serial.println(p);          //It will print the integer value of p = 171
  Serial.println(p, BIN);     //It will print the binary value of p = 10101011
  Serial.println("\n");

  Serial.println(b);          //It will print the integer value of b = 25
  Serial.println(b, BIN);     //It will print the binary value of b = 0001 1001
  Serial.println(y);          //It will print the integer value of y = 1
  Serial.println(y, BIN);     //It will print the binary value of y = 0000 0001
  Serial.println(q);          //It will print the integer value of q = 145
  Serial.println(q, BIN);     //It will print the binary value of q = 1001 0001
  Serial.println("\n");

  Serial.println(c);          //It will print the integer value of c = 204
  Serial.println(c, BIN);     //It will print the binary value of c = 1100 1100
  Serial.println(z);          //It will print the integer value of z = 48
  Serial.println(z, BIN);     //It will print the binary value of z = 0011 0000
  Serial.println(r);          //It will print the integer value of r = 48
  Serial.println(r, BIN);     //It will print the binary value of r = 0011 0000
}

void loop()
{

}
