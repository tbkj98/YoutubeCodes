#include <graphics.h>

int main() {
  int gd = DETECT, gm;
  initgraph(&gd, &gm, NULL);
  
  line(0, 0, 200, 200);
  
  delay(5000);
  closegraph();
  
  return 0;
}
