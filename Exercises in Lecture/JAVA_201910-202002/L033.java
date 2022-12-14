import java.io.*;

class Main {
     public static void main(String[] args) throws IOException {
         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

         // 入力された数字を格納する配列を準備する
         double[] nums = new double[10]; // 入力された数字を格納する配列
         int numCount = 0; // 実際に入力された数字の個数
         double sum = 0;  // 配列内の数たちの合:初期化
         double max = 0; // 配列内の数中で最大値:初期化
         double min = 0; // 配列内の数中で最小値:初期化
         double midvalue = 0; // 配列内の数中で中央値:初期化

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
             // 入力された数字の中で最小値と最大値を格納する
             max = nums[0];
             min = nums[0];
             
             if(nums[numCount] > max){
               max = nums[numCount];
               }
			       if(nums[numCount] < min){
			        min = nums[numCount];
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
         //配列を昇順で整列
          // Selection Sort
          int i = 0; // 初期化
          int j = 0; // 初期化
          double temp = 0;
          for(i = 0 ; i < numCount-1 ; i++)
          {
            for(j = i+1 ; j < numCount ; j++)
            {
                if(nums[i] < nums[j])
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
         }
         // 入力された数字の（相加）平均、中央値、上下カット平均を求める
          // 平均
         double avg = (sum / numCount);
          //中央値
           if(numCount % 2 == 0){ // 配列個数が偶数の場合
           int m1 = numCount / 2;
           int m2 = numCount / 2 - 1;
           midvalue = (double)(nums[m1] + nums[m2]) / 2; //中央値二つの平均
           }
          else { // 配列個数が奇数の場合
           int m3 = numCount / 2;
           midvalue = nums[m3]; //中央値
           }
         // 上下カット平均
         double avg2 = ((sum-max-min) / (numCount-2));

        //出力
        System.out.println("平均:" + Math.round(avg*10)/10.0);
        System.out.println("中央値:" + Math.round(midvalue*10)/10.0);
        System.out.println("上下カット平均:" + Math.round(avg2*10)/10.0);  
     }
}