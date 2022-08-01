float T, h, u0, u, u_new, t, K, r;
int N;

void setup()
{
  size(600,600);
  background(255);
  T = 20.0;
  N = 4000;
  u0 = 0.1;
  r = 1.0;
  K = 2.0;
  h = T/N;
  u = u0;
 
}

void draw()
{
   t = frameCount*h;
   u_new = u + h*f(t,u);
   u = u_new;
   
   float tmap = map(t, 0, T, 30, width-30);
   float umap = map(u, 0, u0+0.5, height-30, 30);
   
   strokeWeight(1.5);
   line(10, height-25, width-15, height-25);
   line(20, 30, 20, height-10);
   fill(0);
   textSize(24);
   text("u", 20, 20);
   text("t", width-10, height-20);
   
   noStroke();
   fill(255, 0, 0);
   ellipse(tmap, umap, 5, 5);
 
   if(t>=T) noLoop();
}

float f(float t, float u)
{
 return r*u*(1-u/K);
}
   
