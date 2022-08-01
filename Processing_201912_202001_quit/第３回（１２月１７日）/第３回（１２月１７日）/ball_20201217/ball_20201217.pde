float x1, y1, dx1, dy1;
float x2, y2, dx2, dy2;
float r;

void setup()
{
  size(400,400);//width, height
  background(255);
  noStroke();
  smooth();
  
  r = 10;
  x1 = random(0+r, width-r);
  y1 = random(0+r, height-r);
  x2 = random(0+r, width-r);
  y2 = random(0+r, height-r);
  dx1 = random(0, 1);
  dy1 = random(0, 1);
  dx2 = random(0, 1);
  dy2 = random(0, 1);
}

void draw()
{
  background(255);
  fill(255,0,0);
  ellipse(x1, y1, 2*r, 2*r);
  fill(0,0,255);
  ellipse(x2, y2, 2*r, 2*r);
  x1 += dx1;
  y1 += dy1;
  x2 += dx2;
  y2 += dy2;
  
  if(x1 > width-r || x1 < 0+r) dx1 *= -1;
  if(y1 > height-r || y1 < 0+r) dy1 *= -1;
  if(x2 > width-r || x2 < 0+r) dx2 *= -1;
  if(y2 > height-r || y2 < 0+r) dy2 *= -1;
}
