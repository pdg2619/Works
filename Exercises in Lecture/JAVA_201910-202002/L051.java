import java.io.*;

class Frac {
    public long nume; // 分子
    public long deno; // 分母
}

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 分数を入力する
        Frac f = inputFrac(br); // ※ inputFracは分数の分子と分母を入力してFracクラスのインスタンスを返すメソッド（定義はプログラムの下の方に）

        // 分数を約分する
        reduceFrac(f);
        // 約分した分数を出力する
        System.out.println(f.nume + "/" + f.deno);
    }

    public static void reduceFrac(Frac frac) {
        // 分母と分子の最大公約数を求める
        long g = Math.abs(frac.deno); 
        // ※ Math.absは絶対値を求める（マイナスの値ならプラスにしたものを求める）メソッド
        long r = Math.abs(frac.nume);
        long tmp;
        while ((tmp = r % g) != 0) {
            r = g;
            g = tmp;
        } 
        // 分母と分子の最大公約数で分母と分子を割る
        frac.nume /= g;
        frac.deno /= g;

    }

    public static Frac inputFrac(BufferedReader br) throws IOException { // ※ 「throws IOException」については8時間目で説明
        System.out.println("分子を入力してください");
        Frac f = new Frac();
        f.nume = Long.parseLong(br.readLine());
        System.out.println("分母を入力してください");
        f.deno = Long.parseLong(br.readLine());
        if (f.deno <= 0) {
            System.out.println("エラー: 分母は1以上の整数です");
            System.exit(1); // 分母が0以下であればエラー // ※ System.exitはプログラムの実行を終了するメソッド
        }
        return f;
    }
}