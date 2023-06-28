SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D0, INPUT);
  pinMode(D1, OUTPUT);
  Serial.begin(9600);
}

bool once = false;
bool state = false;

void loop() {
  if(digitalRead(D0)==HIGH&&!once) {
    Serial.println("Button Clicked");
    state = !state;
    once=true;
  }
  if(digitalRead(D0)==LOW) {
    once = false;
  }
  if(state) {
    digitalWrite(D1, HIGH);
  } else {
    digitalWrite(D1, LOW);
  }
}