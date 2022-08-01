int CELLNUM = 100;
int cell[] = new int[CELLNUM+2];
int newCell[] = new int[CELLNUM+2];
int rule[] = {0,1,1,1,1,0,0,0};

void setup()
{
  size(1000,1000);
  frameRate(10);
  for(int i = 1; i <= CELLNUM; i++)
    {
     cell[i] = floor(random(0,2));
    }
    cell[0] = cell[CELLNUM];
    cell[CELLNUM +  1] = cell[1];
  
    for(int i = 1; i <= CELLNUM; i++)
    {
      if(cell[i] == 0) fill(255);
      else if(cell[i] == 1) fill(0);
      else fill(255,0,0);
   
      rect((i-1)*10, 0, 10, 10);
    }
    if(frameCount == 100) noLoop();
}

void draw()
{
  for(int i = 1; i <= CELLNUM; i++)
  {
    int p = 4*cell[i-1]+2*cell[i]+1*cell[i+1];
    newCell[i] = rule[p];
  }
 
  for(int i = 1; i <= CELLNUM; i++)
  {
   cell[i] = newCell[i];
  }
  cell[0] = cell[CELLNUM];
  cell[CELLNUM +  1] = cell[1];
  
  for(int i = 1; i <= CELLNUM; i++)
    {
      if(cell[i] == 0) fill(255);
      else if(cell[i] == 1) fill(0);
      else fill(255,0,0);
   
      rect((i-1)*10, 10*frameCount, 10, 10);
    }
    if(frameCount == 100) noLoop();
}
