import java.io.*;

class Main {
    public static long result(long deno1, long nume1){
        long g1 = Math.abs(deno1); // ※ Math.absは絶対値を求める（マイナスの値ならプラスにしたものを求める）メソッド
        long r1 = Math.abs(nume1);
        long tmp1;
        while ((tmp1 = r1 % g1) != 0) {
            r1 = g1;
            g1 = tmp1;
        }
        return g1;
        // 分母と分子の最大公約数で分母と分子を割る
    }

    public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 2つの分数を入力する
        System.out.println("分数の足し算をします");

        System.out.println("1つ目の分数：");
        System.out.println("分子を入力してください");
        long nume1 = Long.parseLong(br.readLine());
        System.out.println("分母を入力してください");
        long deno1 = Long.parseLong(br.readLine());
        if (deno1 <= 0) {
            System.out.println("エラー: 分母は1以上の整数です");
            System.exit(1); // 分母が0以下であればエラー // ※ System.exitはプログラムの実行を終了するメソッド
        }

        System.out.println("2つ目の分数：");
        System.out.println("分子を入力してください");
        long nume2 = Long.parseLong(br.readLine());
        System.out.println("分母を入力してください");
        long deno2 = Long.parseLong(br.readLine());
        if (deno2 <= 0) {
            System.out.println("エラー: 分母は1以上の整数です");
            System.exit(1); // 分母が0以下であればエラー 
        }

        // 1つ目の分数を約分する
        // 分母と分子の最大公約数を求める
        long g1 = result(deno1, nume1);
        // 分母と分子の最大公約数で分母と分子を割る
        nume1 /= g1;
        deno1 /= g1;
       
        // 2つ目の分数を約分する
        // 分母と分子の最大公約数を求める
        long g2 = result(deno2, nume2);
        // 分母と分子の最大公約数で分母と分子を割る
        nume2 /= g2;
        deno2 /= g2;

        // 分数の和を計算する
        long sumDeno = deno1 * deno2;
        long sumNume = nume1 * deno2 + nume2 * deno1;

        // 和の分数を約分する
        // 分母と分子の最大公約数を求める
        long gs = result(sumDeno, sumNume);        
        // 分母と分子の最大公約数で分母と分子を割る
        sumNume /= gs;
        sumDeno /= gs;

        // 式と答えを出力する
        System.out.println(nume1 + "/" + deno1 + " + " + nume2 + "/" + deno2 
                + " = " + sumNume + " / " + sumDeno);
    }
}