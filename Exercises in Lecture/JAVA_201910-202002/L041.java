import java.io.*;

class Main {
    public static int readNumbers(double[] nums) throws IOException {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      int numCount = 0; // 実際に入力された数字の個数

        System.out.println("数字をいくつか（上限" + nums.length + "個まで）入力してください。（何も入力せずにエンターキーを押すと終了します。）");
        // 数を入力し配列に格納していく
        while (true) {
            // 数字を読み込む
            System.out.println((numCount + 1) + "番目の数字を入力してください");
            String str = br.readLine();
            if (str.length() == 0) {
                break;
            }
            double num = Double.parseDouble(str);

            // 入力された数字を配列に格納する
            nums[numCount] = num;
            numCount++;

            // もし配列の大きさいっぱいまで格納していれば、ループを抜ける
            if (numCount >= nums.length) {
                System.out.println("入力可能な最大の個数に達しました。");
                break;
            }
        }
        return numCount;
      
      }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 入力された数字を格納する配列を準備する
        double[] nums = new double[10]; // 入力された数字を格納する配列
        int numCount = readNumbers(nums);
       

        // 入力された数字を出力する
        System.out.println("入力された数字は：");
        for (int i = 0; i < numCount; i++) {
            System.out.println(nums[i]);
        }
    }
}