/*
 * Laser Security System
 */

#define LDR_PIN      A0
#define BUZZER_PIN   8
#define LED_PIN      9

#define THRESHOLD    500
#define TRIGGER_DELAY 50

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Laser Security System Ready");
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  Serial.print("LDR: ");
  Serial.println(ldrValue);

  if (ldrValue < THRESHOLD) {
    delay(TRIGGER_DELAY);
    if (analogRead(LDR_PIN) < THRESHOLD) {
      triggerAlarm();
    }
  } else {
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
  }

  delay(20);
}

void triggerAlarm() {
  Serial.println(">>> BEAM BROKEN — ALARM! <<<");
  digitalWrite(LED_PIN, HIGH);
  tone(BUZZER_PIN, 1000);
}