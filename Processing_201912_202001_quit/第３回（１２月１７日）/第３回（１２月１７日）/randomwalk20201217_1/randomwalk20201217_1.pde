int NUM = 10;
float x[] = new float[NUM];
float y[] = new float[NUM];
float p[] = new float[NUM];
float dx;
float r = 5;

void setup()
{
 size(400,400);
 background(255);
 smooth();
 
 for(int i = 0; i < NUM; i++)
 {
   x[i] = width/2;
   y[i] = height/2;
 }
 
 dx = 1;
}


void draw()
{
  background(255);
  stroke(0);
  line(0,height/2, width, height/2);
  line(width/2,0, width/2, height);
  
 for(int i = 0; i < NUM; i++)
 {
    p[i] = random(0,1);
  
    if(p[i] > 0.5) x[i] += dx;
    else x[i] -= dx;
  
    noStroke();
    fill(255,0,0);
    ellipse(x[i],y[i],2*r,2*r);
  }
}
