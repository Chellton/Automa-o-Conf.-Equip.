#include <SoftwareSerial.h>

const int led = 3;
const int led2 = 4;
const int botao = 2;
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
    Serial.println("AT+GTSRI=gv55,6,,1,52.21.234.182,9013,52.21.234.182,9013,,0,0,0,0,,30,FFFF$\r");
    delay(100);
    Serial.println("AT+GTQSS=gv55,trixlog.vivo.com.br,vivo,vivo,6,,1,52.21.234.182,9013,52.21.234.182,9013,,0,0,0,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTOUT=gv55,0,0,0,0,0,0,,,,3,,,,,,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTEPS=gv55,1,250,11000,3,3,0,0,0,0,1,0,0,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTDIS=gv55,0,2,5,0,1,1,10,1,,,,,,,,,,,,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTFRI=gv55,1,0,,0,0000,0000,,60,1000,1000,,30,1800,,,,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTSPD=gv55,2,0,60,15,60,0,0,0,0,,,,,,,,,,,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTUPC=gv55,0,10,0,0,0,,0,,0,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTDOG=gv55,1,60,7,0300,,1,0,,60,60,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTHBM=gv55,2,,,,,,,,,,,,,,,0,0,0,0,48,50,42,50,FFFF$\r");
    delay(100);
    Serial.println("AT+GTTOW=gv55,1,5,1,60,0,0,0,0,2,3,2,,,,,,,,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTCRA=gv55,1,5,0,,,,,0,0,0,0,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTPDS=gv55,1,3F9,,,,,,,FFFF$\r");
    delay(100);
    Serial.println("AT+GTCFG=gv55,gv55,gv55,1,0,,,3F,1,0,182C,,1,0,300,0,,1,1,1D,0,FFFF$\r");
    delay(100);

    // Serial.print("AT+GTBSI?\"gv55\" \r\n");

    delay(1000);


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
