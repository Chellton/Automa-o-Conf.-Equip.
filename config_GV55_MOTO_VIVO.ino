#include <SoftwareSerial.h>

const byte led = 3;
const byte led2 = 4;
const byte botao = 2;
int estadoBotao = LOW;
String a;


void setup() {

  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(botao, INPUT);

  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);


}

void loop() {

  comandos();

}

void comandos() {
  estadoBotao == LOW;
  estadoBotao = digitalRead(botao);
  if (estadoBotao == HIGH) {
    digitalWrite(led, HIGH);


    Serial.println("AT+GTBSI=gv55,trixlog.vivo.com.br,vivo,vivo,,,,,FFFF$\r\n");
    delay(100);

    Serial.println("AT+GTSRI=gv55,6,,1,52.21.234.182,9013,52.21.234.182,9013,,0,0,0,0,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTQSS=gv55,trixlog.vivo.com.br,vivo,vivo,6,,1,52.21.234.182,9013,52.21.234.182,9013,,0,0,0,,FFFF$\r");
    delay(100);

    // ---------------------------------------------------------------------


    Serial.println("AT+GTCFG=gv55,gv55,gv55,1,0,,,3F,2,0,182C,,0,0,300,0,,1,1,15,0,FFFF$\r");
    delay(100);

    Serial.println("AT+GTPIN=gv55,0,,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTTMA=gv55,+,0,0,0,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTOWH=gv55,0,1F,0900,1200,1300,1800,,,0,0,0,0,0,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTDOG=gv55,1,60,7,0300,,0,0,,5,10,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTPDS=gv55,1,3F9,,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTHRM=gv55,,,6F,FE17BF,FE1FBF,FF7D,EF,7D,,,,FFFF$\r");
    delay(100);
    //----------------------------------------------------------------------

    Serial.println("AT+GTFRI=gv55,1,0,,0,0000,0000,,60,1000,1000,,30,28800,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTFFC=gv55,0,0,0,,,,,,,30,500,500,300,,0,,,,,FFFF$\r");
    delay(100);

    //-----------------------------------------------------------------------

    Serial.println("AT+GTTOW=gv55,1,5,1,60,0,0,0,0,4,3,2,,,,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTGEO=gv55,0,0,0,0,50,0,0,0,0,0,0,0,,,FFFF$\r");
    delay(100);


    Serial.println("AT+GTRMD=gv55,0,,,,,1,1,,,,1,1,,,,1,1,,,,3DEF,,,3DEF,,,,,0,0,0,0,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTSPD=gv55,0,0,60,15,60,0,0,0,0,,,,,,,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTBZA=gv55,0,,,,0,0,0,,,0,0,0,,,0,0,0,,,0,0,0,,,,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTSPA=gv55,0,50,,60,0,,,70,,60,0,,,90,,60,0,,,110,,60,0,,,,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTSOS=gv55,0,0,,0,0,0,0,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTIDL=gv55,0,2,1,0,,,,0,0,0,0,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTSSR=gv55,0,2,1,5,0,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTHBM=gv55,0,,,100,0,0,,60,0,0,,,0,0,,0,0,0,0,48,50,42,50,FFFF$\r");
    delay(100);

    Serial.println("AT+GTJDC=gv55,0,25,,5,10,10,,0,0,0,0,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTCRA=gv55,0,5,0,,,,,0,0,0,0,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTGPJ=gv55,0,15,3,,,,,0,0,0,0,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTJBS=gv55,0,,10,10,60,30,3600,1,30,120,0,,,FFFF$\r");
    delay(100);

    //------------------------------------------------------------------

    Serial.println("AT+GTOUT=gv55,0,0,0,0,0,0,,,,3,,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTDIS=gv55,0,2,,0,1,1,10,1,,,,,,,,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTIOB=gv55,0,0,0,0,0,0,0,0,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTEPS=gv55,2,5000,28000,12,5,0,0,0,0,1,0,0,,FFFF$\r");
    delay(100);

    //-------------------------------------------------------------------

    Serial.println("AT+GTRTO=gv55,0,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTHMC=gv55,0,00000:00:00,,,,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTWLT=gv55,0,1,1,,,,,,FFFF$\r");
    delay(100);

    Serial.println("AT+GTCMD=gv55,0,0,,,,,,FFFF$\r");
    delay(100);


    Serial.println("AT+GTUDF=gv55,0,0,0,0,0,0,0,0,,,,,FFFF$\r");
    delay(100);




    //Serial.print("AT+GTBSI?\"gv55\" \r\n");

    delay(500);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);

    digitalWrite(led, LOW);

    if (Serial.available()) {
      Serial.write(Serial.read());
    }
    teste();

  }

}

void fim() {
  Serial.println("fimmmmm");
  digitalWrite(led, LOW);
  //teste();
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  comandos();
}

void teste() {

  Serial.print("AT+ESLP=1\r\n");


  if (Serial.available()) {


    a = Serial.readString();

    Serial.println(a);
    delay(200);


  }


  fim();


}
