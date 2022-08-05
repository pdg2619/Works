class Main {
     public static void main(String[] args) 
     throws InterruptedException {
         int t = 3 * 60;
         System.out.print("あと");
         while (t > 0) {
           if(t > 10){
             System.out.print(t + "秒...");
             Thread.sleep(10000); // 10000ms 待期
             t = t - 10;
            }
         else {
             System.out.print(t + "秒...");
             Thread.sleep(1000); // 1000ms 待期
             t = t - 1;
            }
         }
         System.out.println("時間です！");
     }
}