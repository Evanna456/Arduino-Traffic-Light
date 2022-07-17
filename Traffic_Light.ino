int stop_light = 13;
int warning_light = 12;
int go_light = 11;

int red_count = 10 * 1000;
int green_count = 10 * 1000;

void setup() {
pinMode(stop_light, OUTPUT);
pinMode(warning_light, OUTPUT);
pinMode(go_light, OUTPUT);
}

void loop() {
    digitalWrite(stop_light, HIGH);
    delay(red_count);
    digitalWrite(stop_light, LOW);
    digitalWrite(go_light, HIGH);
    delay(green_count);
    digitalWrite(go_light, LOW);
    digitalWrite(warning_light, HIGH);
    delay(3000);
    digitalWrite(warning_light, LOW);
}
