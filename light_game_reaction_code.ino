// BUTTONS
#define BUT1 D0
#define BUT2 D1
#define BUT3 D2
#define BUT4 D3
#define BUT5 D4

// LEDS
#define LED1 D5
#define LED2 D6
#define LED3 D7
#define LED4 D8
#define LED5 D9

//viarables
int stage = 0;
int score = 0;

unsigned long startTime = 0;
unsigned long timeLimit = 3000;

brightness = analogWrite(LED2, value)

void startLevel() {

    //like the time

    if (level == 1) {
        timeLimit = 3000;
        digitalWrite(LED1, HIGH);
        sleep(10)
        digitalWrite(LED1, LOW);
  
    }
    else if (level == 2) {
        timeLimit = 2500;
        digitalWrite(LED1, HIGH);
        sleep(10)
        digitalWrite(LED2, HIGH);
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
    }
    else if (level == 3) {
        timeLimit = 2000;
        digitalWrite(LED1, HIGH);
        sleep(10);
        digitalWrite(LED2, HIGH);
        sleep(10);
        digitalWrite(LED3, HIGH);
        sleep(10);
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);

        
    }
    else if (level == 4) {
        timeLimit = 1500;
        digitalWrite(LED1, HIGH);
        sleep(10)
        digitalWrite(LED2, HIGH);
        sleep(10)
        digitalWrite(LED3, HIGH);
        sleep(10)
        digitalWrite(LED4, HIGH);
        sleep(10)
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
    }

        else if (level == 5) {
        timeLimit = 1000;
        digitalWrite(LED1, HIGH);
        sleep(10)
        digitalWrite(LED2, HIGH);
        sleep(10)
        digitalWrite(LED3, HIGH);
        sleep(10)
        digitalWrite(LED4, HIGH);
        sleep(10)
        digitalWrite(LED5, HIGH
        sleep(10))
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, LOW)
    }
            else if (level == win) {
        timeLimit = 1000;
        digitalWrite(LED1, HIGH);
        sleep(10)
        digitalWrite(LED2, HIGH);
        sleep(10)
        digitalWrite(LED3, HIGH);
        sleep(10)
        digitalWrite(LED4, HIGH);
        sleep(10)
        digitalWrite(LED5, HIGH
        sleep(10))
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, LOW)
    }

    // Start the timer
    startTime = millis();

    // bleh you dead
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);


void setup() {

    pinMode(BUT1, INPUT_PULLUP);
    pinMode(BUT2, INPUT_PULLUP);
    pinMode(BUT3, INPUT_PULLUP);
    pinMode(BUT4, INPUT_PULLUP);
    pinMode(BUT5, INPUT_PULLUP);

    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    pinMode(LED5, OUTPUT);

}


void loop() {

  if (digetalRead(BUT2) == HIGH{
    analogWrite(LED1, 255)
  })

  if (digetalRead(BUT1) == HIGH) {
    but1time = millis(); //start game

    digetalWrite (LED3, HIGH); //level 1

    level = 1;
    startTime = millis();

    if (digetalRead(BUT3) == HIGH){ //1
      digetalWrite (LED3, LOW);
      digetalWrite (LED5 HIGH);
      
      if (digetalRead(BUT5) == HIGH){ //2
        digetalWrite (LED5, LOW);
        digetalWrite (LED2, HIGH);

        if (digetalRead(BUT2) == HIGH){ //3
          digetalWrite (LED2, LOW);
          digetalWrite (LED4, HIGH)

          if (digetalRead(BUT4) == HIGH){ //4
            digetalWrite (LED4, LOW)
            digetalWrite (LED1, HIGH)

            if (digetalRead(BUT1) == HIGH){ //5
              digetalWrite (LED1, LOW)

                  level = 2;            //level 2
                  startTime = millis();
                  digitalRead (LED3, HIGH);

                      if (digetalRead(BUT3) == HIGH){ //1
                        digetalWrite (LED3, LOW);
                        digetalWrite (LED2, HIGH);
                        
                        if (digetalRead(BUT2) == HIGH){ //2
                          digetalWrite (LED2, LOW);
                          digetalWrite (LED4, HIGH);

                          if (digetalRead(BUT4) == HIGH){ //3
                            digetalWrite (LED4, LOW);
                            digetalWrite (LED1, HIGH)

                            if (digetalRead(BUT1) == HIGH){ //4
                              digetalWrite (LED1, LOW)
                              digetalWrite (LED5, HIGH)

                              if (digetalRead(BUT5 == HIGH){ //5
                                digetalWrite (LED5, LOW)
                              
                                level = 3;            //level 3
                                startTime = millis();
                                digitalRead (LED2, HIGH);

                                if (digetalRead(BUT2) == HIGH){ //1
                                  digetalWrite (LED2, LOW);
                                  digetalWrite (LED3, HIGH);
                                  
                                  if (digetalRead(BUT3) == HIGH){ //2
                                    digetalWrite (LED3, LOW);
                                    digetalWrite (LED2, HIGH);

                                    if (digetalRead(BUT2) == HIGH){ //3
                                      digetalWrite (LED2, LOW);
                                      digetalWrite (LED5, HIGH)

                                      if (digetalRead(BUT5) == HIGH){ //4
                                        digetalWrite (LED5, LOW)
                                        digetalWrite (LED1, HIGH)

                                        if (digetalRead(BUT1) == HIGH){ //5
                                          digetalWrite (LED1, LOW)
                                          
                                          level = 4;
                                          startTime = millis();
                                          digitalRead (LED3, HIGH)
                                          
                                          if (digitalRead(BUT3) == HIGH){ //1
                                            digitalWrite(LED3, LOW);
                                            digitalWrite(LED4, HIGH);
                                            
                                            if (digitalRead(BUT4) == HIGH){ //2
                                              digitalWrite(LED4, LOW);
                                              digitalWrite(LED5, HIGH);

                                              if (digitalRead(BUT5) == HIGH){ //3
                                                digitalWrite(LED4, LOW);
                                                digitalWrite(LED2, HIGH);

                                                if (digitalRead(BUT2) == HIGH){ //4
                                                  digitalWrite(LED2, LOW);
                                                  digitalWrite(LED1, HIGH);
                                                  if (digitalRead(BUT1) == HIGH){
                                                    digitalWrite(LED1, LOW);

                                                    level = 5
                                                    startTime = millis();
                                                    digitalWrite
                                                    if (digitalRead(BUT1) == HIGH){
                                                    digitalWrite(LED1, LOW);
                                                    
                                                    
                                                  }
                                                  }
                                          }
                                        }
          }
        }
      }
    }
  } 
}


