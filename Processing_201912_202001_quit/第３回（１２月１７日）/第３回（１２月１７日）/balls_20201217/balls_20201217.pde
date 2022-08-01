int NUM = 100;
float x[] = new float[NUM];
float y[] = new float[NUM];
float dx[] = new float[NUM];
float dy[] = new float[NUM];
float r[] = new float[NUM];;

void setup()
{
  size(400,400);//width, height
  background(255);
  noStroke();
  smooth();
 
  
  for(int i =0; i < 100; i++)
  {
    r[i] = random(5,15);
    x[i] = random(0+r[i], width-r[i]);
    y[i] = random(0+r[i], height-r[i]);
    dx[i] = random(0, 1);
    dy[i] = random(0, 1);

  }

}

void draw()
{
  background(255);
  
  for(int i =0; i < 100; i++)
  {
    fill(255,i,0);
    ellipse(x[i], y[i], 2*r[i], 2*r[i]);
    x[i] += dx[i];
    y[i] += dy[i];
  
    if(x[i] > width-r[i] || x[i] < 0+r[i]) dx[i] *= -1;
    if(y[i] > height-r[i] || y[i] < 0+r[i]) dy[i] *= -1;
  }
}
