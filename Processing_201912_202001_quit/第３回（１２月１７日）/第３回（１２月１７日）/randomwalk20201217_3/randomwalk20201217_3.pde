int NUM = 10;
float x[] = new float[NUM];
float y[] = new float[NUM];
float p[] = new float[NUM];
float q[] = new float[NUM];
float dx;
float dy;
float r = 5;
float sum_x = 0;
float sum_y = 0;
float avg1 = 0;
float avg2 = 0;
float var = 0;

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
 dy = 1;

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
    q[i] = random(0,1);
  
    if(p[i] > 0.5) x[i] += dx;
    else x[i] -= dx;
    if(q[i] > 0.5) y[i] += dy;
    else y[i] -= dy;
    
    if(x[i] > width-r || x[i] < 0+r) dx *= -1;
    if(y[i] > height-r || y[i] < 0+r) dy *= -1;
   
    sum_x += x[i];
    sum_y += y[i];
    avg1 = sum_x/NUM;
    avg2 = sum_y/NUM;
    print("Average:","(", avg1, avg2, ")","Varience:","(", var, ")");
    
    noStroke();
    fill(255,random(0,255),random(0,255));
    ellipse(x[i],y[i],2*r,2*r);
  }
}
