/* Idler Type:
    - Moves the mouse size to side
      - Moves the mouse 1pixel to the left, then 1 pixel to the right
*/

void setup() { } // no setup needed
void loop() {
  int i;
  for (i=0; i<2; i++) {
    Mouse.move(1, 0);
    delay(25);
  }
  for (i=0; i<2; i++) {
    Mouse.move(-1, 0);
    delay(25);
  }
}
