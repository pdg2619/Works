import java.io.*;

class Main {
     public static void main(String[] args) throws IOException {
         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

         // 入力された数字を格納する配列を準備する
         double[] nums = new double[10]; // 入力された数字を格納する配列
         int numCount = 0; // 実際に入力された数字の個数
         double sum = 0;  // 配列内の数たちの合
         int max = nums[0]; // 配列内の数中で最大値
         int min = nums[0];　// 配列内の数中で最小値

         System.out.println("数字をいくつか（上限" + nums.length + "個まで）入力してください。（何も入力せずにエンターキーを押すと終了します。）");
         // 数字を入力し配列に格納していく
         while (true) {
             // 数字を読み込む
             System.out.println((numCount + 1) + "番目の数字を入力してください");
             String str = br.readLine();
             if (str.length() == 0) {
                 break;
             }
             double num = Double.parseDouble(str);

             // 入力された数字を配列に格納する
             sum += num;
             nums[numCount] = num;
             if(nums[numCount] > max){
               max = num[i];
               }
			       if(nums[numCount] < min){
			        min = nums[i];
              }
              numCount++;

             // もし配列の大きさいっぱいまで格納していれば、ループを抜ける
             if (numCount >= nums.length) {
                 System.out.println("入力可能な最大の個数に達しました。");
                 break;
             }
         }

         // 3つ以上の数字が入力されているかチェックする
         if (numCount < 3) {
             System.out.println("エラー: 入力された数字が不足しています");
             return;
         }
         // 入力された数字の（相加）平均、中央値、上下カット平均を求める
         
         // 平均
         double avg = (sum / numCount);
         
         // double midvalue =
         // double avg2 =

        //出力
        System.out.println("平均:" + Math.round(avg*10)/10.0);
        // System.out.println("中央値:" + Math.round(midvalue*10)/10.0 );
        // System.out.println("上下カット平均:" + Math.round(avg2*10)/10.0);  
     }
}