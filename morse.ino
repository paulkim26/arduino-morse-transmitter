//global
int unit = 350; //ms
bool active = true;
const char message[] = "this is a sample message";

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (active) {
    int i;
    for (i = 0; message[i] != '\0'; i++) {
      switch (message[i]) {
        case ' ': delay(unit * 7); break;
        case 'a': dot(); dash(); break;
        case 'b': dash(); dot(); dot(); dot(); break;
        case 'c': dash(); dot(); dash(); dot(); break;
        case 'd': dash(); dot(); dot(); break;
        case 'e': dot(); break;
        case 'f': dot(); dot(); dash(); dot(); break;
        case 'g': dash(); dash(); dot(); break;
        case 'h': dot(); dot(); dot(); dot(); break;
        case 'i': dot(); dot(); break;
        case 'j': dot(); dash(); dash(); dash(); break;
        case 'k': dash(); dot(); dash(); break;
        case 'l': dot(); dash(); dot(); dot(); break;
        case 'm': dash(); dash(); break;
        case 'n': dash(); dot(); break;
        case 'o': dash(); dash(); dash(); break;
        case 'p': dot(); dash(); dash(); dot(); break;
        case 'q': dash(); dash(); dot(); dash(); break;
        case 'r': dot(); dash(); dot(); break;
        case 's': dot(); dot(); dot(); break;
        case 't': dash(); break;
        case 'u': dot(); dot(); dash(); break;
        case 'v': dot(); dot(); dot(); dash(); break;
        case 'w': dot(); dash(); dash(); break;
        case 'x': dash(); dot(); dot(); dash(); break;
        case 'y': dash(); dot(); dash(); dash(); break;
        case 'z': dash(); dash(); dot(); dot(); break;
      }
      delay(unit * 3); //character spacing
    }
    delay(unit * 15); //spacing before message loops
  }
}

//morse digits
void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(unit);
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit);
}
void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(unit * 3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit);
}
