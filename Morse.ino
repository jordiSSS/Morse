
  
  
  
  
  
  

const int pin = 8;   // pin for speaker

int note = 1047;
int velocidad = 10;

//****** Setup ****************************************************************
void setup()
{
}
//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocidad);
  delay(1000/velocidad); 
  delay(1000/velocidad); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocidad));
  delay(3*(1000/velocidad)); 
  delay(1000/velocidad);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocidad));  
}

void espaiP()  //Espai entre paraules
{
  delay(6*(1000/velocidad)); 
  }
//****** Loop *****************************************************************
void loop()
{
  
  //S
  punt();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //Y
  ratlla();
  punt();
  ratlla();
  ratlla();
  //Espai entre paraules
  espaiP();
  //A
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //I
  punt();
  punt();
   espaiP();
 
 
}
