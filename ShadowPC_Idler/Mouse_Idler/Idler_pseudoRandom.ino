/* Idler Type:
    - Moves the mouse randomly in a triangle to avoid scripted "bot detection"
      - Pseudo Random length in xyz (not direction)
      - Pseudo Random speed
*/

void setup() { } // no setup needed
void loop() {
  int i;
  for (i=0; i<random(10, 50); i++) {
    Mouse.move(2, -1);
    delay(random(1, 50));
  }
  for (i=0; i<random(10, 50); i++) {
    Mouse.move(2, 2);
    delay(random(1, 50));
  }
  for (i=0; i<random(10, 50); i++) {
    Mouse.move(-4, -1);
    delay(random(1, 50));
  }
}
