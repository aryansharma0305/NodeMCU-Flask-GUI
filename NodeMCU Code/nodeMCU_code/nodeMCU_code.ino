#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ArduinoJson.h>

#define SSID "Sharma House"
#define PASSWORD "Aryan123@"

String id = SSID;
String pass = PASSWORD ;

ESP8266WebServer server(80);  
#define led1 'D0'
#define led2 'D1'
#define led3 'D2'
#define led4 'D5'


void ledoneon(){

    Serial.println(digitalRead(D0));
    digitalWrite(D0,HIGH);
    StaticJsonDocument<300> JSONData;
    // Use the object just like a javascript object or a python dictionary
    JSONData["led1"] = String(digitalRead(D0));
    JSONData["led2"] = String(digitalRead(D1));
    JSONData["led3"] = String(digitalRead(D2));
    JSONData["led4"] = String(digitalRead(D5));

    // You can add more fields
    char data[300];
    // Converts the JSON object to String and stores it in data variable
    serializeJson(JSONData,data);
    // Set content type as application/json and send the data
    server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200,"application/json",data);
  
}
void ledoneoff(){

    
    Serial.println(digitalRead(D0));
    digitalWrite(D0,LOW);
    StaticJsonDocument<300> JSONData;
    // Use the object just like a javascript object or a python dictionary
    JSONData["led1"] = String(digitalRead(D0));
    JSONData["led2"] = String(digitalRead(D1));
    JSONData["led3"] = String(digitalRead(D2));
    JSONData["led4"] = String(digitalRead(D5));

    // You can add more fields
    char data[300];
    // Converts the JSON object to String and stores it in data variable
    serializeJson(JSONData,data);
    // Set content type as application/json and send the data
    server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200,"application/json",data);
}

void ledtwoon(){

    Serial.println(digitalRead(D1));
    digitalWrite(D1,HIGH);
    StaticJsonDocument<300> JSONData;
    // Use the object just like a javascript object or a python dictionary
    JSONData["led1"] = String(digitalRead(D0));
    JSONData["led2"] = String(digitalRead(D1));
    JSONData["led3"] = String(digitalRead(D2));
    JSONData["led4"] = String(digitalRead(D5));

    // You can add more fields
    char data[300];
    // Converts the JSON object to String and stores it in data variable
    serializeJson(JSONData,data);
    // Set content type as application/json and send the data
    server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200,"application/json",data);
}
void ledtwooff(){

    
    Serial.println(digitalRead(D1));
    digitalWrite(D1,LOW);
    StaticJsonDocument<300> JSONData;
    // Use the object just like a javascript object or a python dictionary
    JSONData["led1"] = String(digitalRead(D0));
    JSONData["led2"] = String(digitalRead(D1));
    JSONData["led3"] = String(digitalRead(D2));
    JSONData["led4"] = String(digitalRead(D5));

    // You can add more fields
    char data[300];
    // Converts the JSON object to String and stores it in data variable
    serializeJson(JSONData,data);
    // Set content type as application/json and send the data
    server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200,"application/json",data);
}


void ledthreeon(){

    Serial.println(digitalRead(D2));
    digitalWrite(D2,HIGH);
    StaticJsonDocument<300> JSONData;
    // Use the object just like a javascript object or a python dictionary
    JSONData["led1"] = String(digitalRead(D0));
    JSONData["led2"] = String(digitalRead(D1));
    JSONData["led3"] = String(digitalRead(D2));
    JSONData["led4"] = String(digitalRead(D5));

    // You can add more fields
    char data[300];
    // Converts the JSON object to String and stores it in data variable
    serializeJson(JSONData,data);
    // Set content type as application/json and send the data
    server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200,"application/json",data);
}
void ledthreeoff(){

    
    Serial.println(digitalRead(D2));
    digitalWrite(D2,LOW);
    StaticJsonDocument<300> JSONData;
    // Use the object just like a javascript object or a python dictionary
    JSONData["led1"] = String(digitalRead(D0));
    JSONData["led2"] = String(digitalRead(D1));
    JSONData["led3"] = String(digitalRead(D2));
    JSONData["led4"] = String(digitalRead(D5));

    // You can add more fields
    char data[300];
    // Converts the JSON object to String and stores it in data variable
    serializeJson(JSONData,data);
    // Set content type as application/json and send the data
    server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200,"application/json",data);
}





void ledfouron(){

    Serial.println(digitalRead(D5));
    digitalWrite(D5,HIGH);
    StaticJsonDocument<300> JSONData;
    // Use the object just like a javascript object or a python dictionary
    JSONData["led1"] = String(digitalRead(D0));
    JSONData["led2"] = String(digitalRead(D1));
    JSONData["led3"] = String(digitalRead(D2));
    JSONData["led4"] = String(digitalRead(D5));

    // You can add more fields
    char data[300];
    // Converts the JSON object to String and stores it in data variable
    serializeJson(JSONData,data);
    // Set content type as application/json and send the data
    server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200,"application/json",data);
}
void ledfouroff(){

    
    Serial.println(digitalRead(D5));
    digitalWrite(D5,LOW);
    StaticJsonDocument<300> JSONData;
    // Use the object just like a javascript object or a python dictionary
    JSONData["led1"] = String(digitalRead(D0));
    JSONData["led2"] = String(digitalRead(D1));
    JSONData["led3"] = String(digitalRead(D2));
    JSONData["led4"] = String(digitalRead(D5));

    // You can add more fields
    char data[300];
    // Converts the JSON object to String and stores it in data variable
    serializeJson(JSONData,data);
    // Set content type as application/json and send the data
    server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200,"application/json",data);
}





void ledinfo(){

    

    StaticJsonDocument<300> JSONData;
    // Use the object just like a javascript object or a python dictionary
    JSONData["led1"] = String(digitalRead(D0));
    JSONData["led2"] = String(digitalRead(D1));
    JSONData["led3"] = String(digitalRead(D2));
    JSONData["led4"] = String(digitalRead(D5));

    // You can add more fields
    char data[300];
    // Converts the JSON object to String and stores it in data variable
    serializeJson(JSONData,data);
    // Set content type as application/json and send the data
    server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200,"application/json",data);
}






void setup() {

    pinMode(D0,OUTPUT);
    pinMode(D1,OUTPUT);
    pinMode(D2,OUTPUT);
    pinMode(D5,OUTPUT);
    Serial.begin(9600);
    WiFi.begin(SSID,PASSWORD);
    while(WiFi.status() != WL_CONNECTED){
      Serial.println("Connecting");
    delay(1000);
    }
    Serial.println("Connected to");
    Serial.println(WiFi.localIP());
    delay(500);
    server.on("/LED1ON",HTTP_GET,ledoneon);
    server.on("/LED1OFF",HTTP_GET,ledoneoff);
    server.on("/LED2ON",HTTP_GET,ledtwoon);
    server.on("/LED2OFF",HTTP_GET,ledtwooff);
    server.on("/LED3ON",HTTP_GET,ledthreeon);
    server.on("/LED3OFF",HTTP_GET,ledthreeoff);
    server.on("/LED4ON",HTTP_GET,ledfouron);
    server.on("/LED4OFF",HTTP_GET,ledfouroff);
    server.on("/INFO",HTTP_GET,ledinfo);
    
    server.begin();
}

void loop() {
  server.handleClient();
}