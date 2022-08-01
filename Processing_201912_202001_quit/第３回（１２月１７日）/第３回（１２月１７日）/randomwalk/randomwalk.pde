float x;
float y;
float p;
float dx;
float r = 5;

void setup()
{
 size(400,400);
 background(255);
 smooth();
 
 x = 200;
 y = 200;
 dx = 1;
}


void draw()
{
  background(255);
  stroke(0);
  line(0,height/2, width, height/2);
  line(width/2,0, width/2, height);
  
  p = random(0,1);
  
  if(p > 0.5) x += dx;
  else x -= dx;
  
  noStroke();
  fill(255,0,0);
  ellipse(x,y,2*r,2*r);
}
