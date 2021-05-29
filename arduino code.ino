
int ledPin= 13;
char c ;


void setup()
{

  Serial.begin(9600); // initialisation de la connexion série (avec le module bluetooth)


  pinMode(ledPin, OUTPUT); // fixe la pin "ledpin" en sortie
}

void loop() {

char c = Serial.read();

  switch (c) {
  case '1': // si arduino reçois le chiffre 1 alors
    digitalWrite(ledPin, HIGH); // allume sur la broche "ledpin"
   Serial.println("ok,on");
    break;
  case '2': // si arduino reçois le chiffre 2 alors
  Serial.println("ok,off");
    digitalWrite(ledPin, LOW); // eteins la led sur la broche "ledpin"
    break;
  case '3': // si arduino reçois le chiffre 3 alors clignote
   Serial.println("ok,clig");
  while(c=='3'){
   digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin,LOW);
     delay(500);}
    
    case '4' :
    Serial.println("ok,timer");
    digitalWrite(ledPin, HIGH);
   delay(5000);
   digitalWrite(ledPin,LOW);


  }
}
