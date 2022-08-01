float T, h, x0, x, x_new, t;
int N;

void setup()
{
  size(600,600);
  background(255);
  T = 20.0;
  N = 4000;
  x0 = 10.0;
  h = T/N;
  x = x0;
 
}

void draw()
{
   t = frameCount*h;
   x_new = x + h*f(t,x);
   x = x_new;
   
   float tmap = map(t, 0, T, 30, width-30);
   float xmap = map(x, 0, x0+0.5, height-30, 30);
   
   strokeWeight(1.5);
   line(10, height-25, width-15, height-25);
   line(20, 30, 20, height-10);
   fill(0);
   textSize(24);
   text("x", 20, 20);
   text("t", width-10, height-20);
   
   noStroke();
   fill(255, 0, 0);
   ellipse(tmap, xmap, 5, 5);
 
   if(t>=T) noLoop();
}

float f(float t, float x)
{
 return -0.5*x;
}
   
