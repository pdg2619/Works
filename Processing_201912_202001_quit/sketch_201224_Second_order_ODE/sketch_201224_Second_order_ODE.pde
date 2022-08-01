float T, h, t;
float x0, x, x_new ;
float v0, v, v_new ;
float m, k;
int N;

void setup()
{
  size(600,600);
  background(255);
  T = 20.0;
  N = 8000;
  x0 = 100.0;
  v0 = 5.0;
  h = T/N;
  x = x0;
  v = v0;
  m = 1.0;
  k = 8;
 
}

void draw()
{
   t = frameCount*h;
   x_new = 1/m*(x + h*v_new);
   v_new = v + h*f(t,x);
  
   v = v_new;
   x = x_new;
   
   float tmap = map(t, 0, T, 30, width-30);
   float xmap = map(x, 0, x0+5, height-30, 30);
   
   strokeWeight(1.5);
   line(10, height/2, width-15, height/2);
   line(20, 30, 20, height-10);
   fill(0);
   textSize(24);
   text("x", 20, 20);
   text("t", width-10, height/2);
   
   noStroke();
   fill(255, 0, 0);
   ellipse(tmap, xmap, 5, 5);
 
   if(t>=T) noLoop();
}

float f(float t, float x)
{
 return -k*x;
}
